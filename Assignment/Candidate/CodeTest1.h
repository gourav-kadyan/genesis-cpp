#ifndef CODETEST1_H
#define CODETEST1_H

#include<iostream>
#include<string>

class CodeTest1{
    int ContestId;
    std::string Date;
    const int MaxMarks = 100;
    int Marks;

    public:
    CodeTest1();

    void setId1(int);
    void setDate1(std::string);
    void setMarks1(int);

    int getId1();
    std::string getDate1();
    int getMarks1();

    void accept1();

    friend std::ostream& operator<<(std::ostream &, CodeTest1 &);
    
    ~CodeTest1();
};

#endif // CODETEST1_H
