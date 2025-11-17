#include <iostream>
#include <climits>

using namespace std;

int n, c, g, h;
int ta[1000]={};
int tb[1000]={};

int CalWork(int temp, int idx){
    if(temp < ta[idx]){
        return c;
    } else if(temp > tb[idx]){
        return h;
    } else {
        return g;
    }

}

int main() {
    int twork = 0;
    int max_work = INT_MIN;


    cin >> n >> c >> g >> h;
    for(int i=0; i<n; i++){
        cin >> ta[i] >> tb[i];
    }

    for(int i=-1; i<=1001; i++){
        twork = 0;
        for(int j=0; j<n; j++){
            twork += CalWork(i, j);
        }

        max_work = max(max_work, twork);
    }

    cout << max_work;

    return 0;
}