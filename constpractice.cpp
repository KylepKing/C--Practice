#include <iostream>
int main(){

    const double PI = 3.14159; //const sets a variable to be constant, meaning it cannot be changed
    //const variables are usually written in all caps
    double radius = 10;
    double circumference = 2 * PI * radius; //circumference of a circle is 2 * pi * radius

    const int LIGHT_SPEED = 299792458; //speed of light in m/s
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
    const int AREA = WIDTH * HEIGHT; //area of a rectangle is width * height
    std::cout << circumference << "cm"<< '\n'; //output the circumference of the circle
    std::cout << "The area for my rectangle with a width of " << WIDTH << " and a height of " << HEIGHT << " is: " << AREA << '\n';
    return 0;
}