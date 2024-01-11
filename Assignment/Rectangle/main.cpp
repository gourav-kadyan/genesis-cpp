#include<iostream>
#include "./Rectangle.h"

int main(){
    Rectangle obj;
    obj.setlength(5);
    obj.setwidth(5);
    Rectangle obj2;
    obj2.setlength(5);
    obj2.setwidth(4);

    std::cout << obj.area() << " " << obj.samearea(obj2) << std::endl;
    return 0;
}