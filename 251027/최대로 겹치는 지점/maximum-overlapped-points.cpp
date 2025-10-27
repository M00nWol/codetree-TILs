#include <iostream>
using namespace std;

int main() {
    int n, a[100], b[100];
    int line[101] = {};
    int max = 0;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];
    }

    for(int i=0; i<n; i++){
        for(int j=a[i]; j<=b[i]; j++){
            line[j]++;
        }
    }

    for(int i=0; i<101; i++){
        if(max < line[i]){
            max = line[i];
        }
    }

    cout << max;
    return 0;
}