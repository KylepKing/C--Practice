#include <iostream>
//inside a class public methods can access private but outside a class you cannot access private

class Stove{
    //public:
        //int temperature = 0; // public so accessable outside the class(aka global)
    private:
        int temperature = 0; //private
    public:

    int getTemperature() //getter
    {
        return temperature;
    }
    void setTemperature(int temperature)
    {
        if(temperature < 0)
        {
            this->temperature = 0;
        }
        else if(temperature >= 10)
        {
            this->temperature = 10;
        }
        else
        {
            this->temperature = temperature;
        }
        
    }
};

int main()
{
    //Abstraction = hiding unnecessay data from outsdie a class
    //getter = function that makes a private attribute READABLE
    //setter = function that makes a private attribute WRITEABLE

    Stove stove;

    //stove.temperature = 1000000; does not work now that temp is private
    stove.setTemperature(5);

    std::cout << "The temperature setting is : " << stove.getTemperature(); // have to use getter to display temp

    return 0;
}