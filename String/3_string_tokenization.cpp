/*
https://cplusplus.com/reference/sstream/stringstream/stringstream/
*/

#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);

    string token;
    while (getline(ss, token, ' '))
    {
        cout<<token<<"\n";
    }

    cout<<endl;
}