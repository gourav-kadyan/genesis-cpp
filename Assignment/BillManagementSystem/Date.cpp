#include<iostream>
#include "Date.h"

//constructor
Date::Date():day(1),month(1),year(2024){}
Date::Date(int din, int mahina, int saal):day(din),month(mahina),year(saal){}

//setters
void Date::setDay(int day){
    this->day = day;
}

void Date::setMonth(int month){
    this->month = month;
}

void Date::setYear(int year){
    this->year = year;
}

//getters
int Date::getDay(){
    return this->day;
}

int Date::getMonth(){
    return this->month;
}

int Date::getYear(){
    return this->year;
}

//accept
void Date::accept(){
    int day,month,year;
    std::cout << "Enter a Year -> ";
    std::cin >> year;
    setYear(year);
    std::cout << "Enter a Month -> ";
    std::cin >> month;
    try{
        if(month >= 1 && month <= 12){
            setDay(month);
        }
        else{
            throw 69;
        }
    }
    catch(int x){
        std::cout << "Enter a Valid Month Please" << std::endl;
        throw;
        return;
    }
    std::cout << "Enter a Day -> ";
    std::cin >> day;
    try{
        if(month == 2){
            if(day < 1 || day > 28){
                throw 69;
            }
        }
        else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
            if(day < 1 || day > 31){
                throw 69;
            }
        }
        else{
            if(day < 1 || day > 30){
                throw 69;
            }
        }
    }
    catch(int x){
        std::cout << "Enter a Valid Day" << std::endl;
        throw;
    }
    setDay(day); 
}

std::ostream& operator<<(std::ostream &os, Date &obj){
    os << "Day is " << obj.getDay() << std::endl;
    os << "Month is " << obj.getMonth() << std::endl;
    os << "Year is " << obj.getYear() << std::endl;
    return os;
}