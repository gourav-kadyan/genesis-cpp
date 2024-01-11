#include "./Sample.h"
#include<iostream>
Sample::Sample():x(0),y(0){
    std::cout << "default constructor called" << std::endl;
}
Sample::Sample(int a):x(a),y(0){
    std::cout << " constructor called" << std::endl;
}
Sample::Sample(int a, int b):x(a),y(double(b)){
    std::cout << "3 constructor called" << std::endl;
}
Sample::Sample(int a, double b):x(a),y(b){
    std::cout << "4 constructor called" << std::endl;
}