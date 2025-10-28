#include <iostream>
using namespace std;

int main() {
    int n;
    int a[1000];
    int cnt = 0;
    int max = 1;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        if(i==0 || a[i-1]!=a[i]){
            cnt = 1;
            continue;
        }  
        cnt++;
        if(max<cnt) max = cnt;
    }

    cout << max;
    return 0;
}