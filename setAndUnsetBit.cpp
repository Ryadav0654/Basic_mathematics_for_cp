/*
Set and unset Bit:
set Bit - 1
unset Bit - 0

MSB - most significant bit (left most bit)
LSB - least significant bit (right most bit)
*/

#include <bits/stdc++.h>
using namespace std;

void PrintBinary(int num)
{
    for (int i = 10; i >= 0; --i)
    {
        int bit = (num >> i) & 1;
        cout << bit;
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int a, i;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter which bit you want to check or change: ";
    cin >> i;
    cout << "Binary of a: ";
    PrintBinary(a);
    cout << "value of (1<<i): ";
    PrintBinary(1 << i);

    // check ith set and unset bit
    if ((a & (1 << i)) != 0)
    {
        cout << "set bit." << endl;
    }
    else
    {
        cout << "unset bit" << endl;
    }

    // make ith bit to set bit
    cout << "after making ith bit to setbit: ";
    PrintBinary((a | (1 << i)));
    /*
    Example: a = 10 and i = 5
    0000001010
    0000101010
    */

    // make ith bit to unset bit
    cout << "after making ith bit to unset bit: ";
    PrintBinary((a & (~(1 << i))));
    /*
    Example: a = 10 and i = 3
    0000001010
    0000000010
    */

    // toggle the bit value(0 to 1 and 1 to 0)
    cout << "after toggle the ith bit value: ";
    PrintBinary((a ^ (1 << i)));
    /*
    Example: a = 10 and i = 5
    0000001010
    0000101010
    */


   // count set bit of the a
   int cnt = 0;
   for(int i = 31; i >= 0; i--){
    if((a&(1 << i)) != 0){
        cnt++;
    }
   }

   cout << "count of setbit: " << cnt << endl;

   // inbuilt function to count the setbit 
   int count = __builtin_popcount(a);
   cout << "count of setbit: " << count << endl;

   int countll = __builtin_popcountll(a);
   cout << "count of setbit: " << countll << endl;


    return 0;
};