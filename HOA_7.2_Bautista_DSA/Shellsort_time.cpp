#include <iostream>
using namespace std;

void shellSort(int arr[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
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
    int dataset[15] = {4, 34, 29, 48, 53, 87, 12, 30, 44, 25, 93, 67, 43, 19,74};
   

    cout<<"UNSORTED VALUES"<<endl;
    for (int counter = 0; counter < 15; counter++) {
        cout << dataset[counter] << " ";
    }
    
    cout<<endl; 
    
    shellSort(dataset, 15);

    cout<<"SORTED VALUES (Shell sort)"<<endl;
    for (int counter = 0; counter < 15; counter++) {
        cout << dataset[counter] << " ";
    }
    cout << endl;

    return 0;
}