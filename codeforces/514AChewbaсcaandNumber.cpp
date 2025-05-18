/*Luke Skywalker gave Chewbacca an integer number x. Chewbacca isn't good at numbers but he loves inverting digits in them. Inverting digit t means replacing it with digit 9 - t.

Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits. The decimal representation of the final number shouldn't start with a zero.

Input
The first line contains a single integer x (1 ≤ x ≤ 1018) — the number that Luke Skywalker gave to Chewbacca.

Output
Print the minimum possible positive number that Chewbacca can obtain after inverting some digits. The number shouldn't contain leading zeroes.*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string x;
    cin>>x;//taking the input of integer as string
    
    for(int i=0;i<x.length();i++){
        int digit = x[i]-'0';
        if(digit>=5){ // to tranform to smallest number we check the number greater than or equal to 5 so that when we subtract with 9 we get smaller number 
            if(i==0 && digit==9){ //this condition is for the case of first number should not be 0
                //do not change anything
            }
            else{
                x[i] = (9-digit) + '0'; //subtrcating the number from 9
            }
        
        }
    }
    cout<<x<<endl;
    return 0;

}