#include <iostream>
using namespace std;

#define OFFSET 1000
#define MAX_R 2000

int main() {
    int x1, y1, x2,  y2;
    int rec[MAX_R+1][MAX_R+1] = {};
    int sum = 0;

    for(int i=0; i<2; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        x1+=OFFSET;
        y1+=OFFSET;
        x2+=OFFSET;
        y2+=OFFSET;

        for(int r=x1; r<=x2-1; r++){
            for(int c=y1; c<=y2-1; c++){
                rec[r][c] = 1;
            }
        }
    }

    cin >> x1 >> y1 >> x2 >> y2;
    x1+=OFFSET;
    y1+=OFFSET;
    x2+=OFFSET;
    y2+=OFFSET;

    for(int r=x1; r<=x2-1; r++){
        for(int c=y1; c<=y2-1; c++){
            rec[r][c] = 0;
        }
    }

    for(int i=0; i<MAX_R+1; i++){
        for(int j=0; j<MAX_R+1; j++){
            if(rec[i][j]==1){
                sum++;
            }
        }
    }

    cout << sum;

    return 0;
}