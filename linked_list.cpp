#include<iostream>
#include<cstdlib>
#include<string>
#include<cstring>
using namespace std;

struct node{
    string name;
    int number;
    string data;
    struct node* nextptr;
};

int add(node** headptr){
    node* inputptr = new(node);
    node* cptr = *headptr;
    node* pptr = NULL;
    cout << "Enter: name, No, data: ";
    cin >> inputptr->name >>  inputptr->number >> inputptr->data;
    if(*headptr == NULL){
        *headptr = inputptr;
        inputptr->nextptr = NULL;
        return 0;
    }
    else{
        while(cptr->nextptr != NULL){
            pptr = cptr;
            cptr = cptr->nextptr;
        }
        cptr->nextptr = inputptr;
        inputptr->nextptr = NULL;
        return 0;
    }
}

void see(int number, node* head){
    node* cptr = head;
    node* pptr = NULL;
    if(cptr == NULL){
        cout << "NO data!!\n";
        return;
    }
    while(cptr != NULL){
        if(cptr->number == number){
            cout<< "No." << cptr->number << ", name:" << cptr->name 
                << ", data:" << cptr->data << endl;
        }
        pptr = cptr;
        cptr = cptr->nextptr;
    }
    return;
}

int main(){
    int fuction = 0;
    node* head = NULL;
    while(fuction != 3){
        cout << "1)Add data 2)See data 3)quit\n";
        cin >> fuction;
        switch (fuction){
            case 1:
                bool check;
                check = add(&head);
                if(check == 0) cout << "data was stored!!\n";
                else cout << "error\n"; 
                break;
            case 2:
                int number;
                cout << "Enter the number of data you want to see\n";
                cin >> number;
                see(number, head);
                break;
            case 3:
                break;
            default:
                break;
        }
    }
    return 0;
}
