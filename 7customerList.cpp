#include<iostream>
#include<string>

class Customer{
    int id;
    std::string phone;
    public:
    void set(int id, std::string phone){
        this->id = id;
        this->phone = phone;
    }
    void show(){
        std::cout << id << " " << phone << std::endl;
    }
};

int main(){
    Customer noice[3];
    for(int i=0;i<3;i++){
        int id;
        std::string phone;
        std::cin >> id >> phone;
        noice[i].set(id,phone);
    }
    for(int i=0;i<3;i++){
        noice[i].show();
    }
    return 0;
}