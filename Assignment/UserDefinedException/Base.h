#include<iostream>
#include<string>

class base{
    std::string name;
    int age;

    public:
    base();
    base(std::string,int);
    void accept();
    friend std::ostream& operator<<(std::ostream &, base &);
};