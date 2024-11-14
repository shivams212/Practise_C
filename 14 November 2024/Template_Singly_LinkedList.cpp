#include <iostream>
using namespace std;
 
// Node class represents each element in the linked list
template <typename T>
class Node {
public:
    T data;        // The data of the node (generic type)
    Node* next;    // Pointer to the next node
 
    // Constructor to initialize node with data
    Node(T value) {
        data = value;
        next = nullptr;
    }
 
    // Function to insert at the front
    static void insertAtFront(Node<T>*& head, T value) {
        Node<T>* newNode = new Node<T>(value);
        newNode->next = head;
        head = newNode;
    }
 
    // Function to insert at the end
    static void insertAtEnd(Node<T>*& head, T value) {
        Node<T>* newNode = new Node<T>(value);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node<T>* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
 
    // Function to insert at a specific position
    static void insertAtPosition(Node<T>*& head, T value, int position) {
        if (position < 1) {
            cout << "Invalid position!" << endl;
            return;
        }
        Node<T>* newNode = new Node<T>(value);
        if (position == 1) {
            newNode->next = head;
            head = newNode;
            return;
        }
        Node<T>* temp = head;
        for (int i = 1; temp != nullptr && i < position - 1; ++i) {
            temp = temp->next;
        }
        if (temp == nullptr) {
            cout << "Position out of range!" << endl;
            delete newNode;
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
 
    // Function to delete from the front
    static void deleteFromFront(Node<T>*& head) {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
        Node<T>* temp = head;
        head = head->next;
        delete temp;
    }
 
    // Function to delete from the end
    static void deleteFromEnd(Node<T>*& head) {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }
        Node<T>* temp = head;
        while (temp->next != nullptr && temp->next->next != nullptr) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }
 
    // Function to delete from a specific position
    static void deleteFromPosition(Node<T>*& head, int position) {
        if (position < 1) {
            cout << "Invalid position!" << endl;
            return;
        }
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
        if (position == 1) {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node<T>* temp = head;
        for (int i = 1; temp != nullptr && i < position - 1; ++i) {
            temp = temp->next;
        }
        if (temp == nullptr || temp->next == nullptr) {
            cout << "Position out of range!" << endl;
            return;
        }
        Node<T>* delNode = temp->next;
        temp->next = temp->next->next;
        delete delNode;
    }
 
    // Function to search for an element
    static bool search(Node<T>* head, T value) {
        Node<T>* temp = head;
        while (temp != nullptr) {
            if (temp->data == value) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
 
    // Function to display the linked list
    static void display(Node<T>* head) {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
        Node<T>* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
 
    // Function to reverse the linked list
    static void reverse(Node<T>*& head) {
        Node<T>* prev = nullptr;
        Node<T>* current = head;
        Node<T>* next = nullptr;
        while (current != nullptr) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }
};
 
int main() {
    Node<int>* head = nullptr;  // Head of the linked list
 
    // Insert elements at the front
    Node<int>::insertAtFront(head, 10);
    Node<int>::insertAtFront(head, 20);
    Node<int>::insertAtFront(head, 30);
 
    // Insert elements at the end
    Node<int>::insertAtEnd(head, 40);
    Node<int>::insertAtEnd(head, 50);
 
    // Insert at a specific position
    Node<int>::insertAtPosition(head, 60, 3);  // Insert 60 at position 3
 
    // Display the list
    cout << "Linked List: ";
    Node<int>::display(head);
 
    // Search for an element
    cout << "Is 40 in the list? " << (Node<int>::search(head, 40) ? "Yes" : "No") << endl;
    cout << "Is 100 in the list? " << (Node<int>::search(head, 100) ? "Yes" : "No") << endl;
 
    // Delete from the front
    Node<int>::deleteFromFront(head);
    cout << "After deleting from the front: ";
    Node<int>::display(head);
 
    // Delete from the end
    Node<int>::deleteFromEnd(head);
    cout << "After deleting from the end: ";
    Node<int>::display(head);
 
    // Delete from a specific position
    Node<int>::deleteFromPosition(head, 2);
    cout << "After deleting from position 2: ";
    Node<int>::display(head);
 
    // Reverse the list
    Node<int>::reverse(head);
    cout << "After reversing the list: ";
    Node<int>::display(head);
 
    return 0;
}