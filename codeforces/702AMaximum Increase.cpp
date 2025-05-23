/*
You are given array consisting of n integers. Your task is to find the maximum length of an increasing subarray of the given array.

A subarray is the sequence of consecutive elements of the array. Subarray is called increasing if each element of this subarray strictly greater than previous.

Input
The first line contains single positive integer n (1 ≤ n ≤ 105) — the number of integers.

The second line contains n positive integers a1, a2, ..., an (1 ≤ ai ≤ 109).

Output
Print the maximum length of an increasing subarray of the given array.
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    int y[n];
    for(int i=0;i<n;i++){
        cin>>y[i];
    }
    int curr_len=0;
    int max_len=0;

    for(int i=0;i<n;i++){
        if(i>0 && y[i]>y[i-1]){
            curr_len++;
        }
        else{
            max_len=max(max_len,curr_len);
            curr_len=1;
        }
    }
    max_len=max(max_len,curr_len);
    cout<<max_len<<endl;
    return 0;
}