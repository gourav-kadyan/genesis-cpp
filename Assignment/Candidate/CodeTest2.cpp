#include<iostream>
#include<string>
#include "CodeTest2.h"

//constructor
CodeTest2::CodeTest2():ContestId(1),Date("01-Jan-2024"),Marks(100){}


//getters
void CodeTest2::setId2(int id){
    this->ContestId = id;
}

void CodeTest2::setDate2(std::string date){
    this->Date = date;
}

void CodeTest2::setMarks2(int marks){
    this->Marks = marks;
}

//setters
int CodeTest2::getId2(){
    return this->ContestId;
}

std::string CodeTest2::getDate2(){
    return this->Date;
}

int CodeTest2::getMarks2(){
    return this->Marks;
}


//accept function
void CodeTest2::accept2(){
    int id,marks;
    std::string date;
    std::cout << "Enter Test 2 Id -> ";
    std::cin >> id;
    setId2(id);
    std::cout << "Enter Test 2 Marks -> ";
    std::cin >> marks;
    setMarks2(marks);
    try{
        if(marks > 200 || marks < 0){
            throw 69;
        }
    }
    catch(int x){
        std::cout << "Invalid Marks" << std::endl;
        exit(0);
    }
    std::cout << "Enter the date of Test2 -> ";
    std::cin >> date;
    setDate2(date);
}

std::ostream& operator<<(std::ostream& os, CodeTest2& obj){
    os << std::endl << "Test 2 id -> " << obj.getId2() << std::endl;
    os << "Test 2 Date is -> " << obj.getDate2() << std::endl;
    os << "Test 2 Marks is -> " << obj.getMarks2() << std::endl;
    return os;
}

CodeTest2::~CodeTest2(){
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Code Test 2 Destructor Called" << std::endl;
}


