/*
- FIND GCD AND LCM:
GCD - GREATEST COMMON DIVISOR
LCM - LEAST COMMON MULTIPLE

GCD(a,b) = GCD(b, a%b)
LCM(a,b) = (a*b)/GCD(a,b)
*/

/*
- inbuilt function to find gcd
    cout << __gcd(a,b);
*/

/*
Find the minimum fraction of a and b:

minimum fraction(a/b) = (a/gcd(a,b)) / (b/gcd(a,b))
*/

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    // a -> divisor
    // b-> dividend

    // base case
    if (b == 0)
    {
        return a;
    }

    // recursive call
    return gcd(b, a % b);
}


/*
Time complexity: O(log(min(a,b)))
Space complexity: O(1)
*/


// another function to find gcd
int getGCD(int a, int b)
{   
    // base case
    if (a == 0)
        return b;

    if (b == 0)
        return a;

    // recursive case
    if (a > b)
    {
        a = a % b;
    }
    else
    {
        b = b % a;
    }

    // recursive call
    return getGCD(a, b);
}

/*
Time complexity: O(log(min(a,b)))
Space complexity: O(1)
*/

// iterative function to find gcd
int getGCD2(int a, int b)
{
    while (a != 0 && b != 0)
    {
        if(a > b) {
            a = a % b;
        }else{
            b = b % a;
        }
    }

    if(a == 0) return b;

    return a;
}

/*
Time complexity: O(min(a,b))
Space complexity: O(1)
*/

int main(int argc, char const *argv[])
{
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;

    // find gcd
    int ans = getGCD2(a, b);
    cout << "gcd of a and b is: " << ans << endl;

    // inbuilt function to find gcd
    cout << "gcd of a and b is: " << __gcd(a, b) << endl;

    // find lcm

    int lcm = a * b / ans;
    cout << "lcm of a and b is: " << lcm << endl;

    // minimum fraction

    cout << "minimum fraction of a and b is: " << (a / ans) << "/" << (b / ans) << endl;
    return 0;
};