// Candidate.cpp
#include<iostream>
#include<string>
#include "Candidate.h"

int Candidate::id_count = 1000; // Initialize the static variable

Candidate::Candidate() {
    this->name = "New Employee";
    this->applied = Engineer;
    this->id = id_count;
    id_count++;
}

Candidate::Candidate(std::string Naam, Job J) : name(Naam), applied(J) {
    this->id = id_count;
    id_count++;
}

Candidate::Candidate(const Candidate &obj) {
    this->id = id_count;
    id_count++;
    this->name = obj.name;
    this->applied = obj.applied;
}

void Candidate::setName(std::string name) {
    this->name = name;
}

void Candidate::setJob(Job j) {
    this->applied = j;
}

std::string Candidate::getName() {
    return this->name;
}

std::string Candidate::getJob() {
    std::string s= "";
    switch(this->applied){
        case Clerk:
            s = "Clerk";
            break;
        
        case Manager:
            s = "Manager";
            break;
        
        case Engineer:
            s = "Engineer";
            break;
        
        default:
            s = "Plumber";
            break;
    }

    return s;
}

void Candidate::accept() {
    std::string x;
    std::cin >> x;
    setName(x);
    int app;
    std::cin >> app;
    setJob(static_cast<Job>(app));
}

Candidate::~Candidate() {
    std::cout << "Destructor Called" << std::endl;
}

std::ostream& operator<<(std::ostream &os, Candidate &c) {
    os << "ID: " << c.id << std::endl << "Name: " << c.name << std::endl << "Job: " << c.getJob();
    return os;
}

