#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int curr;
    int min = 1000;
    int i1;
    int i2;

    for(int i = 0;i<n-1;i++){
        curr = abs(arr[i] - arr[i+1]);
        if(curr<min){
            min = curr;
            i1 = i;i2 = i+1;
        }
    }

    if(abs(arr[0]-arr[n-1])<min){
        cout<<n<<" "<<1;
    }else{
        cout<<i1+1<<" "<<i2+1;
    }

    return 0;
}