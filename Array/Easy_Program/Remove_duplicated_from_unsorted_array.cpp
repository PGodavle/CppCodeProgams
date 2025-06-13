#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

// Function to remove duplicate from array
vector<int> removeDuplicates(vector<int> & arr)
{
    //unordered_set<int> s;
    //// adding elements to LinkedHashSet
    //for (int i = 0; i < n; i++)
    //    s.insert(arr[i]);
    //// Print the elements of LinkedHashSet
    //cout << "[ ";
    //for (auto x : s)
    //    cout << x << " ";
    //cout << "]";

    //other solution

    unordered_set<int> seen;
    vector<int> result;
    result.reserve(arr.size());

    for (int num : arr)
    {
        if (seen.insert(num).second)
        {
            result.push_back(num);
        }
    }
    return result;
}

// Driver code
int main()
{
    vector<int> arr= { 1, 2, 5, 1, 7, 2, 4, 2 };

    vector<int> uniquearr = removeDuplicates(arr);
   
    for (int num : uniquearr)
        cout << num << " ";
}