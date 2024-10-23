#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int max_size = 100; 

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int* L = new int[n1];
    int* R = new int[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    delete[] L; 
    delete[] R;  
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    int dataset[max_size];
    srand(static_cast<unsigned>(time(0)));

    for (int i = 0; i < max_size; i++) {
        dataset[i] = rand() % 101;  
    }

    cout << "UNSORTED VALUES" << endl;
    for (int counter = 0; counter < max_size; counter++) {
        cout << dataset[counter] << " ";
    }
    cout << endl;

    mergeSort(dataset, 0, max_size - 1);

    cout << "SORTED VALUES (MERGE SORT)" << endl;
    for (int counter = 0; counter < max_size; counter++) {
        cout << dataset[counter] << " ";
    }
    cout << endl;

    return 0;
}
