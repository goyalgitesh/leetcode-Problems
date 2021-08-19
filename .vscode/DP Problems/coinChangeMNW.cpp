// Coin Change 1 : Maximum no. of ways (Unbounded Knapsack)
#include <bits/stdc++.h>
using namespace std;

int CoinChangeI(int amount, vector<int> &coins) {
    int n = coins.size();
    int w = amount;
    int t[n+1][w+1];

    for(int i=0; i<n+1; i++) {
        for(int j=0; j<w+1; j++) {
            if(i==0)
                t[i][j] = 0;
            else if(j==0)
                t[i][j] = 1;
        }
        
    }
    t[0][0] = 1;

    for(int i=1; i<n+1; i++) {
        for(int j=1; j<w+1; j++) {
            if(coins[i-1] <= j)
                t[i][j] = t[i][j-coins[i-1]] + t[i-1][j];
            else
                t[i][j] = t[i-1][j];
            
        }
    }

    for(int i=0; i<n+1; i++) {
        for(int j=0; j<w+1; j++) {

            cout<<t[i][j]<<"  ";
        }
        cout<<endl;
        
    }


    return t[n][w];



}

int main() {
    int amount = 5;
    vector<int> coins;
    coins.push_back(1);
    coins.push_back(2);
    coins.push_back(5);
    cout<<CoinChangeI(amount, coins)<<endl;


    return 0;
}