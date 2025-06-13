#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string str)
{
	int left = 0;
	int right = str.length() - 1;

	while (left < right)
	{
		while (left < right && !isalnum(str[left]))
			left++;
		while (left < right && !isalnum(str[right]))
			right--;

		if (tolower(str[left]) != tolower(str[right]))
		{
			return false;
		}

		left++;
		right--;
	}
	return true;
}
int main()
{
	string str = "A man";

	if (isPalindrome(str))
		std::cout << "Yes, it's a Palindrome" << endl;
	else
		std::cout << "No, it's not a Palindrome" << endl;

	return 0;
}
