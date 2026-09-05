#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        long long arr[n];
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        int odd = 0;
        int even = 0;
        int mod4 = 0;

        for(int i = 0;i<n;i++){
            if(arr[i]%4 == 0){
                mod4++;
            }else if(arr[i]%2 == 0){
                even++;
            }else if(arr[i]%2 == 1){
                odd++;
            }
        }
        cout<<max({even,odd,mod4})<<endl;;
    }

    return 0;
}
