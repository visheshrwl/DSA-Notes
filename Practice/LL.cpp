#include<iostream>
using namespace std;

//LL Creation
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

int main(){
    Node* head = new Node(12);
    return 0;
}