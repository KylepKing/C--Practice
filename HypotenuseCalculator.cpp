#include <iostream>
#include <cmath>

int main(){

    double a;
    double b;
    double c;

    std::cout << "Enter side A: ";
    std::cin >> a;

    std::cout << "Enter side B: ";
    std::cin >> b;
    // Pythagorean theorem: c^2 = a^2 + b^2

    // c = sqrt(a^2 + b^2)
    c = sqrt(pow(a, 2) + pow(b,2));

    std::cout << "Side C: " << c << '\n';


    return 0;
}