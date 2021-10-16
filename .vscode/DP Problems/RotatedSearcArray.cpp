#include <bits/stdc++.h>
using namespace std;

int binSearch(int A[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (A[mid] == key)
            return mid;
        else if (A[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
    }    
    
    
    int search(int A[], int l, int h, int key){
    //complete the function here
    int pivot = 0;
    int pind = 0;
    for(int i=0;i<h; i++) {
        if(A[i+1] < A[i] ) {
            pivot = A[i+1];
            pind = i+1;
            break;
        }
    }
    
    int k1 = binSearch(A,0,pind-1,key);
    int k2 = binSearch(A,pind,h,key);
    if(k1==-1 && k2 != -1)
        return k2;
    if(k1!=-1 && k2==-1)
        return k1;
    return -1;
    
    }

int main() {
    int A[] = {4,5,6,7,1,2};
    int n = sizeof(A)/sizeof(int);
    int key = 0;
    int result = search(A,0,n-1,key);
    cout<<result<<endl;
    return 0;
}