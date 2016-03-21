#include "DynamicStack.h"



/* Default constructor */
DynamicStack::DynamicStack()
{
    top = NULL;
}

/* Default destructor */
DynamicStack::~DynamicStack()
{

}

// push new node onto stack
void DynamicStack::push(int pushNumber)
{
    top =  new Node(pushNumber, top);
}

// pop node from stack
void DynamicStack::pop(int &popNumber)
{
    Node *tempPtr;
    if(isEmpty())
    {
        cerr << "List empty nothing to retrieve " << endl;
    }
    else
    {
        popNumber = top->data;
        tempPtr = top;
        top =  top->next;
        delete tempPtr;

    }
}

// check if stack is empty
bool DynamicStack::isEmpty()
{
    if(!top)
        return true;
    else
        return false;
}
