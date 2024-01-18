
#ifndef DATE_H
#define DATE_H

#include<iostream>

class Date{
    int day;
    int month;
    int year;

    public:
    //constructors
    Date();
    Date(int,int,int);
    
    //setters
    void setDay(int);
    void setMonth(int);
    void setYear(int);

    //getters
    int getDay();
    int getMonth();
    int getYear();

    //accept
    void accept();

    //operator overloading <<
    friend std::ostream& operator<<(std::ostream &, Date &);

};

#endif // DATE_H
