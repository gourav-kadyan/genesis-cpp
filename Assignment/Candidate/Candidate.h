// Candidate.h
#ifndef CANDIDATE_H
#define CANDIDATE_H

#include <iostream>

enum Job { Clerk, Manager, Engineer };

class Candidate {
    std::string name;
    static int id_count; // Initialize the static variable here
    int id;
    Job applied;
public:
    Candidate();
    Candidate(std::string, Job);
    Candidate(const Candidate &);
    void setName(std::string);
    std::string getName();
    void setJob(Job);
    std::string getJob();
    void accept();
    friend std::ostream& operator<<(std::ostream &, Candidate &);
    ~Candidate();
};

#endif // CANDIDATE_H
