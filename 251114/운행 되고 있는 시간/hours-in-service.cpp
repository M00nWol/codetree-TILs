#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int n;
    int time_max = 0;
    int tmp;
    int start, end;
    int worker[100][2] = {};
    int time[1001] = {};

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> worker[i][0] >> worker[i][1];
    }

    // 총시간 계산
    for(int i=0; i<n; i++){
        tmp = 0;
        for(int j=1; j<=1000; j++){
            time[j] = 0;
        }

        for(int j=0; j<n; j++){
            if(i==j) continue;
            start = worker[j][0];
            end = worker[j][1];

            for(int k=start; k<end; k++){
                time[k]++;
            }
        }

        for(int j=1; j<=1000; j++){
            if(time[j]!=0) {
               tmp++;
            }
        }
        time_max = max(time_max, tmp);
    }

    cout << time_max;
    return 0;
}