#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; // no. of monsters
    cin>>n;
    int e; // intital experience
    cin>>e;
    int count = 0;
    if(n==0)
        cout<<0<<endl;
    vector<int> power(n);  // power [i] represent power of i'th monster
    vector<int> bonus(n); // bonus[i] represent bonus getting on defeating the i'th monster
    for(int i=0; i<n; i++)
        cin>>power[i];
    for(int i=0; i<n; i++)
        cin>>bonus[i];
    //sort(power.begin(),power.end()); // we first defeat the least power monster
    //sort(bonus.begin(),bonus.end());
    int ans = 0;
    
    for(int i=0; i<power.size(); i++) {
        if(power[i] <= e) {
    int curr = e; //123
    int bon = 0; 
    for(int j=0; j<power.size(); j++) {
        if((power[j] < curr) && (bonus[j] > bon)) {
            curr = power[j];
            bon = bonus[j];
            power[i] = INT_MAX;
    }
    ans++;
    e = e + bon; // e = 133
}
    }
}

    cout<<ans<<endl;

    return 0;
}