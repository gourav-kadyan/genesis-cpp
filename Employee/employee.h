#ifndef P1_H
#define P1_H
 
#include <iostream>
 
class Employee
{   
    private :
    int id ;
    std::string name  ;
    static int id_cnt ;
    int* marks  ;
    int size ;
    public :
 
    Employee() ;
 
    Employee(std::string ,int  , int *) ;
 
 
    Employee(Employee & ) ;
 
 
    void Display() ;
 
    
 
    int getId() const { return id; }
 
    std::string getName() const { return name; }
    void setName(const std::string &name_) { name = name_; }
    
    int getSize() const { return size; }
    void setSize(int size_) { size = size_; }
 
    int* getMarks() const { return marks; }
    void setMarks(int* marks_) { marks = marks_; }
    friend std::ostream& operator<<(std::ostream &,Employee &);
 
~Employee() ;
};
#endif // P1_H