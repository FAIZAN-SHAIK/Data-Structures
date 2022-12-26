#include <bits/stdc++.h>

using namespace std;

int *create_array(int size,int init){
    int *new_storage {nullptr};
    new_storage = new int[size];

    for(int i =0; i<size; i++){
        *(new_storage+i)= init;
    }
    return new_storage;

}

void display(int *array,int size){

    for(int i =0; i<size; i++){
        cout << array[i] << endl;
    }
}


int main() {

    int *array {nullptr};


     int size;
     int init;
     cin >> size >> init;

     array = create_array(size,init);

     display(array,size);

     return 0;

}