#include "header.h"

List::List()
{
    top = 0;
}

bool List::isempty() const
{
    return top == 0;
}

bool List::isfull() const
{
    return top == MAX;
}

bool List::add(const Item & item)
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}

void List::visit(void (*pf)(Item &))
{
    if (top == 0)
    {
        cout << "Empty list!" << endl;
        return;
    }

    for(int i = 0; i < top; i++)
        pf(items[i]);
}