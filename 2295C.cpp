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

        int arr[n];
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        
        for(int i = 0;i<n;i++){
            if(arr[i] == 1) break;
            else{
                if(arr[i] == -1){
                    arr[i] = 1;
                    break;
                }
            }
        }
        for(int i = n-1;i>=0;i--){
            if(arr[i] == 1)break;
            else{
                if(arr[i] == -1){
                    arr[i] = 1;
                    break;
                }
            }
        }
        
        
        for(int i = 0;i<n;i++){
            if(arr[i] == -1){
                arr[i] = 0;
            }
        }
        for(int i = 0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<'\n';
    }

    return 0;
}
