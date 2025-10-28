#include <iostream>
using namespace std;

int main() {
    int n, m, k, tmp;    

    cin >> n >> m >> k;

    int student[n+1] = {};

    for(int i=0; i<m; i++){
        cin >> tmp;
        student[tmp]++;

        if(student[tmp] >= k){
            cout << tmp;
            return 0;
        }
    }

    cout << -1;
    return 0;
}