/*
Binary Exponentiation using recursion: (a^b):

a^b = f(a, b/2) * f(a, b/2) , if b is even
a^b = a* f(a, b/2) * f(a, b/2) , if b is odd

*/

#include<bits/stdc++.h>
using namespace std;

long long power(int a, int b){
    // a -> base and b -> exponent
    // base case 
    if(b == 0) return 1;
    
    long long ans = power(a, b/2);
    if(b&1){
        // when b is odd
        return a * ans * ans;
    }else{
        // when b is even
        return ans * ans;
    }
}
 
int main(int argc, char const *argv[])
{
    int a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;
 
    long long answer = power(a, b);
    cout << "a^b is: " << answer << endl;
 
    return 0;
};

/*
ham power function use nahi karate because power function return double value.
*/