#include <iostream>

namespace estudiantes {
    // parenthesis
    // multiplication and division
    // addition and subtraction
    // left to right
    int students = 6 - 5 + 4 * (3 / 2);
}

int main() {
    int students = 20;

    students++;
    students += 2;

    students -= 1;
    students--;

    students = students * 2;
    students *= 2;

    int class_a = students / 2;
    int class_b = students / 2;
    students /= 2;

    int remainder = students % 4;
    
    std::cout << students << std::endl;
    std::cout << class_a << std::endl;
    std::cout << class_b << std::endl;
    std::cout << remainder << std::endl;
    std::cout << estudiantes::students << std::endl;

    return 0;
}