#ifndef CONTACT_H
#define CONTACT_H

#include<iostream>
#include<string>

class Contact{
    std::string Phone;
    std::string Name;
    public:
    Contact();
    Contact(std::string,std::string);
    void Update(std::string,std::string);
    void Display();
};

#endif // CONTACT_H
