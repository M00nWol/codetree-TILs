#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    int a[100], b[100];
    int ib = 0;

    // input
    cin >> n1 >> n2;

    for(int i=0; i<n1; i++){
        cin >> a[i];
    }
    for(int i=0; i<n2; i++){
        cin >> b[i];
    }

    // compare
    for(int i=0; i<n1; i++){
        bool tmp = true;

        for(int j=0; j<n2; j++){
            if(i+j >= n1){
                tmp = false;
                break;
            }

            if(a[i+j] != b[j]){
                tmp = false;
                break;
            }
        }

        if(tmp){
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";
    return 0;
}