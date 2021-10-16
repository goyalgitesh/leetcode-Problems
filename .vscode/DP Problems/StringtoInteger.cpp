#include <bits/stdc++.h>
using namespace std;
    
int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int max = INT_MIN;
        while(i <=j) {
            int area = (j-i) * min(height[i],height[j]);
            max = (max < area) ? area : max;
            if(height[i] < height[j])
                i++;
            else if(height[i] > height[j])
                j--;
            else {
                i++;
                j--;
            }
        }
        
        return max;
        
        
    }

int myAtoi(string str) {
    int i = 0;
    int sign = 1;
    long long res = 0;
    while (str[i] == ' ')
        i++;
    if (str[i] == '+' || str[i] == '-') {
        sign = (str[i] == '+') ? 1 : -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        res = res * 10 + (str[i] - '0');
        if (sign == 1 && res > INT_MAX)
            return INT_MAX;
        if (sign == -1 && -res < INT_MIN)
            return INT_MIN;
        i++;
    }
    return sign * res;
}


int main() {
    vector<int> v = {1,8,6,2,5,4,8,3,7};
    cout<<maxArea(v)<<endl;
    return 0;

}