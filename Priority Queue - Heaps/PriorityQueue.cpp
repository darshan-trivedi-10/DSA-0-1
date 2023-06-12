#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Max Heaps
    // priority_queue<int> heap;
    // Min Heaps
    priority_queue<int, vector<int>, greater<int>> heap;

    for (int x : arr)
    {
        heap.push(x);
    }

    while (!heap.empty())
    {
        cout << heap.top() << " ";
        heap.pop();
    }

    cout << endl;
}