/*
There is a building consisting of 10 000
10
 
000
 apartments numbered from 1
1
 to 10 000
10
 
000
, inclusive.

Call an apartment boring, if its number consists of the same digit. Examples of boring apartments are 11,2,777,9999
11
,
2
,
777
,
9999
 and so on.

Our character is a troublemaker, and he calls the intercoms of all boring apartments, till someone answers the call, in the following order:

First he calls all apartments consisting of digit 1
1
, in increasing order (1,11,111,1111
1
,
11
,
111
,
1111
).
Next he calls all apartments consisting of digit 2
2
, in increasing order (2,22,222,2222
2
,
22
,
222
,
2222
)
And so on.
The resident of the boring apartment x
𝑥
 answers the call, and our character stops calling anyone further.

Our character wants to know how many digits he pressed in total and your task is to help him to count the total number of keypresses.

For example, if the resident of boring apartment 22
22
 answered, then our character called apartments with numbers 1,11,111,1111,2,22
1
,
11
,
111
,
1111
,
2
,
22
 and the total number of digits he pressed is 1+2+3+4+1+2=13
1
+
2
+
3
+
4
+
1
+
2
=
13
.

You have to answer t
𝑡
 independent test cases.

Input
The first line of the input contains one integer t
𝑡
 (1≤t≤36
1
≤
𝑡
≤
36
) — the number of test cases.

The only line of the test case contains one integer x
𝑥
 (1≤x≤9999
1
≤
𝑥
≤
9999
) — the apartment number of the resident who answered the call. It is guaranteed that x
𝑥
 consists of the same digit.

Output
For each test case, print the answer: how many digits our character pressed in total.
*/

#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int num;
    cin>>num;
    int count=0;
    count = ((num%10)-1) * 10;
    int digits=0;
    while(num){
        digits++;
        num/=10;
    }
    if(digits==1){
        count+=1;
    }
    else if(digits==2){
        count+=3;
    }
    else if(digits==3){
        count+=6;
    }
    else{
        count+=10;
    }
    cout<<count<<endl;
    }
}