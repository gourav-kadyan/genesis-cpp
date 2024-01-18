
#ifndef CANDIDATE_H
#define CANDIDATE_H

#include<iostream>
#include<string>
#include "CodeTest1.h"
#include "CodeTest2.h"
enum Job {Clerk, Manager, Engineer};
class Candidate:public CodeTest1, public CodeTest2{
    std::string Candidate_Name;
    int Candidate_Id;
    Job JobApplied;

    public:
    Candidate();
    Candidate(std::string, int, Job);
    Candidate(Candidate &);

    void setName(std::string);
    void setId(int);
    void setJob(Job);

    std::string getName();
    int getId();
    std::string getJob();

    void accept();

    friend std::ostream& operator<<(std::ostream&, Candidate &);

    ~Candidate();
};

#endif // CANDIDATE_H
