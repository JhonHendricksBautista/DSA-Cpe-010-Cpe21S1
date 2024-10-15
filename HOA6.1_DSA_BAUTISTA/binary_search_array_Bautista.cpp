#include <iostream>
using namespace std;


void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
};

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
};

int binarySearch(int arr[], int low, int up, int find){
    while(low <= up){
        int mid = (low + up) / 2;
        
        if (arr[mid] == find){
            return mid;
            break;
        }
        else if (arr[mid] < find){
            low = mid + 1;
        }
        else{
            up = mid - 1;
        };
    };
    return -1;

};

int main() {
    int num[10] = {10, 2, 3, 5, 12, 9, 32, 12, 11, 7};
    int size = sizeof(num) / sizeof(num[0]);

    cout<< "Original array: ";
    displayArray(num, size);

    bubbleSort(num, size);

    cout<< "Sorted array: ";
    displayArray(num, size);

    cout<<"Enter number you want to search: ";
    int search;
    cin>> search;
    
   int result =  binarySearch(num, 0, size -1,  search);
    if(result != -1){
        cout<<"Number '"<<search<<"' is found in array";
    }
    else{
        cout<<"Number '"<<search<<"' is not found in array";
    }
    
    return 0;
}
    
