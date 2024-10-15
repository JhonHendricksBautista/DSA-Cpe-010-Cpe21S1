#include <iostream>
using namespace std;

int countInstancesArray(int arr[], int size, int key) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
    return count; 
}

int main() {
    int arr[] = {15, 18, 2, 19, 18, 0, 8, 14, 19, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 18;

    int count = countInstancesArray(arr, size, key);
    cout << "Count of instances (Array): " << count << endl;

    return 0;
}
