/*
Bit manipulation :

- Even/odd check:
all even number 0th bit is 0.
(n&1) is faster than (n%2==0)



- Divide and multipication of 2 (integer division and multiplication):
(n>>1) is faster than (n/2)
(n<<1) is faster than (n*2)



-lower case to uppercase and uppercase to lower case conversion:
binary 'A' = 00100001
binary 'a' = 01100001
'A' to 'Z' me 5th bit unset(0) hoti hai and 'a' to 'z' me 5th bit set(1) hoti hai

convert uppercase to lowercase:
char ch = 'A';
ch = (ch | (1 << 5)); or A = 'A' |(1<< 5)
or ch = (ch | ' '); or A = (A | ' '), here ' ' is space

convert lower to uppercase:
char ch = 'a';
ch = (ch & (~(1 << 5))); or a = 'a' |(~(1<< 5))
or ch = (ch & '_'); or a = (a & '_'), here '_' is underscore



- Clear LSB(make 0th to ith lsb 0):
(num&(~((1<<(i+1)) -1 )))

- Clear MSB:
(num & (((1<<(i+1)) -1 )));



- check the power of 2:
(n&(n-1)==0) => means n is the power of 2 else not

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
    int n;
    cout << "Enter the number: ";
    cin >> n;

    // print the binary representation
    // for (int i = 1; i <= 10; ++i)
    // {
    //     PrintBinary(i);
    // }

    // check even and odd number
    if (n & 1)
    {
        cout << "Odd number." << endl;
    }
    else
    {
        cout << "Even number." << endl;
    }

    // multiply by 2
    cout << "n*2: " << (n << 1) << endl;

    // divide by 2
    cout << "n/2: " << (n >> 1) << endl;

    // lower case to uppercase
    char lch;
    cout << "Enter lowercase character: ";
    cin >> lch;
    lch = (lch & (~(1 << 5)));
    cout << "uppercase: " << lch << endl;
    cout << "char(lch&'_'): " << char(lch & '_') << endl;

    // uppercase to lower case
    char ch;
    cout << "Enter uppercase character: ";
    cin >> ch;
    ch = (ch | (1 << 5));
    cout << "lowercase: " << ch << endl;
    cout << "char(ch | ' '): " << char(ch | ' ') << endl;

    // Clear LSB(make 0th to ith lsb 0):
    int i;
    cout << "Enter i: ";
    cin >> i;
    PrintBinary(n);
    int num = (n&(~((1<<(i+1)) -1 )));
    PrintBinary(num);


    // Clear MSB:
    PrintBinary(n);
    num = (n&(((1<<(i+1)) -1 )));
    PrintBinary(num);

    // check given number is power of 2 or not
    if(n&(n-1)){
        cout << "not power of 2" << endl;
    }else{
        cout << "power of 2" << endl;
    }

    return 0;
};