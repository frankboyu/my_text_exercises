#ifndef HEADER_H_
#define HEADER_H_

#include <string>

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

class Worker // an abstract base class
{
private:
    std::string fullname;
    long id;
    protected:
    virtual void Data() const;
    virtual void Get();
public:
    Worker() : fullname("no one"), id(0L) {}
    Worker(const std::string & s, long n) : fullname(s), id(n) {}
    virtual ~Worker() = 0; // pure virtual function
    virtual void Set() = 0;
    virtual void Show() const = 0;
};

class Waiter : virtual public Worker
{
private:
    int panache;
    protected:
    void Data() const;
    void Get();
public:
    Waiter() : Worker(), panache(0) {}
    Waiter(const std::string & s, long n, int p = 0) : Worker(s, n), panache(p) {}
    Waiter(const Worker & wk, int p = 0) : Worker(wk), panache(p) {}
    void Set();
    void Show() const;
};

class Singer : virtual public Worker
{
protected:
    enum {other, alto, contralto, soprano, bass, baritone, tenor};
    enum {Vtypes = 7};
    void Data() const;
    void Get();
private:
    static const char *pv[Vtypes]; // string equivs of voice types
    int voice;
public:
    Singer() : Worker(), voice(other) {}
    Singer(const std::string & s, long n, int v = other) : Worker(s, n), voice(v) {}
    Singer(const Worker & wk, int v = other) : Worker(wk), voice(v) {}
    void Set();
    void Show() const;
};

class SingingWaiter : public Singer, public Waiter
{
protected:
    void Data() const;
    void Get();
public:
    SingingWaiter() {}
    SingingWaiter(const std::string & s, long n, int p = 0, int v = other) : Worker(s,n), Waiter(s, n, p), Singer(s, n, v) {}
    SingingWaiter(const Worker & wk, int p = 0, int v = other) : Worker(wk), Waiter(wk,p), Singer(wk,v) {}
    SingingWaiter(const Waiter & wt, int v = other) : Worker(wt),Waiter(wt), Singer(wt,v) {}
    SingingWaiter(const Singer & wt, int p = 0) : Worker(wt),Waiter(wt,p), Singer(wt) {}
    void Set();
    void Show() const;
};

#endif