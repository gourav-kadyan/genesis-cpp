#include<iostream>
#include "Bill.h"

int main(){
    // Bill obj[3];
    Bill *obj = new Bill[3];
    try{
        for(int i=0;i<3;i++){
            obj[i].accept();
        }
    }
    
    catch(int x){
        std::cout << "Please Write Valid Values" << std::endl;
        return 0;
    }
    for(int i=0;i<3;i++){
        std::cout << obj[i] << std::endl;
    }

    std::cout << std::endl;
    //calculating all bill amount
    int bill = 0;
    for(int i=0;i<3;i++){
        bill += obj[i].getAmount();
    }
    std::cout << std::endl << std::endl << "Total Bill Amount is -> " << bill << std::endl << std::endl;


    //search for bill number and display details
    int billNumber;
    std::cout << "Enter bill number which you want to find -> ";
    std::cin >> billNumber;
    try{
        bool find = false;
        for(int i=0;i<3;i++){
            if(obj[i].getNumber() == billNumber){
                find = true;
                std::cout << obj[i] << std::endl;
            }
        }
        if(find == false){
            throw 69;
        }
    }
    catch(int x){
        std::cout << "The Given Bill Number Doesn't Exists" << std::endl << std::endl << std::endl;
    }
    delete []obj;
    return 0;
}