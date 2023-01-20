#include <bits/stdc++.h>
using namespace std;

long long GCD(long long A, long long B)
{
    while (A > 0 && B > 0)
    {
        if (A > B)
            A = A % B;
        else
            B = B % A;
    }
    if (A == 0)
        return B;
    else
        return A;
}
vector<long long> lcmAndGcd(long long A, long long B)
{
    // code here
    // long long lcm = (A*B)/GCD(A, B);
    vector<long long> v;
    v.push_back((A * B) / GCD(A, B));
    v.push_back(GCD(A, B));
    return v;
}

int main()
{
    /*
    GFG LINK:

    Question : LCM And GCD

    https://practice.geeksforgeeks.org/problems/lcm-and-gcd4516/1

    Input:
    A = 5 , B = 10
    Output:
    10 5
    Explanation:
    LCM of 5 and 10 is 10, while
    thier GCD is 5.


    Status - Submitted


    */
    long long int n1 , n2;
    cin >> n1 >> n2;

    //cout << lcmAndGcd(n1, n2) << " " << GCD(n1, n2);
}