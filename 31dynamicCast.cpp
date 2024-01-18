#include<iostream>
#include<string>

class base{
    public:
    virtual void show(){
        std::cout << "Hello" << std::endl;
    }
};

class child1:public base{
    public:
    void show(){
        std::cout << "this is child1" << std::endl;
    }
    void display(){
        std::cout << "noifdlks" << std::endl;
    }
};

class child2:public base{
    public:
    void show(){
        std::cout << "this is child2" << std::endl;
    }
};



int main(){
    base *b = new child1;
    child1 *p;
    p = dynamic_cast<child1*>(b);
    p->display();
    p->base::show();
    return 0;
}