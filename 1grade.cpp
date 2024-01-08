#include<iostream>

int main(){
    int marks1, marks2, marks3;
    std::cin >> marks1 >> marks2 >> marks3;
    int grade = (marks1 + marks2 + marks3)/3;
    if(grade < 40){
        std::cout << "You are fail" << std::endl;
    }
    else if(grade >= 40 && grade < 50){
        std::cout << "You are in second class" << std::endl;
    }
    else if(grade >= 50 && grade < 70){
        std::cout << "You are in first class" << std::endl;
    }
    else{
        std::cout << "You are the Topper" << std::endl;
    }
    return 0;
}