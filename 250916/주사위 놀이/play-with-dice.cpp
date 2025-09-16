#include <iostream>
using namespace std;

int main() {
    int cnt[6] ={};

    int res[10];

    for(int i=0; i<10; i++){
        cin >> res[i];
        cnt[res[i]-1]++;
    }

    for(int i=0; i<6; i++){
        cout << i+1 << " - " << cnt[i] << endl;
    }
    return 0;
}