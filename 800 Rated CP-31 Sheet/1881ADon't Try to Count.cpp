/*
Given a string x
 of length n
 and a string s
 of length m
 (n⋅m≤25
), consisting of lowercase Latin letters, you can apply any number of operations to the string x
.

In one operation, you append the current value of x
 to the end of the string x
. Note that the value of x
 will change after this.

For example, if x=
"aba", then after applying operations, x
 will change as follows: "aba" →
 "abaaba" →
 "abaabaabaaba".

After what minimum number of operations s
 will appear in x
 as a substring? A substring of a string is defined as a contiguous segment of it.

Input
The first line of the input contains a single integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains two numbers n
 and m
 (1≤n⋅m≤25
) — the lengths of strings x
 and s
, respectively.

The second line of each test case contains the string x
 of length n
.

The third line of each test case contains the string s
 of length m
.

Output
For each test case, output a single number — the minimum number of operations after which s
 will appear in x
 as a substring. If this is not possible, output −1
.

Example
InputCopy
12
1 5
a
aaaaa
5 5
eforc
force
2 5
ab
ababa
3 5
aba
ababa
4 3
babb
bbb
5 1
aaaaa
a
4 2
aabb
ba
2 8
bk
kbkbkbkb
12 2
fjdgmujlcont
tf
2 2
aa
aa
3 5
abb
babba
1 19
m
mmmmmmmmmmmmmmmmmmm
OutputCopy
3
1
2
-1
1
0
1
3
1
0
2
5
*/

#include <iostream>

using namespace std;

bool check(string s, string x) // checks if it is a substring
{
    if (x.size() < s.size())
    {
        return false;
    }
    for (int i = 0; i <= (int)x.size() - (int)s.size(); i++)
    {
        if (x.substr(i, s.size()) == s)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> n >> m;
        string s, x;
        cin >> x >> s;
        // maximum can be 5 appends so taking 5 strings
        long long ans = -1;
        string cur = x;

        for (int k = 0; k <= 5; k++)
        { // max 5 doublings needed due to n*m <= 25
            if (check(s, cur))
            {
                ans = k;
                break;
            }
            cur += cur; // double the string
        }

        cout << ans << endl;
    }
    return 0;
}
