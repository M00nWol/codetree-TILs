#include <iostream>
#include <algorithm>

using namespace std;

int n, m;

bool compare(int* b, int* com){
    for(int i=0; i<m; i++){
        if(b[i]!=com[i]){
            return false;
        }
    }

    return true;
}

int main() {
    int cnt = 0;
    int a[100], b[100];
    int com[100];

    cin >> n >> m;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int j=0; j<m; j++){
        cin >> b[j];
    }

    sort(b, b+m);

    for(int i=0; i<=n-m; i++){
        for(int j=0; j<m; j++){
            com[j] = a[i+j];
        }

        sort(com, com+m);

        if(compare(b, com)){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}