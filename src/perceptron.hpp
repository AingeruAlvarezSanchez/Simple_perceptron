#ifndef SIMPLE_PERCEPTRON_PERCEPTRON_HPP
#define SIMPLE_PERCEPTRON_PERCEPTRON_HPP

#include <vector>

#define LEARNING_RATE   0.5
#define RED             1.0
#define ORANGE          0.7
#define YELLOW          0.5
#define GREEN           -1.0

class Perceptron {
private:
    std::vector<double> weights;
    double              bias;

public:
    explicit Perceptron(int params);

    double predict(std::vector<double> input);

    void train(std::vector<std::vector<double> > trainingData, std::vector<double> labels, int epochs);
};


#endif //SIMPLE_PERCEPTRON_PERCEPTRON_HPP
