#include<iostream>
class base{
    public:
    base(){
        std::cout << "constructor is called" << std::endl;
    }
    ~base(){
        std::cout << "destructor is called" << std::endl;
    }
};
int main(){
    base s1;
    return 0;
}