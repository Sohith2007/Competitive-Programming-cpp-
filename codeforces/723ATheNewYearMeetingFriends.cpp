/*
There are three friend living on the straight line Ox in Lineland. The first friend lives at the point x1, the second friend lives at the point x2, and the third friend lives at the point x3. They plan to celebrate the New Year together, so they need to meet at one point. What is the minimum total distance they have to travel in order to meet at some point and celebrate the New Year?

It's guaranteed that the optimal answer is always integer.

Input
The first line of the input contains three distinct integers x1, x2 and x3 (1 ≤ x1, x2, x3 ≤ 100) — the coordinates of the houses of the first, the second and the third friends respectively.

Output
Print one integer — the minimum total distance the friends need to travel in order to meet together.
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int x1,x2,x3;
    cin>>x1>>x2>>x3;

    int x[3]={x1,x2,x3};
    sort(x,x+3); //finding the median value so that remaining two persons can travel
    int total = (x[1]-x[0])+(x[2]-x[1]);//calculating the total distance need to be coverd by the persons to reach the median person
    cout<<total<<endl;//total distance need to be traveled

    return 0;
}
