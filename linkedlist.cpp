#include <iostream>
using namespace std;
/*Socho tumhare paas train hai 🚂
Har coach alag-alag hai
Har coach ke andar kuch samaan hai
Har coach piche wale coach ka address bhi jaanta hai
Bas yehi Linked List hai 😁
Train ke har coach ko hum Node bolte hain.
aur woh train hogi ek linked list. 

Node kya hota hai?

Node ek chhota sa dabba 📦 hota hai jisme do cheezein hoti hain:
Data (andar ka samaan)
Next (agla dabba kahan hai uska address)

Simple drawing dekh:

[10 | * ] ----> [20 | * ] ----> [30 | NULL]

Yaha:
10, 20, 30 = data
Arrow = next
NULL = last node (aage kuch nahi)*/

struct Node {
    int data; //int data → number store karega, node ke andar wala
    Node* next; //Node* next → agle node ka address store karega
};

int main() {

Node* first = new Node();
Node* second = new Node();
Node* third = new Node();

first->data = 10;
first->next = second;

second->data = 25;
second->next = third;

third->data = 50;
third->next = NULL;

cout << first->data << '\n';
cout << first->next->data << endl;
cout << first->next->next->data << endl;

return 0;
}
//in leetcode iss node ka naam "Listnode" like below
/*struct ListNode {
    int val;
    ListNode *next;
};Yaha:
val = data
next = agla node ka address
Same concept.*/