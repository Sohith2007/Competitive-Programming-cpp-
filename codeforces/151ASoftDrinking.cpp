/*
This winter is so cold in Nvodsk! A group of n friends decided to buy k bottles of a soft drink called "Take-It-Light" to warm up a bit. Each bottle has l milliliters of the drink. Also they bought c limes and cut each of them into d slices. After that they found p grams of salt.

To make a toast, each friend needs nl milliliters of the drink, a slice of lime and np grams of salt. The friends want to make as many toasts as they can, provided they all drink the same amount. How many toasts can each friend make?

Input
The first and only line contains positive integers n, k, l, c, d, p, nl, np, not exceeding 1000 and no less than 1. The numbers are separated by exactly one space.

Output
Print a single integer — the number of toasts each friend can make.
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int totaldrinks = k*l;//this calculate the total amount of drink
    int totalslices = c*d;//this calculates the total no of slices
    int drink = totaldrinks/nl;//required amount of drink for one toast
    int salt = p/np;//required amount of salt for one toast
    int toast=min(totalslices,min(drink,salt));//find the no of toasts we can make with items

    int res=toast/n;//no of toasts each person can make
    cout<<res<<endl;
    return 0;
}