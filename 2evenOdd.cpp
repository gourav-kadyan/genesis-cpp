#include<iostream>

int main(){
    int evenSum = 0;
    int oddSum = 0;
    for(int i=1;i<=10;i++){
        if(i%2 == 0){
            evenSum += i;
        }
        else{
            oddSum += i;
        }
    }
    std::cout << evenSum << " " << oddSum << std::endl;
    return 0;
}