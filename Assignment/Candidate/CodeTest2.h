#ifndef CODETEST2_H
#define CODETEST2_H

#include<iostream>
#include<string>

class CodeTest2{
    int ContestId;
    std::string Date;
    const int MaxMarks = 100;
    int Marks;

    public:
    CodeTest2();

    void setId2(int);
    void setDate2(std::string);
    void setMarks2(int);

    int getId2();
    std::string getDate2();
    int getMarks2();

    void accept2();

    friend std::ostream& operator<<(std::ostream &, CodeTest2 &);
    
    ~CodeTest2();
};

#endif // CODETEST2_H
