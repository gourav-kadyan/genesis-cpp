#include<iostream>

class A{
    public:
    virtual void show(){
        std::cout << "class A show function" << std::endl;
    }
};

class B:public A{
    public:
    void show(){
        std::cout << "class B show function" << std::endl;
    }
};

class C:public A{
    public:

};

int main(){
    // A obj2;
    // obj2.show();
    // B obj;
    // obj.show();
    // C obj1;
    // obj1.show();

    A *obj3 = new B;
    obj3->show();
    A *obj4 = new C;
    obj4->show();
    A *obj5 = new A;
    obj5->show();
}