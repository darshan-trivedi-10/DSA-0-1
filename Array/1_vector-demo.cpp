#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<int> arr = {1,2,3,4,5};

    // Fill Constructor
    vector<int> arr1(10,7);

    // push_back O(1)
    arr.push_back(16);

    arr.pop_back();
    // print all the elements
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9,10},
        {11,12}
    };

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}