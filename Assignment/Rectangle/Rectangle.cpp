#include<iostream>
#include "./Rectangle.h"
Rectangle::Rectangle(){
    this->length = 0.0;
    this->width = 0.0;
}

Rectangle::Rectangle(float a, float b):length(a),width(b){}

void Rectangle::setlength(float len){
    this->length = len;
}

void Rectangle::setwidth(float wid){
    this->width = wid;
}

float Rectangle::perimeter(){
    return 2*(length + width);
}

float Rectangle::area(){
    return length*width;
}

void Rectangle::show(){
    std::cout << this->length << " " << this->width << std::endl;
}

int Rectangle::samearea(const Rectangle &obj){
    float area1 = this->length * this->width;
    float area2 = obj.length * obj.width;
    return area1 == area2;
}