#include <iostream>
using namespace std;

int main() {
    int n, m;
    int a[1000001]={}, b[1000001]={};
    int timea=1, timeb=1;
    int time, t;
    char d;
    int cnt = 0;

    cin >> n >> m;

    for(int i=0; i<n; i++){
        cin >> t >> d;
        if(d=='L'){
            while(t--){
                a[timea] = a[timea-1]-1;
                timea++;
            }
        } else {
            while(t--){
                a[timea] = a[timea-1]+1;
                timea++;
            }
        }
    }

    for(int i=0; i<m; i++){
        cin >> t >> d;
        if(d=='L'){
            while(t--){
                b[timeb] = b[timeb-1]-1;
                timeb++;
            }
        } else {
            while(t--){
                b[timeb] = b[timeb-1]+1;
                timeb++;
            }
        }
    }
    
    for(int i=1000000; i>=timea; i--){
        a[i] = a[timea-1];
    }

    for(int i=1000000; i>=timeb; i--){
        b[i] = b[timeb-1];
    }

    
    time = (timea>timeb) ? timea : timeb;


    for(int i=1; i<time; i++){
        if(a[i]==b[i] && a[i-1]!=b[i-1]){
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}