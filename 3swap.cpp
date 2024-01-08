#include<iostream>
void swap(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}
void swap(double &x, double &y){
    double temp = x;
    x = y;
    y = temp;
}
int main(){
    int a,b;
    std::cin >> a >> b;
    std::cout << a << " " << b << " before swapping ";
    swap(a,b);
    std::cout << a << " " << b << " after swapping" << std::endl;
    double x,y;
    std::cin >> x >> y;
    std::cout << x << " " << y << " before swapping ";
    swap(x,y);
    std::cout << x << " " << y << " after swapping" << std::endl;
    return 0;
}