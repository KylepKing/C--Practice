#include <iostream>


class Human
{
    public:
        std::string name;
        std::string occupation;  // can set defaults if you want
        int age;

        //a method is a function that belongs to a class
        void eat()
        {
            std::cout << "this person is eating\n";
        }
        void drink()
        {
            std::cout << "this person is drinking\n";
        }
        void sleep()
        {
            std::cout << "this person is sleeping\n";
        }
};

int main()
{
    // object = A collection of attributes and methods. They can have characteristics 
    // could perform actions. Can be used to mimic real world items (ex. phone, book, dog).
    // created from a class which acts as a "blueprint"

    Human human1;
    Human human2;

    human1.name = "Rick";
    human1.occupation = "scientist";
    human1.age = 70;

    human2.name = "Morty";
    human2.occupation = "student";
    human2.age = 15;

    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    std::cout << human2.name << '\n';
    std::cout << human2.occupation << '\n';
    std::cout << human2.age << '\n';

    human1.eat();
    human1.drink();
    human1.sleep();

    human2.eat();
    human2.drink();
    human2.sleep();

    return 0;
}