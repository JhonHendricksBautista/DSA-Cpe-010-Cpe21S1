#include <iostream>

using namespace std;

int main (){
    //Initialize needed variables and array
	int size = 5;
	int numbers[5] = {5, 4, 3, 2, 1};
	int counter = 0;
	int index_2 = 0;

    //show original array
	cout<<"BEFORE REVERSAL"<<endl;
	for(int i = 0; i < 5; i++){
		cout<<numbers[i]<<endl;
	};
	
	cout<<"AFTER REVERSAL"<<endl;
	// create temporary array
	int temp_numbers[5]= {};
	//use for loop to rearrange the array in the temporary array by indexing
		for(int index = 4; index >= 0; index--){
			temp_numbers[counter] = numbers[index];
			numbers[index] = 0;
			counter++;
		};
    //reversed order of array
	// use for loop to put back arranged values of array from temporary array by indexing
	for(int counter_2 = 0; counter_2 < 5; counter_2++){
		numbers[index_2] = temp_numbers[counter_2];
		cout<<numbers[index_2]<<endl;
		index_2++;
	};	
	

		
	return 0;
}
