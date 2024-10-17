#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int maximum = 100;

template <typename T>
void bubbleSort(T arr[], int arr_size) {
    for (int x = 0; x < arr_size - 1; x++) { 
        for (int y = 0; y < arr_size - 1 - x; y++) {
            if (arr[y] > arr[y + 1]) {
                T temp = arr[y];  
                arr[y] = arr[y + 1];
                arr[y + 1] = temp;
            }
        }
    }
}

void display(int arr[], int arr_size) {
    for (int t = 0; t < arr_size; t++) {
        cout<< arr[t] << " ";
    }
    cout<<endl;
}

int linearSearch(int arr[], int arr_size, int find) {
    int freq = 0;
    for (int x = 0; x < arr_size; x++) {
        if (arr[x] == find) {
            freq++;
        }
    }
    return freq;
}

int main() {
    int numbers[maximum];
    srand(time(0));
    for (int i = 0; i < maximum; i++) {
        numbers[i] = rand() % 5 + 1;
    };

    cout<<"===========LISTING OF CANDIDATES==========="<<endl;

    cout<<"Candidate 1| Bo Dalton Capistrano |"<<endl;
    cout<<"Candidate 2| Cornelius Raymon Agustín |"<<endl;
    cout<<"Candidate 3| Deja Jayla Bañaga |"<<endl;
    cout<<"Candidate 4| Lalla Brielle Yabut |"<<endl;
    cout<<"Candidate 5| Franklin Relano Castro |"<<endl;
    
    cout<<"------------------------------------------"<<endl;    
    cout<<"\t         Voting Begin!"<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"UNSORTED VOTES"<<endl;
    display(numbers, maximum);

    cout<<"\nSORTED VOTES"<<endl;
    bubbleSort(numbers, maximum);
    display(numbers, maximum);

    int result1 = linearSearch(numbers, maximum, 1);
    int result2 = linearSearch(numbers, maximum, 2);
    int result3 = linearSearch(numbers, maximum, 3);
    int result4 = linearSearch(numbers, maximum, 4);
    int result5 = linearSearch(numbers, maximum, 5);
    
    cout<<"\n";
    cout<<"===========TALLY OF VOTES==========="<<endl;

    cout<<"Candidate 1| Bo Dalton Capistrano : "<<result1<<" votes"<<endl;
    cout<<"Candidate 2| Cornelius Raymon Agustín : "<<result2<<" votes"<<endl;
    cout<<"Candidate 3| Deja Jayla Bañaga : "<<result3<<" votes"<<endl;
    cout<<"Candidate 4| Lalla Brielle Yabut : "<<result4<<" votes"<<endl;
    cout<<"Candidate 5| Franklin Relano Castro : "<<result5<<" votes"<<endl;
    
    int voteCounts[5] = {result1, result2, result3, result4, result5};
    int maxVotes = voteCounts[0];
    int winnerIndex = 0;

    for (int i = 1; i < 5; i++) {
        if (voteCounts[i] > maxVotes) {
            maxVotes = voteCounts[i];
            winnerIndex = i;
        }
    }
    
    cout<<"\n";
    cout<<"===========ELECTION WINNER==========="<<endl;
    switch(winnerIndex) {
        case 0:
            cout<<"Candidate 1| Bo Dalton Capistrano is the winner with "<< maxVotes <<" votes"<<endl;
            break;
        case 1:
            cout<<"Candidate 2| Cornelius Raymon Agustín is the winner with "<< maxVotes <<" votes"<<endl;
            break;
        case 2:
            cout<<"Candidate 3| Deja Jayla Bañaga is the winner with " << maxVotes <<" votes"<<endl;
            break;
        case 3:
            cout<<"Candidate 4| Lalla Brielle Yabut is the winner with " << maxVotes <<" votes"<<endl;
            break;
        case 4:
            cout<<"Candidate 5| Franklin Relano Castro is the winner with "<< maxVotes <<" votes"<<endl;
            break;
    }
    return 0;
}
