#include <iostream>
using namespace std;

int main() {
    int n, x[100];
    char c[100];
    int line[201] = {};
    int tmp = 100;
    int cnt = 0;
    int test = 0;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> x[i] >> c[i];
    }

    for(int i=0; i<n; i++){
        if(c[i]=='L'){
            for(int j=tmp-1; j>=tmp-x[i]; j--){
                line[j]++;
                test++;
            }
            tmp -= x[i];
        } else {
            for(int j=tmp; j<tmp+x[i]; j++){
                line[j]++;
                test++;
            }
            tmp += x[i];
        }
    }

    for(int i=0; i<201; i++){
        if(line[i]>=2){
            cnt++;
        }
    }

    cout << cnt;
    
    return 0;
}