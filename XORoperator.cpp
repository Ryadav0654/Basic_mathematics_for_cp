/*
XOR operator:

properties- 
1. a^a == 0
2. a^b == b^a
3. a^0 == a
4. x^y^z == x^z^y == z^y^x

- Swap two number using XOR operator:
let a and b are two numbers
step 1- a = a^b
step 2- b = b^a, here a = a^b so b = a
step 3- a = a^b, here b = a and a = a^b so a = b

numbers are swapped
*/

/*
Given array arr of n integers. All integers are present in event count except one. Find that one integer which has odd count in O(n) time complexity and O(1) space complexity.
constraints: 
n <= 10^5
and arr[i] <=  10^5
*/

#include<bits/stdc++.h>
using namespace std;
 
int main(int argc, char const *argv[])
{
    //swap two numbers using XOR operator
    int a , b;
    cout << "Enter a: ";
    cin >> a ;
    cout << "Enter b: ";
    cin >> b;

    cout << "before swapping: " << a << " " << b << endl;
    a = a^b;
    b = b^a;
    a = a^b;

    cout << "after swapping: " << a << " " << b << endl;

    // Question 2
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int *arr = new int[n];
    for(int i =0; i < n; i++){
        cin >> arr[i];
    }

    // check which one has odd count
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans = ans^arr[i];
    }

    cout << "the number which has odd count is: " << ans << endl;
    return 0;
};