#include <iostream>
#include <string>

using namespace std;

string A;

string check(string &a, int n){
    string s = a;
    for(int i=0; i<n; i++){
        a[i] = s[n-i-1];
    }

    if(s==a){
        return "Yes";
    }

    return "No";
} 

int main() {
    cin >> A;

    cout << check(A, A.length());

    return 0;
}