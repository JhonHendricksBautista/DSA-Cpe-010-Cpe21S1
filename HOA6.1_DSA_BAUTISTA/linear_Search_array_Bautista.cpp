#include <iostream>
#include <cstdlib>  
#include <ctime>   

using namespace std;

int linearSearch(int dataset[], int size, int target){
        for (int i = 0; i < size; i++) {
        if (dataset[i] == target) {
            return i; 
        }
    }
    return -1;  
}

int main() {
    const int max_size = 50;
    int dataset[max_size];
    srand(time(0));
    for(int i = 0; i < max_size; i++){
        dataset[i] = rand() % 100;
    }
    int target;
    cout<<"Enter number to search: ";
    cin>> target;
    
    int results =linearSearch(dataset, max_size, target);
    
    if (results != -1) {
        cout<<"Number found at index: "<< results <<endl;
    } 
    else {
        cout<<"Number not found in the dataset."<<endl;
    }
    return 0;
}
    
