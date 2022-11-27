#include <iostream>

int main() {
    const double PI = 3.14159265358979323846;
    const int LIGHTSPEED = 299792458;
    double radius = 8;
    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;

    std::cout << area * LIGHTSPEED << "cm is covered by a circle of " << radius << "cm radius at the speed of light in one second" << std::endl;

    return 0;
}