#include <iostream>
using namespace std;

#define MAX 1000005

int main() {
    int n,m,v,t;
    int a[MAX]={}, b[MAX]={},c[MAX] = {};
    int t_a = 1;
    int t_b = 1;
    int cnt = 0;
    int header = 0;


    cin >> n >> m;

    for(int i=0; i<n; i++){
        cin >> v >> t;
        while(t--){
            a[t_a] = a[t_a-1] + v;
            t_a++;
        }
    }

    for(int i=0; i<m; i++){
        cin >> v >> t;
        while(t--){
            b[t_b] = b[t_b-1] + v;
            t_b++;
        }
    }

    for(int i=0; i<t_a; i++){
        if(a[i]>b[i]){
            if(header==2){
                cnt++;
            }
            header = 1;
        } else if(a[i] < b[i]){
            if(header==1){
                cnt++;
            }
            header = 2;
        }
    
    }

    cout << cnt;
    return 0;
}