#include <iostream>

using namespace std;

int n;
int arr[10];

int lcm(int res, int idx){
    if(idx==-1){
        return res;
    }

    int gcd = 1;

    for(int i=2; i<=res; i++){
        if(res%i==0 && arr[idx]%i==0){
            gcd = i;
            break;
        }
    }

    res = res*arr[idx]/gcd;

    return lcm(res, idx-1);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << lcm(arr[n-1], n-2);

    return 0;
}