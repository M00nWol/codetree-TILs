#include <iostream>
#include <string>

using namespace std;

string A;

bool Checkdup(string A, int n){
    if(n==1) return false;

    for(int i=1; i<n; i++){
        if(A[i] != A[0]){
            return true;
        }
    }    
    return false;
}

int main() {
    cin >> A;

    if(Checkdup(A, A.length())){
        cout << "Yes";
    } else {
        cout << "No";
    };

    return 0;
}