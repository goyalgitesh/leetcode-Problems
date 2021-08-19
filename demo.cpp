#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct rectangle {
    int width;
    int height;
};

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {

    rectangle r1 = {10};
    cout<<r1.width<<" "<<r1.height<<endl;

    int *p;
    int a = 10;
    p = &a;
    cout<<*p<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;

}