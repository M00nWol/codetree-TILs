#include <iostream>

using namespace std;

int n;
int a[1000];

int main() {
    int max, i, tmp;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int idx = n;

    while(idx!=0){
        if(idx == 1){
            cout << 1;
            break;
        }
        max = a[0];
        tmp = 0;
        for(int i=0; i<idx;i++){
            if(a[i] > max){
                max = a[i];
                tmp = i;
            }
        }
        idx = tmp;
        cout << idx+1 << " ";
    
    }
    return 0;
}
