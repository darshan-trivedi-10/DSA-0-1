/*
Queue : First in First Out
      : Ex : Ticked Booking Line

Feature : push, pop, front, isEmpty - O(1)
*/

template <typename T>
class Queue
{
private:
    T *arr;
    int cs, ms;
    int front, rear;

public:
    Queue(int default_size = 5)
    {
        ms = default_size;
        arr = new T[default_size];
        cs = 0;
        front = 0, rear = ms - 1;
    }

    bool full()
    {
        return cs == ms;
    }

    void push(T data)
    {
        if (!full())
        {
            // take the rear to the next index
            rear = (rear + 1) % ms;
            arr[rear] = data;
            cs++;
        }
    }

    void isEmpty()
    {
        return cs == 0;
    }

    void pop()
    {
        if (!isEmpty())
        {
            front = (front + 1) % ms;
            cs--;
        }
    }

    T front()
    {
        return arr[rear];
    }
};
