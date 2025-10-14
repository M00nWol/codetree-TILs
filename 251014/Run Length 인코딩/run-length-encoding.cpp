#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;
    int cnt = 1;
    int len = A.length();
    char c[1000];
    string s[1000];
    int idx = 0;
    int sum = 0;

    for(int i=1; i<len; i++){
        if(A[i] == A[i-1]){
            cnt++;
        } else{
            c[idx] = A[i-1];
            s[idx] = to_string(cnt);
            sum += (1+s[idx].length());
            idx++;
            cnt = 1;
        }

        if(i==len-1){
            c[idx] = A[i];
            s[idx] = to_string(cnt);
            sum += (1+s[idx].length());
            idx++;
        }
    }

    cout << sum << endl;
    for(int i=0; i<idx; i++){
        cout << c[i] << s[i];
    }
    return 0;
}
