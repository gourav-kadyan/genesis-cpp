//good 
#include<iostream>
char s[69] = "noice heehe";
char& replace(int i){
    return s[i];
}
int main(){
    replace(3) = 'x';
    std::cout << replace(3) << std::endl;
    return 0;
}