#include <iostream>
#include <climits>

using namespace std;

int main() {
    int x[101] = {};
    int y[101] = {};
    int minx=INT_MAX;
    int maxx=INT_MIN;
    int miny=INT_MAX;
    int maxy=INT_MIN;
    int min_area=INT_MAX;
    int n;

    cin >> n;   
    for(int i=0; i<n; i++){
        cin >> x[i] >> y[i];
    }

    for(int i=0; i<n; i++){
        minx=INT_MAX;
        maxx=INT_MIN;
        miny=INT_MAX;
        maxy=INT_MIN;
        for(int j=0; j<n; j++){
            if(i==j) continue;
            minx = min(minx, x[j]);
            maxx = max(maxx, x[j]);
            miny = min(miny, y[j]);
            maxy = max(maxy, y[j]);
        }
        //cout << minx << " " << maxx << " " << miny << " " << maxy<< endl;
        min_area = min(min_area, (maxx-minx)*(maxy-miny));
    }

    cout << min_area;
    return 0;
}