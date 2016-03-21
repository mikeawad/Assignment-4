#include <iostream>
#include "DynamicStack.h"

using namespace std;

int main()
{
    DynamicStack dStack;
    int num;



    cout << "Pushing into stack  .... " << endl << endl;
    for (int i = 0; i < 10; i++)
    {
        cin.get();
        cout << "pushing  --->  " << i << endl;
        dStack.push(i);
    }

    cout << endl << "popping from stack ... " << endl << endl;
    while(!dStack.isEmpty())
    {

        dStack.pop(num);
        cin.get();
        cout << "popping  --->  " << num << endl;
    }

    cout << endl << "popping from empty stack ... " << endl;
    cin.get();
    dStack.pop(num);

    return 0;
}
