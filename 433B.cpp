#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin>>n;
    vector<long long>v(n+1);
    for(long long i = 1;i<=n;i++){
        cin>>v[i];
    }
    vector<long long>v1(v);
    sort(v1.begin()+1,v1.end());

    vector<long long>p1(n+1,0);
    vector<long long>p2(n+1,0);

    for(long long i = 1;i<=n;i++){
        p1[i] = p1[i-1] + v[i];
        p2[i] = p2[i-1] + v1[i];
    }
    long long m;
    cin>>m;
    while(m--){
        long long type,l,r;
        cin>>type>>l>>r;
        if(type == 1){
            cout<<p1[r] - p1[l-1]<<endl;
        }else{
            cout<<p2[r] - p2[l-1]<<endl;
        }
    }
    return 0;
}