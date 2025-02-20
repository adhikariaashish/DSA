#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = nullptr;  
    }
};

void traversal(Node* head){
    Node* current = head;
    while(current != nullptr){
        cout<<current->data<<endl;
        current = current->next;
    }
}

Node* insertAtEnd(Node* head, int value)
{
    Node* newNode = new Node(value);
    if (head == nullptr) 
        return newNode;

    Node* curr = head;
    while (curr->next != nullptr) {
        curr = curr->next;
    }
    curr->next = newNode;
    return head;
}
int main(){
    Node* head = nullptr;
    head = insertAtEnd(head, 5);
    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 15);
    head = insertAtEnd(head, 25);
    traversal(head);
    return 0;

}