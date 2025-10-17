#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];

bool Check(int a[100], int b[100], int n1, int n2){
    string sa, sb;

    for(int i=0; i<n1; i++){
        sa += to_string(a[i]);
    }

    for(int i=0; i<n2; i++){
        sb += to_string(b[i]);
    }

    for(int i=0; i<=n1-n2; i++){
        if(sa.substr(i,n2)==sb.substr(0,n2)){
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