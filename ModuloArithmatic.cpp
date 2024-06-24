/*
Given a number n, Print the factorial of n.
Constraints:
1 <= N <= 100

Print answer module M, where M = 47

Generally in questions:
Ask to print the ans modulo M, where M = 10^9+7(prime number)

*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int M = 47;
    long long fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact = (fact * i) % M;
        cout << "fact: " << i << " => " << fact << endl;
    }
    cout << fact;
    return 0;
};

/*
Some Modulo arithmatic formulas:
1. (a+b)%M = ((a%M) + (b%M))%M
2. (a*b)%M = ((a%M) * (b%M))%M
3. (a-b)%M = ((a%M) - (b%M) + M)%M, here M is extra added to make the value positive if it is negative
4. (a/b)%M = ((a%M) * (b^-1)%M)%M, here b^-1 is multiplication inverse
*/