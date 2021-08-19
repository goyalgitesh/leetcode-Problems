#include <bits/stdc++.h>
using namespace std;

bool validMountainArray(vector<int>& arr) {
        if(arr.size() <3)
            return false;
        
        for(int i=0; i<arr.size()-1;i++) {
            if(arr[i+1]=arr[i]) {
                return false;
                break;
            }
        }
        
        int x = -1;
        
        for(int i=0; i<arr.size()-1; i++) {
            if(arr[1]>arr[0]) {
            if(arr[i+1]<arr[i]) {
                x = i;
                break;
        }
    }
            
}
        if(x==-1)
            return false;
        else {
        int flag = 1;
        for(int i = x; i<arr.size()-1; i++) {
            if (arr[i+1]>arr[i])
                flag = 0;
            
        }
            if(flag==0)
                return false;
            else
                return true;
       
        
}

}

int main() {
    vector<int> v = {0,3,2,1};
    cout<<validMountainArray(v);
    cout<<endl;





    return 0;
}