using namespace std;

template <typename T>
class Stack
{
    T *arr;
    int idx, size;

public:
    Stack(int default_size = 1)
    {
        arr = new T[default_size];
        idx = -1;
        size = default_size;
    }

    bool isEmpty()
    {
        return idx == -1;
    }

    T top()
    {
        if (!isEmpty())
        {
            return arr[idx - 1];
        }
    }

    void push(T data)
    {
        if (idx == size)
        {
            // double the size
            T *newArr = new T[size * 2];
            for (int i = 0; i < size; i++)
            {
                newArr[i] = arr[i];
            }
            size = 2 * size;
            arr = newArr;
        }
        arr[idx] = data;
        idx++;
    }

    void pop()
    {
        if (idx != -1)
        {
            idx--;
        }
    }
};