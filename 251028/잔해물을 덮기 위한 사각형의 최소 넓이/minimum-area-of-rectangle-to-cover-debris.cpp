#include <iostream>
using namespace std;

#define OFFSET 1000
#define MAX_R 2000

int main() {
    int x1[2], y1[2], x2[2], y2[2];
    int rec[MAX_R+1][MAX_R+1] = {};
    int sum = 0;
    int minx, miny, maxx, maxy;
    bool res = false;

    for(int i=0; i<2; i++){
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];

        x1[i]+=OFFSET;
        y1[i]+=OFFSET;
        x2[i]+=OFFSET;
        y2[i]+=OFFSET;

        for(int r=x1[i]; r<x2[i]; r++){
            for(int c=y1[i]; c<y2[i]; c++){
                if(i==0){
                    rec[r][c] = 1;
                } else {
                    rec[r][c] = 0;
                }

                if(rec[r][c]==1){
                    res = true;
                }
            }
        }
    }

    minx = x1[0];
    miny = y1[0];
    maxx = x2[0];
    maxy = y2[0];

    for(int i=x1[0]; i<x2[0]; i++){
        for(int j=y1[0]; j<y1[0]; j++){
            if((rec[i][j]==1)&&(i<minx)&&(j<miny)){
                minx = i;
                miny = j;
            } else if((rec[i][j]==1)&&(i>maxx)&&(j>maxy)){
                maxx = i;
                maxy = j;
            }
        }
    }

    for(int i=minx; i<maxx; i++){
        for(int j=miny; j<maxy; j++){
            sum++;
        }
    }

    cout << ((res)?sum:0);
    return 0;
}