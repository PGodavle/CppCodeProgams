#include<iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
	if (size <= 1) return true;

	for (int i = 1; i < size;i++)
	{
		if (arr[i] < arr[i - 1])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 1,3,2,4 };

	int size1 = sizeof(arr1) / sizeof(arr1[0]);
	int size2 = sizeof(arr2) / sizeof(arr2[0]);

	cout << "Arr1 is sorted" << (isSorted(arr1, size1) ? " true" : " false") << endl;
	cout << "Arr2 is sorted" << (isSorted(arr2, size2) ? " true" : " false") << endl;
}