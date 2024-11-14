// #include<iostream>
// #include<vector>
// #include<bits/stdc++.h>

// using namespace std;
// class Node
// {
//     public:
//     int data;
//     Node* next;

//     //CALLING CONSTRUCTOR
//     Node(int data)
//     {
//         this ->data =data;
//         this->next=NULL;
//     }
// };

// void InsertATHead(Node* &head ,int d)
// {
//     Node* temp=new Node(d);
//     temp->next=head;
//     head=temp;

// }

// void print(node* &head)
// {

// }

// int main()
// {
//     Node* node1=new Node(10);//CREATING node in Heap Memory
// return 0;
// }

#include <iostream>
using namespace std;
 
class Node {
public:
    int data;       // Data of the node
    Node* next;     // Pointer to the next node
 
    // Constructor to initialize a new node
    Node(int value) {
        data = value;
        next = nullptr;
    }
};
 
int main() {
    Node* head = nullptr; // Start with an empty list
 
    // Insert nodes at the front
    Node* newNode = new Node(10);
    newNode->next = head;
    head = newNode;
 
    newNode = new Node(20);
    newNode->next = head;
    head = newNode;
 
    newNode = new Node(30);
    newNode->next = head;
    head = newNode;
 
    // Insert nodes at the end
    Node* newEndNode = new Node(40);
    if (head == nullptr) {
        head = newEndNode;
    } else {
        Node* curr = head;
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = newEndNode;
    }
 
    newEndNode = new Node(50);
    Node* curr = head;
    while (curr->next != nullptr) {
        curr = curr->next;
    }
    curr->next = newEndNode;
 
    // Insert at a specific position (position 3)
    Node* newPosNode = new Node(60);
    int position = 3;
    curr = head;
    for (int i = 1; curr != nullptr && i < position - 1; ++i) {
        curr = curr->next;
    }
    if (curr != nullptr) {
        newPosNode->next = curr->next;
        curr->next = newPosNode;
    } else {
        cout << "Position out of range!" << endl;
    }
 
    // Display the list
    cout << "Linked List: ";
    curr = head;
    while (curr != nullptr) {
        cout << curr->data << " -> ";
        curr = curr->next;
    }
    cout << "NULL" << endl;
 
    // Search for an element (40)
    int searchValue = 40;
    bool found = false;
    curr = head;
    while (curr != nullptr) {
        if (curr->data == searchValue) {
            found = true;
            break;
        }
        curr = curr->next;
    }
    cout << "Is " << searchValue << " in the list? " << (found ? "Yes" : "No") << endl;
 
    // Delete from the front
    if (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
 
    // Display the list after deletion from the front
    cout << "After deleting from the front: ";
    curr = head;
    while (curr != nullptr) {
        cout << curr->data << " -> ";
        curr = curr->next;
    }
    cout << "NULL" << endl;
 
    // Delete from the end
    if (head != nullptr) {
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
        } else {
            curr = head;
            while (curr->next != nullptr && curr->next->next != nullptr) {
                curr = curr->next;
            }
            delete curr->next;
            curr->next = nullptr;
        }
    }
 
    // Display the list after deletion from the end
    cout << "After deleting from the end: ";
    curr = head;
    while (curr != nullptr) {
        cout << curr->data << " -> ";
        curr = curr->next;
    }
    cout << "NULL" << endl;
 
    // Delete from position 2
    int deletePosition = 2;
    if (head != nullptr) {
        if (deletePosition == 1) {
            Node* temp = head;
            head = head->next;
            delete temp;
        } else {
            curr = head;
            for (int i = 1; curr != nullptr && i < deletePosition - 1; ++i) {
                curr = curr->next;
            }
            if (curr != nullptr && curr->next != nullptr) {
                Node* temp = curr->next;
                curr->next = curr->next->next;
                delete temp;
            } else {
                cout << "Position out of range!" << endl;
            }
        }
    }
 
    // Display the list after deletion from position 2
    cout << "After deleting from position 2: ";
    curr = head;
    while (curr != nullptr) {
        cout << curr->data << " -> ";
        curr = curr->next;
    }
    cout << "NULL" << endl;
 
    // Reverse the linked list
    Node* prev = nullptr;
    Node* next = nullptr;
    curr = head;
    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
 
    // Display the list after reversal
    cout << "After reversing the list: ";
    curr = head;
    while (curr != nullptr) {
        cout << curr->data << " -> ";
        curr = curr->next;
    }
    cout << "NULL" << endl;
 
    // Clean up memory
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
 
    return 0;
}

