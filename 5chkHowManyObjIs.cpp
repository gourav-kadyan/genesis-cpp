#include<iostream>

class base{
    public:
    static int counter;
    base(){
        counter++;
        std::cout << counter << " currently present" << std::endl;
    }
    ~base(){
        counter--;
        std::cout << counter << " currently present" << std::endl;
    }
};

int base::counter;

int main(){
    base b;
    base b1;
    base b2;
    return 0;
}