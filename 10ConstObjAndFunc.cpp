#include<iostream>

class Date{
    int month;
    int day;
    int year;
    public:
    Date(int day, int month, int year){
        this->day = day;
        this->month = month;
        this->year;
    }
    void set_month(int);
    int get_month() const;
};

void Date::set_month(int month){
    this->month  = month;
}

int Date::get_month() const{
    return month;
}

int main(){
    Date const obj = {17,10,2003};
    std::cout << std::endl << obj.get_month() << std::endl;
}