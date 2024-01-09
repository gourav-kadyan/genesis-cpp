#include<iostream>

class base{
    std::string cname;
    int id;
    public:
    void set(int id, std::string cname){
        this->id = id;
        this->cname = cname;
    }
    int get_id(){
        return this->id;
    }
    std::string get_cname(){
        return this->cname;
    }
};

int main(){
    int id;
    std::string name;
    base obj1;
    std::cin >> id >> name;
    obj1.set(id,name);
    base obj2;
    std::cin >> id >> name;
    obj2.set(id,name);
    base obj3;
    int val;
    std::cin >> val;
    if(obj1.get_cname() == obj2.get_cname()){
        obj3.set(val,"KPIT");
    }
    else{
        std::string cname = obj1.get_cname() + obj2.get_cname();
        obj3.set(val,cname);
    }
    std::cout << obj3.get_id() << " " << obj3.get_cname() << std::endl;
}