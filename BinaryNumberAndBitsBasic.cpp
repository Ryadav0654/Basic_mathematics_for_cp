/*
Binary number and Bits Basic:

Signed n-bit interger range:
-2^(n-1) to 2^(n-1)-1

Unsigned n-bit interger range:
0 to 2^(n)-1


*/

#include<bits/stdc++.h>
using namespace std;
 
int main(int argc, char const *argv[])
{
    cout << "standard max value: " << INT_MAX << endl;
    cout << "standard min value: " << INT_MIN << endl;
   
    int a = (1<<31) -1;
    cout << "signed integer max value: " << a << endl;

    unsigned int b = (1<<32) -1;
    cout << "unsigned integer max value: " << b << endl;

    cout << "size of int: " << sizeof(int) << " byte." << endl;
    cout << "size of char: " << sizeof(char) <<" byte" << endl;
    cout << "size of double: " << sizeof(double) <<" byte" << endl;
    cout << "size of long long: " << sizeof(long long) << " byte" <<endl;

    
    return 0;
};

/*
Logical operator: 

AND(&) - if a and b both are 1 or true then a&b is true or 1 otherwise 0.
OR(|) - if a and b both are 0 or false then a|b is false or 0 otherwise 1.
XOR(^) - if a and b both are same then a^b is false or 0 otherwise true or 1.
NOT(!) - reverse the value.

LEFT SHIFT(<<) - if a << n then it means a shift left n times and its value is a*2^n.
RIGHT SHIFT(>>) - if a >> n then it means a shift right n times and its value is a/2^n.

find 2^n = 1 << n.
*/