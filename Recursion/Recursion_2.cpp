#include <iostream>
using namespace std;

void reverseArray(int arr[], int sp, int ep)
{
    if (sp >= ep)
    {
        return;
    }
    swap(arr[sp], arr[ep]);
    reverseArray(arr, sp + 1, ep - 1);
}

bool checkPalindrome(string s, int sp, int ep)
{
    if (sp >= ep)
    {
        return true;
    }
    if (s[sp] != s[ep])
    {
        return false;
    }

    return checkPalindrome(s, sp + 1, ep - 1);
}
// 1 1 2 3 5

int nthFibo(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return nthFibo(n - 1) + nthFibo(n - 2);
}

int main()
{
    string s;
    cin >> s;

    int n;
    cin >> n;

    cout << nthFibo(n) << endl;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reverseArray(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    if (checkPalindrome(s, 0, s.size() - 1))
    {
        cout << s << " Is palindrome String\n";
    }
    else
    {
        cout << "Not palindrome String\n";
    }
}