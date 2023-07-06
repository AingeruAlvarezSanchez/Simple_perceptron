#include <random>
#include "perceptron.hpp"

Perceptron::Perceptron(int params) {
    //random initialization of the weight and bias.
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dis(-1.0, 1.0);
    for (int i = 0; i < params; i++) {
        weights.push_back(dis(gen));
    }
    bias = dis(gen);
}

double Perceptron::predict(std::vector<double> input) {
    double prediction = 0.0;

    for (size_t i = 0; i < input.size(); i++) {
        prediction += input[i] * weights[i];
    }

    prediction += bias;
    return std::tanh(prediction);
}

void Perceptron::train(std::vector<std::vector<double>> trainingData, std::vector<double> labels, int epochs) {
    for (int i = 0; i < epochs; i++) {
        for (size_t j = 0; j < trainingData.size(); j++) {
            std::vector<double> param = trainingData[j];
            double              expected = labels[j];

            double prediction = predict(param);
            double error = expected - prediction;
            for (size_t pos = 0; pos < weights.size(); pos++) {
                weights[pos] += error * LEARNING_RATE * param[j];
            }
            bias += error * LEARNING_RATE;
        }
    }
}
