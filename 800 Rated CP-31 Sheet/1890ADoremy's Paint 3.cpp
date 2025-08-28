/*
An array b1,b2,…,bn
 of positive integers is good if all the sums of two adjacent elements are equal to the same value. More formally, the array is good if there exists a k
 such that b1+b2=b2+b3=…=bn−1+bn=k
.

Doremy has an array a
 of length n
. Now Doremy can permute its elements (change their order) however she wants. Determine if she can make the array good.

Input
The input consists of multiple test cases. The first line contains a single integer t
 (1≤t≤100
) — the number of test cases. The description of the test cases follows.

The first line of each test case contains a single integer n
 (2≤n≤100
) — the length of the array a
.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤105
).

There are no constraints on the sum of n
 over all test cases.

Output
For each test case, print "Yes" (without quotes), if it is possible to make the array good, and "No" (without quotes) otherwise.

You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.

Example
InputCopy
5
2
8 9
3
1 1 2
4
1 1 4 5
5
2 3 3 3 3
4
100000 100000 100000 100000
OutputCopy
Yes
Yes
No
No
Yes
*/

#include <iostream>
#include <vector>
#include <map>

using namespace std;

// to rearrange the array in the form that a[i-1]+a[i] == a[i]+a[i+1] for every i<n that means we need to have same number in even indices and same number in odd indices so that the condition will be satisfied

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        map<long long, long long> freq;

        for (int i = 0; i < n; i++)
        {
            freq[arr[i]]++;
        }

        if (freq.size() >= 3) // according to above condition that means thier should be only two different numbers else "no"
        {
            cout << "NO" << endl;
        }
        else
        {
            long long freq_1 = freq.begin()->second;
            long long freq_2 = freq.rbegin()->second;

            if (freq_1 == freq_2) // if two numbers have same frequency that menas n is even and can be rearranged
            {
                cout << "YES" << endl;
            }
            else if (n % 2 == 1 && abs(freq_1 - freq_2) == 1) // if n is odd and we need check that any one number's frequency should greater than the other by 1
            {
                cout << "YES" << endl;
            }
            else // if not "no"
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}