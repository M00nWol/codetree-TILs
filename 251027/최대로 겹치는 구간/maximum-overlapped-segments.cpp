#include <iostream>
using namespace std;

int main() {
    int n; 
    int a[100], b[100];
    int line[201] = {};
    int max = 0;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];
    }

    for(int i=0; i<n; i++){
        for(int j=a[i]+100; j<b[i]+100; j++){
            line[j]++;
        }
    }

    for(int i=0; i<201; i++){
        if(max < line[i]){
            max = line[i];
        }
    }

    cout << max;
    return 0;
}