#include<iostream>
#include<string>
#include "employee.h"

int main(){
    Employee emp1;
    emp1.Display();
    int *arr = new int[3];
    for(int i=0;i<3;i++){
        arr[i] = i+1;
    }
    Employee emp2("Noice",3,arr);
    emp2.Display();

    int sze;
    std::string namee;
    std::cout << std::endl << "Enter Name -- ";
    std::cin >> namee;
    std::cout << std::endl << "Enter No. of Sub -- ";
    std::cin >> sze;

    int *vv = new int[sze];
    std::cout << "Now write all the marks --- " << std::endl;
    for(int i=0;i<sze;i++){
        std::cin >> vv[i];
    } 
    Employee emp3(namee,sze,vv);
    emp3.Display();
    Employee *emp4 = new Employee(namee,sze,vv);
    emp4->Display();
    Employee emp5 = emp1;
    std::cout << "Making array of objects" ;
    int n;
    std::cin >> n;
    Employee obj[n];
    for(int i=0;i<n;i++){
        int sz;
        std::string name;
        std::cout << std::endl << "Enter Name -- ";
        std::cin >> name;
        std::cout << std::endl << "Enter No. of Sub -- ";
        std::cin >> sz;

        int *v = new int[sz];
        std::cout << "Now write all the marks --- " << std::endl;
        for(int i=0;i<sz;i++){
            std::cin >> v[i];
        } 
        obj[i].set(name,sz,v);
        obj[i].Display();
    }

    return 0;
}