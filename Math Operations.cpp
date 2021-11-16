//
//  Math Operations.cpp
//  Math Operations
//
//  Created by Saloni Singhal on 9/23/21.
//

#include <iostream>
int main(){
    int x{0};
    int y{0};
    std::cout<<"Enter value of x:";
    std::cin>> x;
    
    std::cout<<"Enter value of y:";
    std::cin>> y;
    
    if (x>y) {
        std::cout<<"Value of x is greater than y"<< std::endl;
    }
    else
        std::cout<<"Value of y is greater than x" << std::endl;
}
