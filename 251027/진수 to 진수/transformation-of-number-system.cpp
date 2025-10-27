#include <iostream>
using namespace std;

int ato10(int n, int a){
    int num = 0;
    string s;

    s = to_string(n);

    for(int i=0; i<s.length(); i++){
        num = a*num + (s[i]-'0');
    }


    return num;
}

void tentob(int res, int b){
    int ans[20] = {};
    int cnt;

    while(true){
        if(res < b){
            ans[cnt++] = res;
            break;
        }

        ans[cnt++] = res%b;
        res /= b;
    }

    for(int i=cnt-1; i>=0; i--){
        cout << ans[i];
    }
}

int main() {
    int a, b, n;
    int res;

    cin >> a >> b >> n;

    res = ato10(n, a);

    tentob(res, b);
    return 0;
}