#include<iostream>
#include<string>
#include "Bank.h"

Bank::Bank(){}

int Bank::Create_Account(std::string name,int paisa){
    this->User = name;
    std::cout<<User << ", ";
    this->Money = paisa;
    this->Account_Number = acc_number++;
    std::cout << "Your Account has been open and Your Account Number is " << this->Account_Number << std::endl;
    return Account_Number;
}

void Bank::debit(int paisa){
    if(paisa <= 0){
        std::cout << "Invalid Operation" << std::endl;
    }
    else if(this->Money < paisa){
        std::cout << "You don't have Enough Amount" << std::endl;
    }
    else{
        std::cout << "Money has been Debited" << std::endl;
        this->Money = this->Money - paisa;
    }
    std::cout << "Current Money is -- " << this->Money << std::endl;
}

void Bank::credit(int paisa){
    if(paisa <= 0){
        std::cout << "Invalid Operation" << std::endl;
    }
    else{
        std::cout << "Money has been Debited" << std::endl;
        this->Money = this->Money + paisa;
    }
    std::cout << "Current Money is -- " << this->Money << std::endl;
}

void Bank::check_Balance(){
    std::cout << "Your Current Balance is --- " << this->Money << std::endl;
}

void Bank::show_Details(){
    std::cout << "Name --- " << this->User << std::endl;
    std::cout << "Account Number is --- " << this->Account_Number << std::endl;
    std::cout << "Current Balance is --- " << this->Money << std::endl;
}

void Bank::show(){
    std::cout << this->User << std::endl;
}

int Bank::acc_number = 1000;
//std::string Bank::Name = "";

