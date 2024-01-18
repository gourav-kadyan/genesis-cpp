#include<iostream>
#include<string>
#include "Candidate.h"

//constructor
Candidate::Candidate():Candidate_Name("NoName"),Candidate_Id(69),JobApplied(Job(1)){}
Candidate::Candidate(std::string name,int id,Job j):Candidate_Name(name),Candidate_Id(id),JobApplied(j){}
Candidate::Candidate(Candidate &ob){
    this->Candidate_Name = ob.Candidate_Name;
    this->Candidate_Id = ob.Candidate_Id;
    this->JobApplied = ob.JobApplied;
}


//setters
void Candidate::setName(std::string name){
    this->Candidate_Name = name;
}

void Candidate::setId(int id){
    this->Candidate_Id = id;
}

void Candidate::setJob(Job j){
    this->JobApplied = j;
}


//getters
std::string Candidate::getName(){
    return this->Candidate_Name;
}

int Candidate::getId(){
    return this->Candidate_Id;
}

std::string Candidate::getJob(){
    std::string noice = "";
    switch(this->JobApplied){
        case Clerk:
            noice = "Clerk";
            break;
        case Manager:
            noice = "Manager";
            break;
        case Engineer:
            noice = "Engineer";
            break;
        default:
            noice = "Choose Correct Job";
            break;
    }
    return noice;
}

void Candidate::accept(){
    std::string name;
    std::cout << "Enter Your Name -> " ;
    std::cin >> name;
    setName(name);
    int id;
    std::cout << "Enter Your Id -> ";
    std::cin >> id;
    setId(id);
    std::cout << "Enter Your Job -> " << std::endl;
    std::cout << "0 - For Clerk" << std::endl;
    std::cout << "1 - For Manager" << std::endl;
    std::cout << "2 - For Engineer" << std::endl;
    int job;
    std::cin >> job;
    setJob(Job(job));
    std::cout << "Code Test 1 Details" << std::endl;
    accept1();
    std::cout << "Code Test 2 Details" << std::endl;
    accept2();
}

std::ostream& operator<<(std::ostream& os, Candidate& obj){
    os << std::endl << "Candidate Id -> " << obj.getId() << std::endl;
    os << "Candidate Name -> " << obj.getName() << std::endl;
    os << "Candidate Job -> " << obj.getJob() << std::endl;
    os << std::endl;
    os << "Code Test 1 Details" << std::endl;
    os << "Code Test 1 Id -> " << obj.getId1() << std::endl;
    os << "Code Test 1 Date -> " << obj.getDate1() << std::endl;
    os << "Code Test 1 Marks -> " << obj.getMarks1() << std::endl;
    os << "Code Test 2 Details" << std::endl;
    os << "Code Test 2 Id -> " << obj.getId2() << std::endl;
    os << "Code Test 2 Date -> " << obj.getDate2() << std::endl;
    os << "Code Test 2 Marks -> " << obj.getMarks2() << std::endl;
    
    return os;
}

Candidate::~Candidate(){
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Candidate Destructor Called" << std::endl;
}

