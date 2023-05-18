/*
You are given two 32-bit numbers, N & M, and two bit positions i & j, write a method to set all bits between i & j in N equal to M.

Example :
N = 10000000000; - 1024
M = 10101; - 21
i = 2, j = 6
Output : 10001010100 - 1108
*/

#include <iostream>
using namespace std;

int main()
{

    int n, m, i, j;
    cin >> n >> m >> i >> j;

    int a = (~0) << (j + 1);
    int b = (1 << i) - 1;
    int mask = a | b;

    n = n & mask;
    m = m << i;

    n = n | m;
    cout << n << endl;

    return 0;
}