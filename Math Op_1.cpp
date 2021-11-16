//
//  Math Op_1.cpp
//  Math Operations
//
//  Created by Saloni Singhal on 9/23/21.
//

#include <iostream>
int main() {
    int number1{0};
    int number2{0};
    int remainder{0};
    
    std::cout<<"Enter first number: ";
    std::cin>> number1;
    
    std::cout<<"Enter second number: ";
    std::cin>> number2;
    
    remainder=number1%number2;
    std::cout<<"The remainder of two numbers is: "<< remainder <<std::endl;
}
