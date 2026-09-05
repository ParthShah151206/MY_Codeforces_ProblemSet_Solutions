#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        int count = 0;

        for(int i = 0;i<n;i+=k){
            bool flag = 1;
             
            for(int j = i;j<i+k;j++){
                if(s[j] == '0'){
                    flag = 0;
                    break;
                }
            }
            if(flag) count++;
        }
        cout<<count<<endl;
    }

    return 0;
}
