#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int max_size = 20;

void bubbleSort(int arr[], int start, int end) {
    for (int i = start; i <= end; i++) {
        for (int j = start; j <= end - (i - start) - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high], i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void QuickSortwithOthers(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        bubbleSort(arr, low, pi - 1);
        bubbleSort(arr, pi + 1, high);
    }
}

int main() {
    int dataset[max_size];
    srand(time(0));
    for (int i = 0; i < max_size; i++){
      dataset[i] = rand() % 50;  
    };
   
    cout<< "UNSORTED VALUES"<<endl;
    for (int counter = 0; counter < max_size; counter ++ ){
      cout <<  dataset[counter]<<" ";
    };
    cout<<endl;
   QuickSortwithOthers(dataset, 0, max_size - 1);

    cout << "SORTED VALUES"<<endl;
    for (int counter = 0; counter < max_size; counter ++ ){
      cout <<  dataset[counter]<<" ";
    };

    return 0;
}
    
