#include<iostream>
#include<string>
#include "Bill.h"

//constructors
Bill::Bill():billNumber(69),billAmount(69){}

//setters
void Bill::setNumber(int number){
    this->billNumber = number;
}

void Bill::setAmount(int amount){
    this->billAmount = amount;
}

//getters
int Bill::getNumber(){
    return this->billNumber;
}

int Bill::getAmount(){
    return this->billAmount;
}

//accept
void Bill::accept(){
    customerInfo.accept();
    billDate.accept();
    int number,amount;
    std::cout << "Enter Bill Number -> ";
    std::cin >> number;
    setNumber(number);
    std::cout << "Enter Bill Amount -> ";
    std::cin >> amount;
    setAmount(amount);
}

//operator overload <<
std::ostream& operator<<(std::ostream &os, Bill &ob){
    os << std::endl << std::endl;
    os << "<------------Bill Receipt------------>" << std::endl;
    os << ob.customerInfo;
    os << ob.billDate << std::endl;
    os << "Bill Number is -> " << ob.getNumber() << std::endl;
    os << "Bill Amount is -> " << ob.getAmount() << std::endl << std::endl;
    return os;
}

Bill::~Bill(){
    std::cout << "Bill Class Destructor Called" << std::endl;
}