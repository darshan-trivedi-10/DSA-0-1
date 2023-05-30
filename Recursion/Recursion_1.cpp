#include <iostream>
using namespace std;

// Print Name N times
void printName(string s, int n)
{
    if (n < 1)
    {
        return;
    }

    cout << s << endl;
    printName(s, n - 1);
}

// Print Linearly from 1 to N
void print_1_to_n(int idx, int n)
{
    if (idx > n)
    {
        return;
    }

    cout << idx << " ";
    print_1_to_n(idx + 1, n);
}

void print_from_1_to_n_backtrack(int n)
{
    if (n < 1)
    {
        return;
    }

    print_from_1_to_n_backtrack(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    string s;

    // cin>>s;
    cin >> n;

    // printName(s, n);    // print name n times using recursion
    print_1_to_n(1, n); // Print From 1 to N
    cout << endl;
    print_from_1_to_n_backtrack(n);
}