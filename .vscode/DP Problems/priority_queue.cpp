#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(5);
    pq.push(20);
    pq.push(3);
    pq.push(10);
    pq.push(15);

    while(!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
}

return 0;
}