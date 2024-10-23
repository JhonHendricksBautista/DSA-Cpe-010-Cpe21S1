#include <iostream>

using namespace std;

void quickSort(int arr[], int left, int right) {
    int i = left, j = right;
    int pivot = arr[(left + right) / 2];

    while (i <= j) {
        while (arr[i] < pivot) i++;
        while (arr[j] > pivot) j--;
        if (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    if (left < j)
        quickSort(arr, left, j);
    if (i < right)
        quickSort(arr, i, right);
}

int main() {
    int dataset[15] = {4, 34, 29, 48, 53, 87, 12, 30, 44, 25, 93, 67, 43, 19,74};
    
    cout<<"UNSORTED VALUES"<<endl;
    for (int counter = 0; counter < 15; counter++) {
        cout<<dataset[counter]<<" ";
    }
    cout << endl;


    quickSort(dataset, 0,15 - 1);

    cout<<"SORTED VALUES (Quick sort)"<<endl;
    for (int counter = 0; counter < 15; counter++) {
        cout<<dataset[counter]<<" ";
    }
    cout<<endl;

    return 0;
}