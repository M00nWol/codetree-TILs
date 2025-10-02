#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    int a[100], b[100];
    int ib = 0;
    bool tmp = false;
    string res = "Yes";

    // input
    cin >> n1 >> n2;

    for(int i=0; i<n1; i++){
        cin >> a[i];
    }
    for(int i=0; i<n2; i++){
        cin >> b[i];
    }

    // compare
    for(int j=0; j<n1; j++){
        if(b[ib]==a[j]){
            ib++;
            tmp = true;
            if(ib>=n2){
                break;
            } else{
                continue;
            }
        } else{
            if(j == n1-1){
                res = "No";
                break;
            }
            if(tmp){
                tmp = false;
            }
        }
    }

    cout << res;
    return 0;
}