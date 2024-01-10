#include<iostream>
class base;
class derived{
    int a;
    int b;
    public:
    derived(int a, int b){
        this->a = a;
        this->b = b;
    }
    float avg(base obj);
};

class base{
    int a;
    int b;
    public:
    base(int a, int b){
        this->a = a;
        this->b = b;
    }
    friend float derived:: avg(base obj);
};

float derived:: avg(base obj){
    float x = (float)(obj.a + obj.b)/2;
    float y = (float)(this->a + this->b)/2;
    return (x+y)/2;
}
 
int main(){
    base obj(5,10);
    derived object(10,15);
    std::cout << object.avg(obj) << std::endl;
    return 0;
}