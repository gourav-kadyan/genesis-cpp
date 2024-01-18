#include<iostream>
#include<string>

class exception{
    public:
    static std::string name(){
        return "Name is Not Present";
    }
    static std::string age(){
        return "Age is Under 18";
    }
};