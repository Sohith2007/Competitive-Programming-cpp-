/*
Polycarp loves ciphers. He has invented his own cipher called repeating.

Repeating cipher is used for strings. To encrypt the string s=s1s2…sm
𝑠
=
𝑠
1
𝑠
2
…
𝑠
𝑚
 (1≤m≤10
1
≤
𝑚
≤
10
), Polycarp uses the following algorithm:

he writes down s1
𝑠
1
 ones,
he writes down s2
𝑠
2
 twice,
he writes down s3
𝑠
3
 three times,
...
he writes down sm
𝑠
𝑚
 m
𝑚
 times.
For example, if s
𝑠
="bab" the process is: "b" →
→
 "baa" →
→
 "baabbb". So the encrypted s
𝑠
="bab" is "baabbb".

Given string t
𝑡
 — the result of encryption of some string s
𝑠
. Your task is to decrypt it, i. e. find the string s
𝑠
.

Input
The first line contains integer n
𝑛
 (1≤n≤55
1
≤
𝑛
≤
55
) — the length of the encrypted string. The second line of the input contains t
𝑡
 — the result of encryption of some string s
𝑠
. It contains only lowercase Latin letters. The length of t
𝑡
 is exactly n
𝑛
.

It is guaranteed that the answer to the test exists.

Output
Print such string s
𝑠
 that after encryption it equals t
𝑡
.
*/

#include <iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin >>n;
    string s;
    cin>>s;
    int i=0;
    int count=1;
    string ans = "";
    while(i<n){
        ans+=s[i];
        i+=count;
        count++;
    }
    cout<<ans<<endl;

    return 0;
}