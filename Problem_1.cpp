#include <bits/stdc++.h>
using namespace std;

int evenlyDivides(int N)
{
    // code here
    int count = 0;
    int copy_of_N = N;
    while (N > 0)
    {
        int last_digit = N % 10;
        if (copy_of_N % last_digit == 0)
        {
            count=count+1;
        }
        N = N / 10;
    }
    return count;
}

int main()
{
    /*
    GFG LINK:
    https://practice.geeksforgeeks.org/problems/count-digits5716/1

    Input:
    N = 12
    Output:
    2
    Explanation:
    1, 2 both divide 12 evenly

    */
    int n;
    cin >> n;

    //evenlyDivides(n);

    cout << evenlyDivides(n) << endl;
}