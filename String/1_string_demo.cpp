#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s;
    // getline(cin, s);
    // getline(cin, s, '.');

    int n = 5;
    vector<string> sarr;
    string temp;
    while (n--)
    {
        getline(cin, temp, '.');
        sarr.push_back(temp);
    }

    for (string x : sarr)
    {
        cout << x << " " << endl;
    }
}
