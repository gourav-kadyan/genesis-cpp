#include<iostream>
#include<string>
#include<limits.h>
class Employee{
    int salary;
    std::string name;
    public:
    void set(std::string name, int salary){
        this->name = name;
        this->salary = salary;
    }
    int salaryy(){
        return salary;
    }
};

int main(){
    int n;
    std::cin >> n;
    Employee emp[n];
    int salary;
    std::string name;
    for(int i=0;i<n;i++){
        std::cin >> name >> salary;
        emp[i].set(name,salary);
    }
    int min_salary = INT_MAX;
    int max_salary = INT_MIN;

    for(int i=0;i<n;i++){
        min_salary = emp[i].salaryy() < min_salary ? emp[i].salaryy() : min_salary;
        max_salary = emp[i].salaryy() > max_salary ? emp[i].salaryy() : max_salary;
    }

    std::cout << min_salary << " " << max_salary << std::endl;
}