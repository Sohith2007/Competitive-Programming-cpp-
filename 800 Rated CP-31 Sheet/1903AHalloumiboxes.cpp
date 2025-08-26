#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<long long>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        vector<long long>arr1 = arr;
        sort(arr1.begin(),arr1.end());

        if(k>1 || arr1==arr){ //checks the condition if k>1 that means we can reverse the minimum subarray of size 2 so we can sort array and if array is already sorted we print "YES"
            cout<<"YES"<<endl;
        }
        else{ // if k<1 that means we cannot reverse an subarray or move an element from its place so we cannot sort the array i.e we print "NO" 
            cout<<"NO"<<endl;
        }
    }
    return 0;
}