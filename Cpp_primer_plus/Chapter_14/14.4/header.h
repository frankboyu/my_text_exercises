#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <string>
#include <cstdlib>

using std::string;
using std::rand;
using std::cout;
using std::cin;
using std::endl;

template<class Item>
class QueueTp
{
private:
    struct Node { Item item; struct Node * next;};
    enum {Q_SIZE = 10};
    Node * front; // pointer to front of Queue
    Node * rear; // pointer to rear of Queue
    int items; // current number of items in Queue
    const int qsize; // maximum number of items in Queue
    QueueTp(const QueueTp & q) : qsize(0) { }
    QueueTp & operator=(const QueueTp & q) { return *this;}
public:
    QueueTp(int qs = Q_SIZE); // create queue with a qs limit
    ~QueueTp();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue(const Item &item); // add item to end
    bool dequeue(Item &item); // remove item from front
};

template<class Item>
QueueTp<Item>::QueueTp(int qs) : qsize(qs)
{
    front = rear = NULL;
    items = 0;
}

template<class Item>
QueueTp<Item>::~QueueTp()
{
    Node * temp;
    while (front != NULL)
    {
        temp = front; // save address of front item
        front = front->next;// reset pointer to next item
        delete temp; // delete former front
    }
}

template<class Item>
bool QueueTp<Item>::isempty() const
{
    return items == 0;
}

template<class Item>
bool QueueTp<Item>::isfull() const
{
    return items == qsize;
}

template<class Item>
int QueueTp<Item>::queuecount() const
{
    return items;
}

template<class Item>
bool QueueTp<Item>::enqueue(const Item & item)
{
    if (isfull())
        return false;
    Node * add = new Node; // create node
    add->item = item; // set node pointers
    add->next = NULL; // or nullptr;
    items++;
    if (front == NULL)
        front = add;
    else
        rear->next = add;
        rear = add;
        return true;
}

template<class Item>
bool QueueTp<Item>::dequeue(Item & item)
{
    if (front == NULL)
        return false;
    item = front->item;
    items--;
    Node * temp = front;
    front = front->next;
    delete temp;
    if (items == 0)
        rear = NULL;
    return true;
}

class Person
{
private:
    string fname;
    string lname;
public:
    Person(string this_fname, string this_lname) : fname(this_fname), lname(this_lname) {}
    Person() : fname("None"), lname("None") {}
    virtual void Set();
    virtual void Show() const {cout << "Name: " << fname << " " << lname << endl;}
};

class Gunslinger : virtual public Person
{
private:
    double draw_time;
    int notches;
public:
    Gunslinger(string this_fname, string this_lname, double this_draw_time, int this_notches) : Person(this_fname, this_lname), draw_time(this_draw_time), notches(this_notches) {}
    Gunslinger() : Person("None", "None"), draw_time(0.0), notches(0) {}
    const double Draw() const {return draw_time;}
    virtual void Set();
    void Show() const {Person::Show(); cout << "Draw time: " << draw_time << ", notches: " << notches << endl;}
};

class PokerPlayer : virtual public Person
{
public:
    PokerPlayer(string this_fname, string this_lname) : Person(this_fname, this_lname) {}
    PokerPlayer() : Person("None", "None") {}
    virtual void Set();
    int Draw() {return rand()%52 + 1;}
};

class BadDude : public Gunslinger, public PokerPlayer
{
public:
    BadDude(string this_fname, string this_lname, double this_draw_time, int this_notches) : Gunslinger(this_fname, this_lname, this_draw_time, this_notches) {}
    BadDude() : Gunslinger("None", "None", 0.0, 0) {}
    double Gdraw() {return Gunslinger::Draw();}
    int Cdraw() {return PokerPlayer::Draw();}
    virtual void Set();
    void Show() {Gunslinger::Show();}
};

#endif