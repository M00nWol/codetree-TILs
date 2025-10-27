#include <iostream>
using namespace std;

#define MAX 100000

int main() {
    int cur[2*MAX+1] = {};
    int tmp = MAX;
    int n, x;
    int white = 0, black=0;
    char c;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> x >> c;
        if(c=='L'){
            while(x>0){
                cur[tmp] = 1;
                x--;
                if(x>0){
                    tmp--;
                }
            }
        } else{
            while(x>0){
                cur[tmp] = 2;
                x--;
                if(x>0){
                    tmp++;
                }
            }
        }
    }

    for(int i=0; i<2*MAX+1; i++){
        if(cur[i]==1){
            white++;
            continue;
        } else if(cur[i]==2){
            black++;
        }
    }

    cout << white << " " << black;
    return 0;
}