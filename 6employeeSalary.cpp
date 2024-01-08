#include<iostream>
#include<string>

class Employee{
    public:
    int salary;
    std::string id;
    std::string name;
    Employee(std::string id, std::string name, int salary){
        this->id = id;
        this->name = name;
        this->salary = salary;
    }
};

int main(){
    Employee emp1("6969","Ayush",69000);
    Employee emp2("6996","Asim",9600);
    if(emp1.salary > emp2.salary){
        std::cout << emp1.name << std::endl;
    }
    else{
        std::cout << emp2.name << std::endl;
    }
    return 0;
}