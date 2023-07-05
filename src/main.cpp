#include <iostream>
#include "perceptron.hpp"

int main() {
    Perceptron perceptron(2);

    std::vector<std::vector<double> >   fruits {{RED, 0.4}, {GREEN, 0.2}, {RED, 0.5}, {YELLOW, 0.8}, {GREEN, 1.0}};
    std::vector<double>                 labels {1.0, -0.5, 1.0, 0.5, -1.0};

    perceptron.train(fruits, labels, 1000);

    std::cout << "The first fruits should be an APPLE (1.0) and the perceptron says it is a " << perceptron.predict(fruits[0]) << "\n";
    std::cout << "The second fruit should be a PEAR (-0.5) and the perceptron says it is a " << perceptron.predict(fruits[1]) << "\n";
    std::cout << "The third fruit should be an APPLE (1.0) and the perceptron says it is a " << perceptron.predict(fruits[2]) << "\n";
    std::cout << "The first fruit should be a PINEAPPLE (0.5) and the perceptron says it is a " << perceptron.predict(fruits[3]) << "\n";
    std::cout << "The first fruit should be a WATERMELON (-1.0) and the perceptron says it is a " << perceptron.predict(fruits[4]) << "\n";
    return 0;
}
