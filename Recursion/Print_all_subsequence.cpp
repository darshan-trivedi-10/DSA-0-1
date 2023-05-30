#include <iostream>
#include <vector>
using namespace std;

void print_all_subsequence(vector<int> arr, vector<int> &ds, int idx)
{
    if (idx == arr.size())
    {
        for (auto it : ds)
        {
            cout << it << " ";
        }
        if (ds.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
    }

    ds.push_back(arr[idx]);
    print_all_subsequence(arr, ds, idx + 1);
    ds.pop_back();
    print_all_subsequence(arr, ds, idx + 1);
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> ds;
    print_all_subsequence(arr, ds, 0);

    return 0;
}