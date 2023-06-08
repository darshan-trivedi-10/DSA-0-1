#include <iostream>
// #include "stack.h"
#include "stackArr.h"

int main()
{
    // Stack<int> s;
    // for (int i = 0; i < 10; i++)
    // {
    // s.push(i + 1);
    // }

    // while (!s.empty())
    // {
    // cout << s.top() << " ";
    // s.pop();
    // }
    // cout << endl;

    /*********** - Stack Using Array - ***********/
    Stack<int> s;
    for (int i = 0; i < 10; i++)
    {
        s.push(i + 1);
    }

    while (!s.isEmpty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    cout<<endl;

    return 0;
}