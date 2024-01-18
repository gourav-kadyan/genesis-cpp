#include<iostream>
#include<string>

#include "Candidate.h"

int main(){
    Candidate obj[3];
    for(int i=0;i<3;i++){
        std::cout << std::endl;
        obj[i].accept();
        std::cout << std::endl;
    }
    for(int i=0;i<3;i++){
        std::cout << std::endl;
        std::cout << obj[i] << std::endl;
        std::cout << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Enter a Candidate Id to Check that Candidate is Selected Or Not" << std::endl;
    int id;
    std::cin >> id;
    bool notfind = true;
    bool isSelected = false;
    for(int i=0;i<3;i++){
        if(id == obj[i].getId()){
            notfind = false;
            if(obj[i].getMarks1() > 70 && obj[i].getMarks2() > 150){
                isSelected = true;
            }
            else if(obj[i].getMarks1() > 60 && obj[i].getMarks2() > 160){
                isSelected = true;
            }
        }
    }
    if(notfind){
        std::cout << std::endl << "The Given Id Doesn't Exists" << std::endl;
    }
    else{
        if(isSelected){
            std::cout << "The Given Candidate is Selected" << std::endl;
        }
        else{
            std::cout << "The Given Candidate is not Selected" << std::endl;
        }
    }
    return 0;
}