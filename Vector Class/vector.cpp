#include<iostream>

void swap(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}

class vector{
    int maxsize;
    int *arr;
    int n;
    int x;
    public:
    vector(){
        this->maxsize = 10;
        this->n = 0;
        this->x = 0;
        arr = new int[this->maxsize];
        for(int i=0;i<maxsize;i++){
            arr[i] = x;
        }
    }
    vector(int size){
        this->maxsize = size;
        this->n = 0;
        this->x = 0;
        arr = new int[this->maxsize];
        for(int i=0;i<maxsize;i++){
            arr[i] = x;
        }
    }
    vector(int size, int x){
        this->maxsize = size;
        this->n = size;
        this->x = x;
        arr = new int[this->maxsize];
        for(int i=0;i<maxsize;i++){
            arr[i] = x;
        }
    }

    void push_back(int val){
        if(this->n + 1 >= this->maxsize){
            int *v = new int[this->maxsize];
            for(int i=0;i<this->maxsize;i++){
                v[i] = arr[i];
            }
            this->maxsize *= 2;
            arr = new int[this->maxsize];
            for(int i=0;i<this->maxsize;i++){
                arr[i] = x;
            }
            for(int i=0;i<this->n;i++){
                arr[i] = v[i];
            }
            arr[this->n++] = val;
            delete []v;
        }
        else{
            arr[this->n++] = val;
        }
    }

    void pop_back(){
        if(n == 0){
            std::cout << "size is already is 0" << std::endl;
            return ;
        }
        arr[n--] = x;
    }

    int size(){
        return this->n;
    }

    int max_size(){
        return this->maxsize;
    }

    int& operator[](int index){
        return arr[index];
    }

    friend int accumulate(vector &);

    friend void sort(vector &);

    ~vector(){
        std::cout << "destructor called" << std::endl;
        delete []arr;
    }

};

int accumulate(vector &obj){
    int sum = 0;
    for(int i=0;i<obj.size();i++){
        sum += obj.arr[i];
    }
    return sum;
}

void sort(vector &obj){
    int n = obj.size();
    for(int i=0;i<n;i++){
        for(int j = i+1; j < n; j++){
            if(obj.arr[i] > obj.arr[j]){
                swap(obj.arr[i],obj.arr[j]);
            }
        }
    }
}

int main(){
    
    vector v;
    for(int i=0;i<50;i++){
        v.push_back(50 - i);
    }

    for(int i=0;i<50;i++){
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    sort(v);

    for(int i=0;i<50;i++){
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    std::cout << v.size() << " " << v.max_size() << " " << accumulate(v) << std::endl;
    return 0;
}


/*
creagte class emp;loyee with id int , name sring , birth date and designation enum desi - clertk, manager, endineer , sal float create a list of 3 customer and display thier details in the ascendung order of their salary
*/