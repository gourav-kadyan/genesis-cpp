#ifndef BILL_H
#define BILL_H

#include<iostream>
#include<string>
#include "Customer.h"
#include "Date.h"

class Bill{
    int billNumber;
    Customer customerInfo;               
    Date billDate;
    int billAmount;

    public:
    Bill();

    //setters
    void setNumber(int);
    void setAmount(int);

    //getters
    int getNumber();
    int getAmount();

    //accept
    void accept();

    //operator overload <<
    friend std::ostream& operator<<(std::ostream&, Bill &);

    //destructor
    ~Bill();
};

#endif // BILL_H
