#include<iostream>
#include "Calculate.h"

Calculate::Calculate(){};

void Calculate::set(int x,int y){
    this->a = x;
    this->b = y;
}

void Calculate::Add(){
    std::cout << "Add --- " << this->a + this->b << std::endl;
}

void Calculate::Sub(){
    std::cout << "Sub --- " << this->a - this->b << std::endl;
}

void Calculate::Multi(){
    std::cout << "Multi --- " << this->a * this->b << std::endl;
}

void Calculate::Divide(){
    if(this->b == 0){
        std::cout << " Invalid Operation "
    }
    else{
        std::cout << (float)(this->a / this->b) << std::endl;
    }
}
