#include <iostream>
#include <cstdlib>
#include <climits>

using namespace std;

int Dis(int x1, int x2, int y1, int y2){
    return (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
}

int main() {
    int x[100] = {};
    int y[100] = {};
    int res = INT_MAX;
    int n;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x[i] >> y[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            res = min(res, Dis(x[i], x[j], y[i], y[j]));
        }
    }

    cout << res;
    return 0;
}