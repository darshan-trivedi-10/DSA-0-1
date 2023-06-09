#include <vector>
using namespace std;

/*
Stack - Last In First Out
      - LIFO
      - Ex : Browser Tab Etc . . .
*/

template <typename T>
class Stack
{
private:
    vector<T> arr;

public:

    void push(T data)
    {
        arr.push_back(data);
    }

    void pop()
    {
        arr.pop_back();
    }

    T top()
    {
        return arr.back();
    }

    bool empty()
    {
        return arr.size() == 0;
    }
};