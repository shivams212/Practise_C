#include <iostream>
using namespace std;

template <typename T>
class Node {
public:
    T data;
    Node* next;
    Node* prev;

    Node(T value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }

    static Node<T>* insertAtFront(Node<T>* head, T value) {
        Node<T>* newNode = new Node<T>(value);
        newNode->next = head;
        if (head != nullptr) {
            head->prev = newNode;
        }
        return newNode;
    }

    static Node<T>* insertAtEnd(Node<T>* head, T value) {
        Node<T>* newNode = new Node<T>(value);
        if (head == nullptr) {
            return newNode;
        }
        Node<T>* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
        return head;
    }

    static Node<T>* insertAtPosition(Node<T>* head, T value, int position) {
        if (position < 1) {
            cout << "Invalid position" << endl;
            return head;
        }
        Node<T>* newNode = new Node<T>(value);
        if (position == 1) {
            newNode->next = head;
            if (head != nullptr) {
                head->prev = newNode;
            }
            return newNode;
        }

        Node<T>* temp = head;
        int i = 1;
        while (temp != nullptr && i < position - 1) {
            temp = temp->next;
            i++;
        }

        if (temp == nullptr) {
            cout << "Position out of range" << endl;
            delete newNode;
            return head;
        }

        newNode->next = temp->next;
        newNode->prev = temp;
        if (temp->next != nullptr) {
            temp->next->prev = newNode;
        }
        temp->next = newNode;
        return head;
    }

    static Node<T>* deleteFromFront(Node<T>* head) {
        if (head == nullptr) {
            cout << "No elements in the list" << endl;
            return nullptr;
        }
        Node<T>* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        }
        delete temp;
        return head;
    }

    static Node<T>* deleteFromEnd(Node<T>* head) {
        if (head == nullptr) {
            cout << "No elements in the list" << endl;
            return nullptr;
        }
        if (head->next == nullptr) {
            delete head;
            return nullptr;
        }
        Node<T>* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->prev->next = nullptr;
        delete temp;
        return head;
    }

    static Node<T>* deleteFromPosition(Node<T>* head, int position) {
        if (position < 1) {
            cout << "Invalid position" << endl;
            return head;
        }
        if (head == nullptr) {
            cout << "List is empty" << endl;
            return nullptr;
        }
        if (position == 1) {
            Node<T>* temp = head;
            head = head->next;
            if (head != nullptr) {
                head->prev = nullptr;
            }
            delete temp;
            return head;
        }
        Node<T>* temp = head;
        for (int i = 1; temp != nullptr && i < position - 1; i++) {
            temp = temp->next;
        }
        if (temp == nullptr || temp->next == nullptr) {
            cout << "Position out of range" << endl;
            return head;
        }
        Node<T>* nodeToDelete = temp->next;
        temp->next = nodeToDelete->next;
        if (nodeToDelete->next != nullptr) {
            nodeToDelete->next->prev = temp;
        }
        delete nodeToDelete;
        return head;
    }

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

    static void display(Node<T>* head) {
        if (head == nullptr) {
            cout << "Empty list" << endl;
            return;
        }
        Node<T>* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    static Node<T>* reverse(Node<T>* head) {
        Node<T>* curr = head;
        Node<T>* temp = nullptr;
        while (curr != nullptr) {
            temp = curr->prev;
            curr->prev = curr->next;
            curr->next = temp;
            curr = curr->prev;
        }
        if (temp != nullptr) {
            head = temp->prev;
        }
        return head;
    }
};

int main() {
    Node<int>* head = nullptr;

    head = Node<int>::insertAtFront(head, 10);
    head = Node<int>::insertAtEnd(head, 20);
    head = Node<int>::insertAtPosition(head, 15, 2);

    Node<int>::display(head);

    cout << "Searching for 15: " << (Node<int>::search(head, 15) ? "Found" : "Not Found") << endl;

    head = Node<int>::deleteFromPosition(head, 2);

    Node<int>::display(head);

    head = Node<int>::reverse(head);

    Node<int>::display(head);

    return 0;
}

// 10 <-> 15 <-> 20 <-> NULL
// Searching for 15: Found
// 10 <-> 20 <-> NULL
// 20 <-> 10 <-> NULL