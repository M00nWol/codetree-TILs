#include <iostream>
#include <algorithm>
using namespace std;

class Timeline{
    public:
        int second;
        int p1;
        int p2;
        Timeline(){};
        Timeline(int second, int p1, int p2){
            this->second = second;
            this->p1 = p1;
            this->p2 = p2;
        }

};

bool Cmp(Timeline &a, Timeline &b){
    return a.second < b.second;
}

int main() {
    int n, k, p, T;
    int t, x, y;
    Timeline timeline[250];
    int arr[101] = {};
    int re[101] = {};


    cin >> n >> k >> p >> T;
    arr[p] = 1;
    re[p] = k;

    for(int i=0; i<T; i++){
        cin >> t >> x >> y;
        timeline[i] = Timeline(t, x, y);
    }

    // 1. 조건 시간순으로 정리
    sort(timeline, timeline+T, Cmp);

    for(int i=0; i<T; i++){
        if(arr[timeline[i].p1]==1 && re[timeline[i].p1]>0){
            re[timeline[i].p1]--;

            if(arr[timeline[i].p2]==0){
                arr[timeline[i].p2]=1;
                re[timeline[i].p2]=k;
                continue;
            }

            re[timeline[i].p2]--;
        } else if(arr[timeline[i].p2]==1 && re[timeline[i].p2]>0){
            re[timeline[i].p2]--;

            if(arr[timeline[i].p1]==0){
                arr[timeline[i].p1]=1;
                re[timeline[i].p1]=k;
                continue;
            }

            re[timeline[i].p1]--;
        }
    }



    for(int i=1; i<=n; i++){
        cout << arr[i];
    }


    return 0;
}