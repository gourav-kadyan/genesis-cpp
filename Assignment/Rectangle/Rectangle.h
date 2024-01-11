

// #ifndef RECTANGLE_H
// #define RECTANGLE_H
#include<iostream>

class Rectangle{
    float length;
    float width;
    public:
    Rectangle();
    Rectangle(float, float);
    void setlength(float);
    void setwidth(float);
    float area();
    float perimeter();
    void show();
    int samearea(const Rectangle &);
};

//#endif // RECTANGLE_H
