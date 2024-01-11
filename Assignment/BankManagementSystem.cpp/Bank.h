#ifndef BANK_H
#define BANK_H

#include<iostream>
#include<string>
class Bank{
    int Account_Number;
    static int acc_number;
    std::string User;
    int Money;
    public:
    Bank();
    int Create_Account(std::string,int);
    void debit(int);
    void credit(int);
    void check_Balance();
    void show_Details();
    void show();
};

#endif // BANK_H
