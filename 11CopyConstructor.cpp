#include<iostream>

class base{
    int val;
    public:
    
    base(int val){
        this->val = val;
    }
    base(const base &obj){
        this->val = obj.val;
    }
    void show(){
        std::cout << val << std::endl;
    }
};

int main(){
    base b1 = 88;
    base b2(b1);
    b2.show();
    b1.show();
    return 0;
}