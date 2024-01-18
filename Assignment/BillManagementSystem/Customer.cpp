#include<iostream>
#include<string>
#include<cstring>
#include "Customer.h"

//constructors
// Customer::Customer():customer_name(""){}
Customer::Customer():customer_name(NULL){}
// Customer::Customer(std::string name):customer_name(name){}
Customer::Customer(char *p){
    customer_name = new char[strlen(p) + 1];
    strcpy(customer_name,p);
}
Customer::Customer(Customer &obj){
    customer_name = new char[strlen(obj.customer_name) + 1];
    strcpy(customer_name,obj.customer_name);
}


//setters
// void Customer::setName(std::string name){
//     this->customer_name = name;
// }
void Customer::setName(char *p){
    customer_name = new char[strlen(p) + 1];
    strcpy(customer_name,p);
}


//getters
// std::string Customer::getName(){
//     return this->customer_name;
// }
char *Customer::getName(){
    return customer_name;
}

//accept
// void Customer::accept(){
//     std::string name;
//     std::cout << "Enter the name of Customer -> ";
//     std::cin >> name;
//     setName(name);
// }
void Customer::accept(){
    char *p = new char[50];
    std::cout << "Enter the name of Customer -> ";
    std::cin >> p;
    setName(p);
}

//operator overload
std::ostream& operator<<(std::ostream &os, Customer &sus){
    os << "Name of the Customer is -> " << sus.getName() << std::endl;
    return os;
}

//destructor
Customer::~Customer(){
    std::cout << "Customer class Destructor Called" << std::endl;
    delete []customer_name;
}

