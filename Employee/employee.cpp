#include<iostream>
#include<string>
#include "employee.h"

Employee::Employee():name("New Employee"), size(3){
    this->id = id_cnt;
    id_cnt++;
    marks = new int[size];
    for(int i=0;i<3;i++){
        marks[i] = 0;
    }
    std::cout << std::endl << "Default Parameters invoked" << std::endl;
}

Employee::Employee(std::string emp_name, int sz, int* arr):name("emp_name"),size(sz){
    this->id = id_cnt;
    id_cnt++;
    marks = new int[size];
    for(int i=0;i<size;i++){
        marks[i] = arr[i];
    }
    this->name = emp_name;
    std::cout << std::endl << "Parameterize constructor invoked" << std::endl;
}

Employee::Employee(const Employee &obj){
    this->id = obj.id;
    this->name = obj.name;
    this->size = obj.size;
    marks = new int[size];
    for(int i=0;i<size;i++){
        marks[i] = obj.marks[i];
    }
    std::cout << std::endl << "Copy Constructor invoked" << std::endl;
}

void Employee::Display(){
    std::cout << "Id -- " << this->id << std::endl << "Name -- " << this->name << std::endl;
    for(int i=0;i<this->size;i++){
        std::cout << "Marks of Sub NO. " << i+1 << " is " << marks[i] << std::endl;
    }
}

void Employee::set(std::string emp_name, int sz, int* arr){
    this->name = emp_name;
    this->size = sz;
    marks = new int[size];
    for(int i=0;i<size;i++){
        marks[i] = arr[i];
    }
    this->name = emp_name;
}

Employee::~Employee(){
    delete []marks;
    std::cout << std::endl << "Destructor Invoked" << std::endl;
}

int Employee::id_cnt = 1000;
