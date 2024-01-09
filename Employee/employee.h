

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>
#include<string>

class Employee{
    private:
    int id;
    std::string name;
    int size;
    int *marks;
    static int id_cnt;
    public:
    Employee();
    Employee(std::string, int , int *);
    Employee(const Employee &);
    void Display();
    void set(std::string,int ,int*);
    ~Employee();
};

#endif // EMPLOYEE_H
