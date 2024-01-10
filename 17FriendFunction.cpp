#include<iostream>

class base{
    int a;
    int b;
    public:
    base(int a, int b){
        this->a = a;
        this->b = b;
    }
    friend float avg(base obj);
};

float avg(base obj){
    return (float)(obj.a + obj.b)/2;
}
 
int main(){
    base obj(5,10);
    std::cout << avg(obj) << std::endl;
    return 0;
}