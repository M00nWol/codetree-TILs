#include <iostream>
using namespace std;


int main() {
    int a[1000] = {},b[1000] = {};
    int n, m;
    char d;
    int t, tmp;
    int idxa = 0, idxb = 0;
    int idx = 0;

    cin >> n >> m;

    for(int i=0; i<n; i++){
        cin >> d >> t;

        if(d=='L'){
            for(int j=idxa+1; j<=idxa+t; j++){
                a[j] = a[j-1]-1;
            }
        } else {
            for(int j=idxa+1; j<=idxa+t; j++){
                a[j] = a[j-1]+1;
            }
        }
        idxa += t;
    }

    for(int i=0; i<m; i++){
        cin >> d >> t;

        if(d=='L'){
            for(int j=idxb+1; j<=idxb+t; j++){
                b[j] = b[j-1]-1;
            }
        } else {
            for(int j=idxb+1; j<=idxb+t; j++){
                b[j] = b[j-1]+1;
            }
        }
        idxb += t;
    }

    idx = (idxa>idxb)?idxa:idxb;

    for(int i=1; i<=idx; i++){
        if(a[i]==b[i]){
            cout << i;
            break;
        }
    }

    return 0;
}