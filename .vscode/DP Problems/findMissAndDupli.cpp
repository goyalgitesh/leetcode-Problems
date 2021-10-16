#include <bits/stdc++.h>
using namespace std;

int *findTwoElement(int *arr, int n) {
        sort(arr,arr+n);
        int miss = 0;
        int dupli = 0;
        int flag = 0;
        if(arr[0] != 1) {
            miss = 1;
            flag = 1;
        }
        for(int i=0; i<n-1; i++) {
            if(arr[i] == arr[i+1]) {
                dupli = arr[i+1];
            }
            if((arr[i]+1 != arr[i+1]) && (arr[i] != arr[i+1]) && flag ==0) {
                miss = arr[i] + 1;
                flag = 1;
            }
        }
        static int ans[2];
        ans[0] = dupli;
        ans[1] = miss;
        
        return ans;
    }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int *ans = findTwoElement(arr,n);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}
