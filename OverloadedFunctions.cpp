#include <iostream>

void bakePizza(); // function declaration
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

//a functions name + its parameters = function signature
//functions can have the same name as long as they have different parameters
//different versions of the function are called based on the parameters/arguments passed by the fucntion call

int main()
{
    bakePizza();
    bakePizza("pepperoni");
    bakePizza("pepperoni", "mushrooms"); // function call

    return 0;
}

void bakePizza(){
    std::cout << "Here is your pizza!\n";
}
void bakePizza(std::string topping1){
    std::cout << "Here is your " << topping1 << " pizza!\n";
}
void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
}