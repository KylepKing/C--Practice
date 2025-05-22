#include <iostream>


class Student{
    public:
        std::string name;
        int age;
        double gpa;

    Student(std::string name)//if param names are different from default variable names above you do not need this->
    {
        this->name = name;
        
    }

    Student(std::string name, int age)//if param names are different from default variable names above you do not need this->
    {
        this->name = name;
        this->age = age;
        
    }
    
    Student(std::string name, int age, double gpa)//if param names are different from default variable names above you do not need this->
    {
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

int main()
{
    //constructor = special method that is automatically called when an object is instantiated
    //              useful for assigning values to attributes as arguments
    //
    // Overloaded constructors = multiple constuctors w/ same name but different
    //                           parameters. allows for varying arguments when 
    //                           instantiating an object
    

    
    Student student1("Kyle");
    Student student2("Jake", 20);
    Student student3("Seb", 21, 3.0);

    std::cout << student1.name << '\n';
    //std::cout << student1.age << '\n';
    //std::cout << student1.gpa << '\n';
    
    std::cout << student2.name << '\n';
    std::cout << student2.age << '\n';
    //std::cout << student2.gpa << '\n';
    
    std::cout << student3.name << '\n';
    std::cout << student3.age << '\n';
    std::cout << student3.gpa << '\n';

    return 0;
}