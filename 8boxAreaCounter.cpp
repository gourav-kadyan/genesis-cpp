#include<iostream>

class box{
    int width;
    int height;
    public:
    static int count;
    box(int width, int height){
        count++;
        this->width = width;
        this->height = height;
        std::cout << std::endl << " Current Box Present " << count << std::endl;
    }
    
    void area(){
        std::cout << "Area of Box no." << count << " is " << width*height << std::endl;
    }
    ~box(){
        --count;
    }
};

int box::count;

int main(){
    box *b1 = new box(6,9);
    b1->area();
    box *b2 = new box(8,8);
    b2->area();
    box *b3 = new box(9,9);
    b3->area();
    return 0;
}