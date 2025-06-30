#include <iostream>
#include<list>

using namespace std;


class ISubscribe{

    public:

    virtual void notify(string msg)=0;
    virtual ~ISubscribe() = default;

};

class User:public ISubscribe{
    int userId;

public:
    User(int userId){
        this->userId=userId;
    }

    void notify(string msg){
        cout<<"User "<<userId<<msg<<endl;
    }
};

class Group{

    list<ISubscribe*>users;

public:

    void subscribe(ISubscribe * user){
        users.push_back(user);
    }

    void unsubscribe(ISubscribe * user){
        users.remove(user);
    }

    void notify(string msg){
        for(auto user:users){
            user->notify(msg);
        }
    }
};


int main()
{

    Group *group = new Group();

    User *user1 = new User(1);
    User *user2 = new User(2);
    User *user3 = new User(3);

    group->subscribe(user1);
    group->subscribe(user2);
    group->subscribe(user3);

    group->notify(": is Receiving");

    group->unsubscribe(user1);
    group->unsubscribe(user2);
    group->notify(": is Receiving");
}