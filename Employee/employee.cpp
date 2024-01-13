#include <iostream>
#include "employee.h"
 
   int  Employee:: id_cnt = 0 ;
   Employee:: Employee():name("New_User"),size(3)
    {
        std::cout << "Default Constructor Called !!"<< std::endl ;
        id_cnt++ ;
        id = id_cnt ;
        marks = new int[size] ;
        for(int i = 0 ; i < size ;i++)
        marks[i] = 0 ;
    }
 
   Employee:: Employee(std::string nm ,int sz , int *arr):name(nm), size(sz)
    {
        std::cout << "Parmeterized Constructor Called !!"<< std::endl ;
        id_cnt++  ;
        id = id_cnt ;
 
        marks = new int[size] ;
        for(int i = 0 ; i < size ; i++)
        {
            marks[i] = arr[i] ;
        }
    }
 
   Employee::   Employee(Employee & e){
        std::cout << "Copy Constructor Called !!"<< std::endl ;
        this->name = e.name ;
        this->id = e.id ;
        this->size = e.size ;
        marks = new int[size] ;
        for(int i = 0 ; i < size ; i++)
        {
            marks[i] = e.marks[i] ;
        }
    }
 
    void Employee::Display()
    {
        std::cout <<  "Name = " << name << " id : " << id << std::endl;
 
        for(int i = 0 ; i < size ;i++)
        {
            std::cout<< "Marks Obtained at Exam " << i+1 <<"-> " <<marks[i] << std::endl ;  
        }
    }

    std::ostream& operator<<(std::ostream &obj,Employee &emp){
        obj << "Employee Id is " << emp.id << std::endl;
        obj << "Employee Name is " << emp.name << std::endl;
        int size = emp.size;
        obj << "No. of Subjects " << size << std::endl;
        for(int i=0;i<size;i++){
            obj << i << " no Marks are " << emp.marks[i] << std::endl;
        }
        return obj;
    }
 
    Employee:: ~Employee()
    {
        std::cout << "Destructor Called !!"<< std::endl ;
        delete []marks ;
    }