/*
You are given weights and values of N items, put these items in a knapsack of capacity
 W to get the maximum total value in the knapsack. Note that we have only one quantity
  of each item.
In other words, given two integer arrays val[0..N-1] and wt[0..N-1] which represent 
values and weights associated with N items respectively. Also given an integer W 
which represents knapsack capacity, find out the maximum value subset of val[] such
 that sum of the weights of this sjhubset is smaller than or equal to W. You cannot 
 break an item, either pick the complete item or don’t pick it (0-1 property).

Example 1:

Input:
N = 3
W = 4
values[] = {1,2,3}
weight[] = {4,5,1}
Output: 3
Example 2:

Input:
N = 3
W = 3
values[] = {1,2,3}
weight[] = {4,5,6}
Output: 0
Your Task:
Complete the function knapSack() which takes maximum capacity W, weight array wt[], value array val[], and the number of items n as a parameter and returns the maximum possible value you can get.

Expected Time Complexity: O(N*W).
Expected Auxiliary Space: O(N*W)

Constraints:
1 ≤ N ≤ 1000
1 ≤ W ≤ 1000
1 ≤ wt[i] ≤ 1000
1 ≤ v[i] ≤ 1000

*/

#include <bits/stdc++.h>
using namespace std;


static vector<vector<int>> t(1002,vector<int>(1002,-1));

int knapsack(vector<int> wt, vector<int> val, int W, int n) {

    // Base Condition
    if(n==0 || W==0)
        return 0;
    if(t[n][W] !=-1)
        return t[n][W];
    if(wt[n-1] <= W)
        return t[n][W] =  max((val[n-1] + knapsack(wt,val,W-wt[n-1],n-1)), knapsack(wt,val,W,n-1));
    else if(wt[n-1] > W)
        return t[n][W] =  knapsack(wt,val,W,n-1);

}




int main() {

    int n = 3;
    int W = 4;

    vector<int> values = {1,2,3};
    vector<int> weights = {4,5,1};

    cout<<knapsack(weights,values,W,n)<<endl;




    return 0;
}

