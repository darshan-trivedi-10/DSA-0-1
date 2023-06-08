/*
Queue : First in First Out
      : Ex : Ticked Booking Line
*/

template <typename T>
class Queue
{
private:
    int *arr;
    int cs, ms;
    int front = 0;
    int rear;

public:
    Queue(int default_size = 1000000)
    {
        ms = default_size;
        cs = 0;
        arr = new int[ms];
        front = 0;
        rear = -1;
    }

    bool full()
    {
        return cs == ms;
    }

    bool empty()
    {
        return cs == 0;
    }

    void push(T data)
    {
        if (!full())
        {
            rear = ((rear + 1) % ms);
            arr[rear] = data;
            cs++;
        }
        else
        {
            cout << "Queue if Full\n";
        }
    }

    T front()
    {
        return arr[front];
    }

    int size()
    {
        return cs;
    }
};
