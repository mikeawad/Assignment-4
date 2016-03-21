#ifndef DYNAMICSTACK_H
#define DYNAMICSTACK_H
#include <iostream>
using namespace std;

class DynamicStack
{
    public:
        /* Default constructor */
        DynamicStack();

        /* Default destructor */
        ~DynamicStack();

        // push new node onto stack
        void push(int pushNumber);

        // pop node from stack
        void pop(int &popNumber);

        // check if stack is empty
        bool isEmpty();

    private:
        class Node
        {
            public:
                int data;
                Node * next;
                Node(int value, Node* nextPtr = NULL )
                {
                    data = value;
                    next = nextPtr;
                }

        };
        Node * top;
};

#endif // DYNAMICSTACK_H
