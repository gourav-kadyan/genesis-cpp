#include<iostream>
#include<cstring>
class base{
    int a;
    int b;
    public:
    base():a(0),b(0){}
    base(int x, int y):a(x),b(y){}

    void display(){
        std::cout << a << " " << b << std::endl;
    }

    base operator +(base &obj){
        base temp;
        temp.a = this->a + obj.a;
        temp.b = this->b + obj.b;
        return temp;
    }

    base operator-(){
        base temp;
        temp.a = -this->a;
        temp.b = -this->b;
        
        return temp;
    }

    base& operator++(){
        // base temp;
        // temp.a = ++this->a;
        // temp.b = ++this->b;
        // --this->a;
        // --this->b;
        // return temp;

        ++this->a;
        ++this->b;
        return *this;
    }

    base operator++(int) //for post increment -- execption
    {
        base temp;
        temp.a = this->a++;
        temp.b = this->b++;
        return temp;
    }
    bool operator==(base &obj){
        return (this->a == obj.a) && (this->b == obj.b);
    }
    bool operator!=(base &obj){
        return !((this->a == obj.a) && (this->b == obj.b));
    }

    base operator+(int x){
        base temp;
        temp.a = this->a + x;
        temp.b = this->b + x;
        return temp;
    }

    friend base operator+(int, base &);
    friend std::ostream& operator<<(std::ostream &, base &);
    friend std::istream& operator>>(std::istream &, base &);

};

class test{
    char name[20];
    public:
    test(){
        strcpy(name,"hello");    
    }
    test(char *temp){
        strcpy(name,temp);
    }
    char& operator[](int index){
        return name[index];
    }
};

base operator+(int x,base &obj){
    base temp;
    temp.a = obj.a + x;
    temp.b = obj.b + x;
    return temp;
}

std::ostream& operator<<(std::ostream& obj, base &p){
    obj << p.a << " " << p.b << std::endl;
    return obj;
}

std::istream& operator>>(std::istream& obj, base &p){
    obj >> p.a >> p.b;
    return obj;
}

int main(){
     base obj(1,2);
    // base obj1(2,3);
    // base obj2 = obj1 + obj;
    // obj2.display();


    //unary operator
    // base obj3 = -obj2;
    // obj3.display();
    // //-obj3;
    // obj2.display();

    //pre increment;
    // base obj2(3,4);
    // base obj4 = ++obj2;
    // base obj5 = ++obj2;
    // obj2.display();
    // obj5.display();
    // obj4.display();

    //post increment
    // base obj(1,2);
    // base obj1 = obj++;
    // obj.display();
    // obj1.display();

    //same for pre decrement and post decrement


    //equal to and not equal to
    // base obj1(1,2);
    // base obj2(1,3);
    // bool a1 = (obj == obj1);
    // bool a2 = (obj != obj2);
    // std::cout << a1 << " " << a2 << std::endl;


    //half user defined half primitive  
    // base obj1 = obj + 10;
    // obj1.display();

    //half primitive half user defined -- help of friend function
    // base obj1 = 10 + obj;
    // obj1.display();


    //insertion operator overloading -- friend function
    // base obj2(3,4);
    // std::cout << obj << " " << obj2 << std::endl;

    //input operator overloading -- friend function
    // base obj1;
    // std::cin >> obj1;
    // std::cout << obj1;


    //[] operator overload -- subscript operator overload
    char lol[20] = "yello";
    test temp(lol);
    std::cout << temp[0] << std::endl;
    temp[0] = 'S';
    std::cout << temp[0] << std::endl;

    return 0;
}