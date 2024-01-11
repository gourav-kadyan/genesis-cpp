#include<iostream>
#include<string>
#include "./Bank.h"
#define MaxSize 50
int arr[MaxSize] = {0};
int check_Account(int acc_number){
    for(int i=0;i<MaxSize;i++){
        if(arr[i] == acc_number){
            return i+1;
        }
    }
    return 0;
}

void add_Account(int acc_number, int size){
    arr[size] = acc_number;
}

void remove_account(int acc_number){
    for(int i=0;i<MaxSize;i++){
        if(arr[i] == acc_number){
            arr[i] = 0;
        }
    }
    std::cout << "Your Account has been removed, and Please get your cash from Cashier" << std::endl;
}

int find_account(){
    for(int i=0;i<MaxSize;i++){
        if(arr[i] == 0){
            return i;
        }
    }
    return -1;
}

int main(){
    Bank User[MaxSize];
    while(true) {
        std::cout << "Welcome to the Bharat Bank" << std::endl;
        std::cout << "1 - Create Account" << std::endl;
        std::cout << "2 - Already have an Account" << std::endl;
        std::cout << "3 - Exit " << std::endl;
        int n;
        std::cin >> n;
        switch(n){
            case 1:
                {
                    int size = find_account();
                    if(size == -1){
                        std::cout << "Server Reached Max Limits" << std::endl;
                        break;
                    }
                    std::string name;
                    int Money;
                    std::cout << "Please Tell Your Name ";
                    std::cin >> name;
                    std::cout << "Do you want to add money" << std::endl;
                    std::cout << "If you don't want then input 0" << std::endl;
                    std::cin >> Money;
                    int a_number = User[size].Create_Account(name, Money);
                    add_Account(a_number,size);
                }
                break;
            case 2:
                {
                    int ac_number;
                    std::cout << "Please tell Your Account Number --- ";
                    std::cin >> ac_number;
                    int index = check_Account(ac_number);
                    if(index){
                        index--;
                        bool flag = true;
                        while(flag) {
                            int x;
                            std::cout << "Please Input What You want" << std::endl;
                            std::cout << "1 - Check Account Details " << std::endl;
                            std::cout << "2 - Check Bank Balance " << std::endl;
                            std::cout << "3 - Debit Money " << std::endl;
                            std::cout << "4 - Credit Money " << std::endl;
                            std::cout << "5 - Remove Account " << std::endl;
                            std::cout << "6 - Exit " << std::endl;
                            std::cin >> x;
                            switch(x){
                                case 1:
                                    User[index].show_Details();
                                    break;
                                case 2:
                                    User[index].check_Balance();
                                    break;
                                case 3:
                                    int amount;
                                    std::cout << "Enter the amount -- ";
                                    std::cin >> amount;
                                    User[index].debit(amount);
                                    break;
                                case 4:
                                    int value;
                                    std::cout << "Enter the amount -- ";
                                    std::cin >> value;
                                    User[index].credit(value);
                                    break;
                                case 5:
                                    remove_account(ac_number);
                                    flag = false;
                                    break;
                                case 6:
                                    flag = false;
                                    break;
                                default:
                                    std::cout << "Please input Valid value" << std::endl;
                                    break;
                            }
                        }
                    }
                    else{
                        std::cout << "This Account Number Didn't Exist " << std::endl;
                    }
                }
                break;
            case 3:
                exit(0);
                break;
            default:
                std::cout << "Please input Valid value" << std::endl;
                break;
        }
    }
    return 0;
}
