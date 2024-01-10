#include<iostream>
class base;
class derive{
    int a;
    int b;
    public:
    derive(int a, int b){
        this->a = a;
        this->b = b;
    }
    friend float avg(base obj,derive object);
};

class base{
    int a;
    int b;
    public:
    base(int a, int b){
        this->a = a;
        this->b = b;
    }
    friend float avg(base obj,derive object);
};

float avg(base obj,derive object){
    float x =  (float)(obj.a + obj.b)/2;
    float y =  (float)(object.a + object.b)/2;
    return (x+y)/2;
}

int main(){
    base obj(5,10);
    derive nope(6,10);
    std::cout << avg(obj,nope) << std::endl;
    return 0;
}