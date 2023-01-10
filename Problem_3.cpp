#include <bits/stdc++.h>
using namespace std;

string armstrongNumber(int n)
{
    // code here
    int sum = 0;
    int copy_of_number = n;
    while (n > 0)
    {
        int last_digit = n % 10;
        sum = sum + (last_digit * last_digit * last_digit);
        n = n / 10;
    }
    if (sum == copy_of_number)
        return "Yes";
    return "No";
}

int main()
{
    /*
    GFG LINK:

    Question : Armstrong Numbers

    https://practice.geeksforgeeks.org/problems/armstrong-numbers2727/1

    Input: N = 153
    Output: "Yes"
    Explanation: 153 is an Armstrong number
    since 13 + 53 + 33 = 153.
    Hence answer is "Yes".

    */
    int n;
    cin >> n;

    cout << armstrongNumber(n);
}