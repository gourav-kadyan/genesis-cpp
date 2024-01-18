#include<iostream>
#include<string>
#include "Base.h"
#include "exception.cpp"

base::base():name(""),age(-1){}
base::base(std::string nm, int umar):name(nm),age(umar){}

void base::accept(){
    std::string name;
    std::cin >> name;
    this->name = name;
    int n;
    std::cin >> n;
    this->age = n;
}

std::ostream& operator<<(std::ostream& os, base &obj){
    try{
        if(obj.name == ""){
            throw exception::name();
        }
        else if(obj.age < 18){
            throw exception::age();
        }
    }
    catch(std::string s){
        std::cout << s << std::endl;
        exit(0);
    }
    std::cout << "Name is -> " << obj.name << std::endl;
    std::cout << "Age is -> " << obj.age << std::endl;
    return os;
}