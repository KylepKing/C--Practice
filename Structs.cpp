#include <iostream>


struct student{
    std::string name;
    double gpa;
    bool enrolled; // can set default values aka bool enrolled = true;
};

struct Car{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car car);
void paintCar(Car &car, std::string color);

int main()
{

    // struct = a structure that group related varaibles under one name
    //          structs can contain many different data types,
    //          variables in a struct are known as "members"
    //          members can be accessed with . "Class Member Access Operator"

    student student1;
    student1.name = "Spongebob";
    student1.gpa = 3.2;
    student1.enrolled = true;

    student student2;
    student2.name = "Patrick";
    student2.gpa = 2.1;
    student2.enrolled = true;

    student student3;
    student3.name = "Squidward";
    student3.gpa = 4.0;
    student3.enrolled = false;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';

    std::cout << student3.name << '\n';
    std::cout << student3.gpa << '\n';
    std::cout << student3.enrolled << '\n';



    //passing struct as argument example

    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "red";

    car2.model = "Corvette";
    car2.year = 2024;
    car2.color = "blue";

    paintCar(car1, "silver");
    paintCar(car2, "gold");

    printCar(car1); // pass by value
    printCar(car2); // pass by value
    return 0;
}

void printCar(Car car) // this is a copy of the struct // if you want to work with the original struct use &
{
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}
void paintCar(Car &car, std::string color)// need to use & so it changes original car# properties
{
    car.color = color;
}