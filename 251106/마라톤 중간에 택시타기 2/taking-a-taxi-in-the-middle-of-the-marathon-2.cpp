#include <iostream>
#include <cstdlib>
#include <climits>

using namespace std;

int Dis(int x1, int y1, int x2, int y2){
    return abs(x1-x2)+abs(y1-y2);
}

int main() {
    int n;
    int res = INT_MAX;
    int dis = 0;
    int change;
    int x[100]={}, y[100]={};

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> x[i] >> y[i];
    }

    for(int i=1; i<n; i++){
        dis += Dis(x[i-1], y[i-1], x[i], y[i]);
    }

    for(int i=1; i<=(n-2); i++){
        change = Dis(x[i-1], y[i-1], x[i+1], y[i+1])-Dis(x[i-1], y[i-1], x[i], y[i])-Dis(x[i+1], y[i+1], x[i], y[i]);
        res = min(res, dis+change);
    }

    cout << res;

    return 0;
}