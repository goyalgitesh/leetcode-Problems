#include <bits/stdc++.h>
using namespace std;

int main() {

    int a[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };
    int n = 3;

    int x,y;
    cout<<"Enter X and Y values which is less than "<<n<<endl;
    cin>>x>>y;
    if(x >= n || y >=n || x<0 || y<0) {
        cout<<"Invalid Values"<<endl;
    }


    int sum = 0;
    if(x!=0 && y!=0)
        sum+= a[x-1][y-1];
    if(x!=0 && y!=n-1)
        sum+= a[x-1][y+1];
    if(x!=n-1 && y!=0)
        sum+= a[x+1][y-1];
    if(x!=n-1 && y!=n-1)
        sum+= a[x+1][y+1];

    cout<<"Matrix is :"<<endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<"Adjacent Diagonal ELements Sum: "<<sum<<endl;


    return 0;
}