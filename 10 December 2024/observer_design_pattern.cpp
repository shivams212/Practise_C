// #include<iostream>
// #include<list>
// #include<string>
// using namespace std;

// //Below code is Interface because we write virtual and we didn't define the function that's why
// class ISubscriber{
//     public:
//     virtual void notify(string msg)=0;
// };

// class User:public ISubscriber
// {
//     private:
//     int userId;
//     public:
//     User(int userId)//Constructor
//     {
//         this->userId=userId;
//     }

//     void notify(string msg)
//     {
//         cout<<"User"<<userId<<"received msg"<<msg;
//     }
// };

// class Group
// {
//     private:
//     list<ISubscriber*> users;
//     public:
//     void subscribe(ISubscriber* user){
//         users.push_back(user);}
//     void unsubscribe(ISubscriber* user){
//         users.remove(user);}

//     void notify(string msg)
//     {
//         for(auto user:users)
//         {
//             user->notify(msg);
//         }
//     }
// };


// //Client Prospective Code
// int main()
// {
//     Group* group=new Group;

//     User* user1=new User(1);
//     User* user1=new User(2);
//     User* user1=new User(3);

//     group->subscribe(user1);
//     group->subscribe(user2);
//     group->subscribe(user3);

//     group->notify("new msg");

//     group->unsubscribe(user1);
//     group->notify("new new msg");

//     return 0;
// }


#include <iostream>
#include <list>
#include <string>
using namespace std;

// Interface definition
class ISubscriber {
public:
    virtual void notify(string msg) = 0; // Pure virtual function(means Interface)
};

// User class implementing ISubscriber
class User : public ISubscriber {
private:
    int userId;

public:
    User(int userId) { // Constructor
        this->userId = userId;
    }

    void notify(string msg) override { // Override the notify function
        cout << "User " << userId << " received msg: " << msg << endl;
    }
};

// Group class to manage subscribers
class Group {
private:
    list<ISubscriber*> users;

public:
    void subscribe(ISubscriber* user) {
        users.push_back(user);
    }

    void unsubscribe(ISubscriber* user) {
        users.remove(user);
    }

    void notify(string msg) {
        for (auto user : users) { // Use 'users' instead of 'user'
            user->notify(msg);
        }
    }
};

int main() {
    Group* group = new Group;

    // Creating users
    User* user1 = new User(1);
    User* user2 = new User(2);
    User* user3 = new User(3);

    // Subscribing users to the group
    group->subscribe(user1);
    group->subscribe(user2);
    group->subscribe(user3);

    // Sending a notification
    group->notify("new msg");

    // Unsubscribing user1
    group->unsubscribe(user1);
    group->notify("new new msg");

    // Cleaning up memory
    delete user1;
    delete user2;
    delete user3;
    delete group;

    return 0;
}
