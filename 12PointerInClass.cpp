#include<iostream>

class base{
    int val;
    public:
    base(int val){
        this->val = val;
    }
    int get(){
        return this->val;
    }
};

int main(){
    base obj[3] = {69, 96, 69};
    base *p;
    p = obj;
    for(int i=0;i<3;i++){
        std::cout << p->get() << std::endl;
        p++;
    }
    return 0;
}