#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    int reversed_number = 0;
    while (x != 0)
    {
        int last_digit = x % 10;
        reversed_number = (reversed_number * 10) + last_digit;
        x = x / 10;
    }
    return reversed_number;
}

int main()
{
    /*
    LEET CODE LINK:

    Question : 7. Reverse Integer

    https://leetcode.com/problems/reverse-integer/

    Input: x = 123
    Output: 321

    */
    int n;
    cin >> n;

    cout << reverse(n);
    
}