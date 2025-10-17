#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];

bool Check(int a[100], int b[100], int n1, int n2){
    bool sta = true;

    for(int i=0; i<=n1-n2; i++){
        for(int j=0; j<n2; j++){
            if(a[i+j] != b[j]){
                sta = false;
                break;
            } else{
                sta = true;
            }
        }
        if(sta){
            return true;
        }
    }
    return false;
}

int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];

    for (int i = 0; i < n2; i++) cin >> b[i];

    cout << (Check(a, b, n1, n2)?"Yes":"No");

    return 0;
}