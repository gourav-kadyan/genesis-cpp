
#include<iostream>
#include<string>
#include<cstring>

class Customer{
    // std::string customer_name;

    //using char * 
    char *customer_name;
    public:
    //constructors
    Customer();
    // Customer(std::string);
    Customer(char *);
    Customer(Customer &);

    //setters
    // void setName(std::string);
    void setName(char *);

    //getters
    // std::string getName();
    char *getName();

    //accept
    void accept();

    //operator overload <<
    friend std::ostream& operator<<(std::ostream &, Customer &);

    //Destructor
    ~Customer();

};