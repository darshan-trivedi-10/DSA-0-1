#include <vector>

template <typename T>
class Stack
{
    vector<T> arr;

    void push(T data)
    {
        arr.push_back(T);
    }

    void pop()
    {
        arr.pop_back();
    }

    T Top()
    {
        return v.back();
    }

    bool isEmpty()
    {
        return arr.size() == 0;
    }

};