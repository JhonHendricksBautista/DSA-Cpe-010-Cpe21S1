#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int max_size = 100;

void shellSort(int arr[], int size) {
    for (int gap = size / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < size; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

int main() {
    int dataset[max_size];
    srand(time(0));

    for (int i = 0; i < max_size; i++) {
        dataset[i] = rand() % 101;  
    }


    cout<<"UNSORTED VALUES"<<endl;
    for (int counter = 0; counter < max_size; counter++) {
        cout<<dataset[counter] << " ";
    }
    cout<<endl;

    shellSort(dataset, max_size);

    cout<<"SORTED VALUES (SHELL SORT)"<<endl;
    for (int counter = 0; counter<max_size; counter++) {
        cout<<dataset[counter] << " ";
    }
    cout<<endl;

    return 0;
}
