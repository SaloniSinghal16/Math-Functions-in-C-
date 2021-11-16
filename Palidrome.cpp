//
//  Palidrome.cpp
//  HW_2
//
//  Created by Saloni Singhal on 10/28/21.
//

#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d,e;
    int num=0;

     cout << "Enter a positive five digit number: ";
     cin >> num;
    a=num/10000;
    b=num/1000%10;
    c=num/100%10;
    d=num/10%10;
    e=num%10;
    if(a==e and b==d){
        cout<<"Palidrome!";
    }
    else{
            cout<<"Not a Palidrome!";
    
    }
    return 0;
}
