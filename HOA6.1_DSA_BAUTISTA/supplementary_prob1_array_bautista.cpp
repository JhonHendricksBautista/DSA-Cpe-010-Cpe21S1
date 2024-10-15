#include <iostream>
using namespace std;

int sequentialSearchArray(int arr[], int size, int key) {
    int comparisons = 0;
    for (int i = 0; i < size; i++) {
        comparisons++;
        if (arr[i] == key) {
            return comparisons; 
        }
    }
    return comparisons; 
}

int main() {
    int arr[] = {15, 18, 2, 19, 18, 0, 8, 14, 19, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 18;

    int comparisons = sequentialSearchArray(arr, size, key);
    cout << "Number of comparisons (Array): " << comparisons << endl;

    return 0;
}
