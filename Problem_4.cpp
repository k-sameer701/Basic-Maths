#include <bits/stdc++.h>
using namespace std;

long long sumOfDivisors(int n)
    {
        // Write Your Code here
        int sum = 0;
        while(n>0){
            for(int i=1; i<=n; i++){
                if(n%i == 0){
                    sum = sum + i;
                }
            }
            n--;
        }
        return sum;
    }

int main()
{
    /*
    GFG LINK:

    Question : Sum of all divisors from 1 to n

    https://practice.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1

    Input:
    N = 4
    Output:
    15
    Explanation:
    F(1) = 1
    F(2) = 1 + 2 = 3
    F(3) = 1 + 3 = 4
    F(4) = 1 + 2 + 4 = 7
    ans = F(1) + F(2) + F(3) + F(4)
        = 1 + 3 + 4 + 7
        = 15

    Status - UnSubmitted


    */
    int n;
    cin >> n;

    cout << sumOfDivisors(n);
}