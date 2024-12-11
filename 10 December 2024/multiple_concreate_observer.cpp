#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Observer interface
class Observer {
public:
    virtual void update(const string& message) = 0; // Pure virtual function
    virtual ~Observer() {}
};

// Subject class
class Subject {
private:
    vector<Observer*> observerCollection; // Collection of observers
public:
    void registerObserver(Observer* observer) {
        observerCollection.push_back(observer);
    }

    void unregisterObserver(Observer* observer) {
        observerCollection.erase(
            remove(observerCollection.begin(), observerCollection.end(), observer),
            observerCollection.end()
        );
    }

    void notifyObservers(const string& message) {
        for (Observer* observer : observerCollection) {
            observer->update(message);
        }
    }
};

// Observer1 with its own update logic
class Observer1 : public Observer {
public:
    void update(const string& message) override {
        cout << "Observer1 received message: " << message << endl;
        cout << "Executing specific logic for Observer1 (update1)." << endl;
    }
};

// Observer2 with its own update logic
class Observer2 : public Observer {
public:
    void update(const string& message) override {
        cout << "Observer2 received message: " << message << endl;
        cout << "Executing specific logic for Observer2 (update2)." << endl;
    }
};

// Main function
int main() {
    // Create a Subject instance
    Subject subject;

    // Create Observer instances
    Observer1 observer1;
    Observer2 observer2;

    // Register observers
    subject.registerObserver(&observer1);
    subject.registerObserver(&observer2);

    // Notify observers of a state change
    cout << "First Notification:" << endl;
    subject.notifyObservers("State has changed!");

    // Unregister Observer1 and notify again
    subject.unregisterObserver(&observer1);

    cout << "\nSecond Notification:" << endl;
    subject.notifyObservers("Another state change!");

    return 0;
}
