#include <iostream>

int main() {
    char x = 100;

    int correct = 8;
    int questions = 10;
    double score = correct /(double)questions * 100;

    std::cout << x << std::endl;
    std::cout << score << std::endl;

    return 0;
}