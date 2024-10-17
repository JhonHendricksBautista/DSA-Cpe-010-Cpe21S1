// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int max_size = 100;




int main() {
    int dataset[max_size];
    srand(time(0));
    for (int i = 0; i < max_size; i++){
      dataset[i] = rand() % 101;  
    };
   
    cout<< "UNSORTED VALUES"<<endl;
    cout << endl;
    for (int counter = 0; counter < max_size; counter ++ ){
      cout <<  dataset[counter]<<" ";
    };

    int length = 100;
   
    for(int first_num = 0; first_num < length - 1; first_num ++ ){
      int min_position = first_num;
     
      for(int second_num  = first_num + 1; second_num < length ; second_num ++){
          if(dataset[second_num]<dataset[min_position]){
              min_position = second_num;
          }
      };
     
      if(min_position != first_num){
          int temp = dataset[first_num];
          dataset[first_num] = dataset[min_position];
          dataset[min_position] = temp;
      };
       
    };
   
    cout << endl;
    cout << endl;
   
    for (int counter = 0; counter < max_size; counter ++ ){
      cout <<  dataset[counter]<<" ";
    };
   
   
    return 0;
}