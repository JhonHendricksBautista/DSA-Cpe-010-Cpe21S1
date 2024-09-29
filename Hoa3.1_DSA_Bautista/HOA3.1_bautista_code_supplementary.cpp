#include <iostream>
#include <string>
#include <utility>
#include <chrono>
using namespace std;

class Node { 
public:
    string song;
    Node* next;
};


void traversal(Node* head) {
    int song_num = 1;
    cout << "Your songs:" << endl;
    while (head != nullptr) {  
        cout << song_num << " " << head->song << endl;
        song_num++;
        head = head->next;
    }
};


void addsong(string song, Node*& head){
    Node* newNode = new Node();
    newNode -> song = song;
    newNode -> next = head;
    head = newNode;
    cout<<"song added SUCCESSFULY"<<endl;
}

void deletesong(string song, Node*& head){
    Node* current = head;
    Node* prev = nullptr;
    
    while(current != nullptr){
        if(current -> song == song ){
            if(current == head){
                head = head -> next;
            }
            else{
                prev -> next = current -> next;
            }
            delete current;
            current = prev ? prev -> next : head;
        }
        else{
            prev = current;
            current = current -> next;
        }
    }
}

int main(){
    Node* head = new Node();
    
    string song;
    int choice;
    
    cout<<"Enter your song: ";
    getline(cin, song);
    head -> song = song;
    head -> next = nullptr;

    cout<<"\n";
    while(true){

        cout<<"=============MUSIC PLAYER=========="<<endl;

        cout<<"[1] view playlist"<<endl;
        cout<<"[2] add song to playlist"<<endl;
        cout<<"[3] delete a song from playlist"<<endl;
        cout<<"[4] End Program"<<endl;
        cout<<"Enter your choice: ";
        cin>> choice;
        cin.ignore();
        switch (choice){
            case 1:
            cout<<"\n";
            traversal(head);
            cout<<"\n";
            break;
            
            
            case 2:
            cout<<"\n";
            cout<<"ADD SONG"<<endl;
            cout<<"Enter song: ";
            getline(cin, song);
            addsong(song, head);
            cout<<"\n";
            break;
            
            
            case 3:
            cout<<"\n";
            cout<<"DELETE SONG"<<endl;
            traversal(head);
            cout<<"Select song to delete: ";
            getline(cin, song);
            cout<<"=======DELETING======"<<endl;
            deletesong(song, head);
            cout<<"PLAYLIST UPDATED SUCCESSFULY"<<endl;
            cout<<"\n";
            break;
            
            
            case 4:
            cout<<"=====STREAMING ENDED=====";
            return 0;
            
            default:
            cout<<"INVALID INPUT"<<endl;
        }
    }
return 0;


}