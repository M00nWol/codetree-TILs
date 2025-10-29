#include <iostream>
using namespace std;

#define MAX 1000000

int main() {
    int n, m;
    int a[MAX] = {};
    int b[MAX] = {};
    int header = -1; // A : 1, B : 2, AB: 0
    int cnt = 0;
    int v, t;
    int ta = 1, tb = 1;

    cin >> n >> m;


    for(int i=0; i<n; i++){
        cin >> v >> t;
        while(t--){
            a[ta] = a[ta-1]+v;
            ta++;
        }
    }


    for(int i=0; i<m; i++){
        cin >> v >> t;
        while(t--){
            b[tb] = b[tb-1]+v;
            tb++;
        }
    }


    for(int i=0; i<ta; i++){
        if(a[i]>b[i] && header!=1){
            header = 1;
            cnt++;
        } else if(b[i]>a[i] && header!=2){
            header = 2;
            cnt++;
        } else if(b[i]==a[i] && header!=0){
            header = 0;
            cnt++;
        }
    }
    

    cout << cnt-1;

    return 0;
}