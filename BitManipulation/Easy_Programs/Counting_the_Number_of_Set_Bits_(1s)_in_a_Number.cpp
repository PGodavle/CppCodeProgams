#include <iostream>
using namespace std;

//This program counts the number of 1s in the binary representation of a number by repeatedly performing a bitwise AND (&) with 1 and right-shifting (>>) the number.
int countSetBits(int num)
{
    int count=0;
    while(num)
    {
        count=count+(num&1);
        num = num >> 1;
    }
    
    return count;
}
int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
    
    cout<<"Number of set bits:"<<countSetBits(num)<<endl;
    return 0;
}
