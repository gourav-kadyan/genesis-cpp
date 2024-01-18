#include<iostream>
#include<string>
#include "CodeTest1.h"

//constructor
CodeTest1::CodeTest1():ContestId(1),Date("01-Jan-2024"),Marks(100){}


//getters
void CodeTest1::setId1(int id){
    this->ContestId = id;
}

void CodeTest1::setDate1(std::string date){
    this->Date = date;
}

void CodeTest1::setMarks1(int marks){
    this->Marks = marks;
}

//setters
int CodeTest1::getId1(){
    return this->ContestId;
}

std::string CodeTest1::getDate1(){
    return this->Date;
}

int CodeTest1::getMarks1(){
    return this->Marks;
}


//accept function
void CodeTest1::accept1(){
    int id,marks;
    std::string date;
    std::cout << "Enter Test 1 Id -> ";
    std::cin >> id;
    setId1(id);
    std::cout << "Enter Test 1 Marks -> ";
    std::cin >> marks;
    setMarks1(marks);
    try{
        if(marks > 100 || marks < 0){
            throw 69;
        }
    }
    catch(int x){
        std::cout << "Invalid Marks" << std::endl;
        exit(0);
    }
    std::cout << "Enter the date of Test1 -> ";
    std::cin >> date;
    setDate1(date);
}

std::ostream& operator<<(std::ostream& os, CodeTest1& obj){
    os << std::endl << "Test 1 id -> " << obj.getId1() << std::endl;
    os << "Test 1 Date is -> " << obj.getDate1() << std::endl;
    os << "Test 1 Marks is -> " << obj.getMarks1() << std::endl;
    return os;
}

CodeTest1::~CodeTest1(){
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Code Test 1 Destructor Called" << std::endl;
}


