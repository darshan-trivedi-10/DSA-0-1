/*
https://cplusplus.com/reference/cstring/strtok/
*/ 
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[100];
    cin.getline(s, 100);

    // strtok()
    cout<<strtok(s, " ")<<endl; // internally maintains the state of the string you passed in the last function call
    cout<<strtok(NULL, " ")<<endl;
    cout<<strtok(NULL, " ")<<endl;

}