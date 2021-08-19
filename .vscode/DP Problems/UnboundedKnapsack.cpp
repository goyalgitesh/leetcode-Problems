#include <bits/stdc++.h>
using namespace std;

int knapSack(int N, int W, int val[], int wt[])
    {
         int w = W;
        int n = N;
        int t[n+1][w+1];
        for(int i=0; i<n+1;i++) {
            for(int j=0; j<w+1; j++) {
                if(i ==0)
                    t[i][j] = 0;
                else if(j==0)
                    t[i][j] = 0;
            }
        }
        
        for(int i=1; i<n+1; i++) {
            for(int j=1; j<w+1; j++) {
                if(wt[i-1] <= j) {
                    t[i][j] = max((val[i-1] + t[i][j-wt[i-1]]),t[i-1][j]); 
                }
                else {
                    t[i][j] = t[i-1][j];
                }
            }
        }

        for(int i=0; i<n+1; i++) {
            for(int j=0; j<w+1; j++) {
                cout << t[i][j] << " ";
            }
            cout << endl;
        }
        
        return t[n][w];
        
      
    }

int main() {

    int wt[] = {2,1};
    int val[] = {1,1};
    int N = 2;
    int W = 3;
    int res = knapSack(N, W, val, wt);
    cout << res << endl;

    return 0;
}
