#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,n;
        cin>>n>>x;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int req=arr[0];
        for(int i=1;i<n;i++){
            req = max(req,arr[i]-arr[i-1]); //finds the maximum difference between the fuel stations
        }
        req = max(req,2*(x-arr[n-1])); //find the maximum difference from last fuel station to destination and we double the difference because we need to return back from destination to again last fuel station

        cout<<req<<endl;
    }
    return 0;
}