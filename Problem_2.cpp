#include <bits/stdc++.h>
using namespace std;

string is_palindrome(int n)
{
    // Code here.
    int reversed_number = 0;
    int copy_of_number = n;
    while (n > 0)
    {
        int last_digit = n % 10;
        reversed_number = (reversed_number * 10) + last_digit;
        n = n / 10;
    }
    if (reversed_number == copy_of_number)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}

int main()
{
    /*
    GFG LINK:

    Question : Palindrome

    https://practice.geeksforgeeks.org/problems/palindrome0746/1

    Input: n = 55555
    Output: Yes

    Status - Submitted


    */
    int n;
    cin >> n;

    cout << is_palindrome(n);
}