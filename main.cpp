
//library that provides basic commands
#include <iostream>

int main(){
    int number1 {45};
    int number2 {60};

    std::cout<<"Number 1: "<< number1<<std::endl;
    std::cout<<"Number 2: "<< number2<<std::endl;

    std::cout<<"----------------------------"<<std::endl;

    std::cout<<std::boolalpha;

    std::cout<<"number1 < number 2:  "<<(number1 < number2)<<std::endl;
    std::cout<<"number1 <= number 2:  "<<(number1 <= number2)<<std::endl;  
    std::cout<<"number1 > number 2:  "<<(number1 > number2)<<std::endl; 
    std::cout<<"number1 >= number 2:  "<<(number1 >= number2)<<std::endl; 
    std::cout<<"number1 == number 2:  "<<(number1 == number2)<<std::endl; 
    std::cout<<"number1 != number 2:  "<<(number1 != number2)<<std::endl; 
}
