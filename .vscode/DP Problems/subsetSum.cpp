#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char** argv) {

    int n, sum;
    cin >> n >> sum;    
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    bool t[n+1][sum+1];

    // Initialization
    for(int i=0; i<n+1; i++) {
        for(int j=0; j<sum+1; j++) {
            if(i==0)     // if no element in array we cann't make a subset of given sum except 1st that is sum = 0 
                t[i][j] = false;
            else if(j==0)  // if array size is given we always make a subset of zero that is null subset
                t[i][j] = true;
        }
}

   // filling the table based on the choice and already solved subproblems
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=sum; j++) {
            // if array element value is less than
            // or equal to sum(subproblem) then we have 
            //two choices either include that or not
            if(v[i-1] <= j)  
                t[i][j] = t[i-1][j-v[i-1]] || t[i-1][j];
            // if array element value is greater than no choice for including the element
            // because we can't make a subset sum of (exp =>) 8 with value 10(it is already greater)
            else
                t[i][j] = t[i-1][j];
    

    
        }
    }

  //* for printing the table
  /* for(int i=0; i<n+1; i++) {
        for(int j=0;j<sum+1; j++) {
            cout<<"arr"<<"["<<i<<"]"<<"["<<j<<"] = "<<t[i][j]<<endl;        
        }
    } */   

    //* final result always stored in bottommost right cell of the table
    cout<<t[n][sum]<<endl;

    return 0;
}

