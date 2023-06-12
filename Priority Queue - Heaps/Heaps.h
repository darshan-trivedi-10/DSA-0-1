#include <vector>
using namespace std;

class Heap
{
private:
    vector<int> v;

    void Heapify(int index)
    {
        int left = 2 * index;
        int right = 2 * right;

        int minIdx = index;
        if (left < v.size() && v[left] < v[index])
        {
            minIdx = left;
        }

        if (right < v.size() && v[right] < v[index])
        {
            minIdx = right;
        }

        if (index != minIdx)
        {
            swap(v[index], v[minIdx]);
            Heapify(minIdx);
        }
    }

public:
    Heap(int default_size = 10)
    {
        v.reserve(default_size + 1);
        v.push_back(-1);
    }

    void push(int data)
    {
        //  add data at the end of the Heap
        v.push_back(data);
        int idx = v.size() - 1;
        int parent = idx / 2;
        while (idx > 1 && v[idx] < v[parent])
        {
            swap(v[idx], v[parent]);
            idx = parent;
            parent = parent / 2;
        }
    }

    // get minimum element
    int top()
    {
        return v[1];
    }

    void pop()
    {
        // 1, swap first and last element
        int idx = v.size() - 1;
        swap(v[1], v[idx]);
        v.pop_back();
        Heapify(1);
    }

    bool isempty()
    {
        return v.size() == 1;
    }
};