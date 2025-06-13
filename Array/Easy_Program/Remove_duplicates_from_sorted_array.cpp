#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& arr) {
    int n = arr.size();
    if (n <= 1)
        return n;

      int i = 0; 
    for (int j = 1; j < n;j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return (i + 1);
}

int main() {
    vector<int> arr = { 1, 2, 2, 3, 4, 4, 4, 5, 5 };
    int newSize = removeDuplicates(arr);
    for (int i = 0; i < newSize; i++)
        cout << arr[i] << " ";
    return 0;
}