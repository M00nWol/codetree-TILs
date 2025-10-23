#include <iostream>
#include <algorithm>


using namespace std;

int n;
int A[100];
int B[100];

int main() {
    string res = "Yes";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    sort(A, A+n);
    sort(B, B+n);

    for(int i=0; i<n; i++){
        if(A[i] != B[i]){
            res = "No";
            break;
        }
    }

    cout << res;

    return 0;
}