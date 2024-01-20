#include<iostream>
#include<string>
#include<exception>

class custom:public std::exception{
    std::string err;
    public:
    custom(){}
    custom(std::string s){
        this->err = s;
    }
    const std::string what(){
        return this->err;
    }
};