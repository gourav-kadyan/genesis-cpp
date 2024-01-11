#include<iostream>
#include "Calculate.h"

int main(){
    Calculate obj;
    bool flag = true;
    while(flag){
        int a,b;
        std::cout << "Enter Two Numbers -- " ;
        std::cin >> a >> b;
        obj.set(a,b);
        std::cout << "1 for Add" << std::endl;
        std::cout << "2 for Subtract " << std::endl;
        std::cout << "3 for Multi " << std::endl;
        std::cout << "4 for divide " << std::endl;
        std::cout << "5 for exit " << std::endl;
        int n;
        std::cin >> n;
        switch(n){
            case 1:
                obj.Add();
                break;
            case 2:
                obj.Sub();
                break;
            case 3:
                obj.Multi();
                break;
            case 4:
                obj.Divide();
                break;
            case 5:
                flag = false;
                break;
            default:
                std::cout << std::endl << " Invalid Number " << std::endl;
                break;
        }
    }
    return 0;
}