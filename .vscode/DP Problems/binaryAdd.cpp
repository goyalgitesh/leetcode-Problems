#include <bits/stdc++.h>
using namespace std;

int binaryToNum2(string a) {
    int num1 = a[a.size()-1] - '0';
        int i = a.size()-2;
        int mul1 = 2;
        while(i >= 0) {
            int dig = a[i] - '0';
            num1 += dig*mul1;
            mul1 *= 2;
            i--;
        }

        return num1;
}

string numToBinary(int num) {
    string binary = "";
    int i = 0;
    while(num > 0) {
        binary.push_back(num%2 + '0');
        num /= 2;
}
    reverse(binary.begin(), binary.end());
    return binary;

}

int binaryToNum(string a) {
    int n = 0;
    for (int i = 0; i < a.size(); i++) {
        n = n * 2 + a[i] - '0';
}
    return n;
}

int main() {
    string a = "1010";
    cout <<binaryToNum(a)<< endl;
    cout <<binaryToNum2(a)<< endl;
    cout <<numToBinary(21)<< endl;
    return 0;
}
