#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

class Compare
{
public:
    bool operator()(int a, int b)
    {
        // return a > b;
        return a > b;
    }
};

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    int arr[] = {10, 15, 20, 13, 6, 90};
    int n = sizeof(arr) / sizeof(int);

    priority_queue<int> heap;

    // priority_queue<int, vector<int>, Compare> heap;
    for (int i = 0; i < n; i++)
    {
        heap.push(arr[i]);
    }
    while (!heap.empty())
    {
        cout << heap.top() << " ";
        heap.pop();
    }

    cout << endl;

    sort(arr, arr + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}