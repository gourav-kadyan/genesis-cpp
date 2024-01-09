#include<iostream>
int *func(){
    int x;
    return &x;
}
int main(){
    int *ptr;
    //int *p = func();
    //std::cout << p << std::endl;
    {
        int lol = 60;
        ptr = &lol;
        std::cout << *ptr << std::endl;
    }
    std::cout << *ptr << std::endl;
}