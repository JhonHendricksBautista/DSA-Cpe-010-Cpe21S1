#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == key) {
            return mid; // Key found
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; 
}

int main() {
    int arr[] = {3, 5, 6, 8, 11, 12, 14, 15, 17, 18};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 8;
    
    int index = binarySearch(arr, 0, size - 1, key);
    if (index != -1) {
        cout << "Key " << key << " found at index " << index << endl;
    } else {
        cout << "Key " << key << " not found." << endl;
    }

    return 0;
}
