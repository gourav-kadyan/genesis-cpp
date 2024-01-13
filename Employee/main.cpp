#include <iostream>
#include "employee.h"
int solve(int *arr, int size){
    int avg = 0;
    for(int i=0;i<size;i++){
        avg += arr[i];
    }
    return avg/size;
}

int findIndex(int arr[],int n){
    int maxi = -1;
    int index = 0;
    for(int i=0;i<n;i++){
        if(maxi < arr[i]){
            index = i;
            maxi = arr[i];
        }
    }
    return index;
}
int main()
{
    std::cout << "Enter the number of employee" << std::endl ;
    int n ;
    std::cin >> n;
    Employee e5[n];
 
    for(int i = 0 ; i < n ; i++)
    {
        //e5[i] = new Employee;  
        std::cout << "Enter Name for Employee : " << i+1 <<  std:: endl;
        std::string name;
        std::cin >> name  ;
        e5[i].setName(name) ;
 
        std::cout << "Enter number of subjects for which you appeared!!"<< std::endl ;
        int sz ;
        std::cin >> sz ;
        e5[i].setSize(sz) ;
 
        int *exam  =new int[sz] ;
        for(int i = 0 ; i < sz ; i++)
        {
            std::cout<< "Enter Marks for exam" <<i+1 << std::endl ;
            std::cin>>exam[i] ;
        }
        e5[i].setMarks(exam) ;
    }

    int ans[n];
    for(int i=0;i<n;i++){
        ans[i] = solve(e5[i].getMarks(),e5[i].getSize());
    }
    for(int i=0;i<n;i++){
        std::cout << ans[i] << std::endl;
    }

    int x = findIndex(ans,n);
    std::cout << ans[x] << " " << std::endl;

    std::cout << std::endl << std::endl << std::endl;
    std::cout << e5[x] ;
    std::cout << std::endl << std::endl;
    
}