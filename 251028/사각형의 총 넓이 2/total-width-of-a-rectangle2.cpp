#include <iostream>
using namespace std;
#define MAX 100

int main() {
    int n;
    int x1, y1, x2, y2;
    int rec[2*MAX+1][2*MAX+1] = {};
    int sum = 0;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> x1 >> y1 >> x2 >> y2;

        x1 += MAX;
        x2 += MAX;
        y1 += MAX;
        y2 += MAX;
    
        for(int r=x1; r<=x2-1; r++){
            for(int c=y1; c<=y2-1; c++){
                rec[r][c] = 1;
            }
        }
    }
    
    for(int i=0; i<2*MAX+1; i++){
        for(int j=0; j<2*MAX+1; j++){
            if(rec[i][j]==1){
                sum++;
            }
        }
    }

    cout << sum;

    return 0;
}