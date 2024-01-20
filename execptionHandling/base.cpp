#include<iostream>
#include<string>
#include "base.h"
#include "exception.cpp"
base::base():a(10),b(10){}
base::base(int x, int y):a(x),b(y){}

int base::divide(){
    int x;
    try{
        if(this->b == 0){
            throw custom("The Denominator is Zero");
        }
        x = this->a/this->b;
    }
    catch(custom e){
        std::cout << e.what() << std::endl;
        exit(0);
    }
    return x;
}

int base::multi(){
    int x = this->a * this->b;
   try{
        if(x == 0){
            throw custom("One of the value is zero");
        }
    }
    catch(custom e){
        std::cout << e.what() << std::endl;
        exit(0);
    }
    return x;
}

int base::sub(){
    int x = this->a - this->b;
    try{
        if(x <= 0){
            throw custom("B is bigger than A");
        }
    }
    catch(custom e){
        std::cout << e.what() << std::endl;
        exit(0);
    }
    return x;
}