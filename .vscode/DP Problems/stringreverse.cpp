#include <bits/stdc++.h>
using namespace std;

char *reverse(char *str, int len) {
    for(int i=0,j = len-1; i<=j; i++,j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }


    return str;

}


int main() {

    char str[100];
    cin.getline(str, 100);
    cout << reverse(str, strlen(str)) << endl;

    return 0;
}