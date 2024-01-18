#include<iostream>
#include<string>

class base{
    public:
    virtual void show() = 0;
};

class child1:public base{
    public:
    void show(){
        std::cout << "this is child1" << std::endl;
    }
};

class child2:public base{
    public:
    void show(){
        std::cout << "this is child2" << std::endl;
    }
};

int main(){
    base *b = new child2;
    bool x = (typeid(*b) == typeid(child1));
    if(x){
        std::cout << "child1" << std::endl;
    }
    else{
        std::cout << "child2" << std::endl;
    }
    return 0;
}