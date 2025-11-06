#include <iostream>

using namespace std;

bool NoCarry(int a, int b, int c){
    while(a>0&&b>0&&c>0){
        if((a%10)+(b%10)+(c%10) > 10){
            return false;
        }
        a /= 10;
        b /= 10;
        c /= 10;
    }
    return true;
}

int main() {
    int n;
    int arr[20];
    int res = -1;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<=n-3; i++){
        for(int j=i+1; j<=n-2; j++){
            for(int k=j+1; k<=n-1; k++){
                if(NoCarry(arr[i], arr[j], arr[k])){
                    res = max(res, arr[i]+arr[j]+arr[k]);
                }
            }
        }
    }

    cout << res;
    return 0;
}