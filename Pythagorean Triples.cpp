//
//  Pythagorean Triples.cpp
//  HW_2
//
//  Created by Saloni Singhal on 10/30/21.
//

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int side1{0},side2{0},hyp{0},hypsq,side1sq,side2sq;
    hypsq= pow(hyp,2);
    side1sq= pow(side1,2);
    side2sq= pow(side2,2);
    for (int side1sq{0}; side1sq<=500; side1sq++) {
        if (side2sq{0}; side2sq<=500; side2sq) {
            if(hypsq{0}; hypsq<=500; hypsq){
                cout<<side1sq<<"+"<<side2sq<<"="<<hypsq<<endl;
            }
        }
    }
    system ("pause");
    return 0;
    }
    
