#include <iostream>

using namespace std;

int n;

void print(int n){
    int cnt = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(cnt>9){
                cnt = 1;
            }
            cout << cnt << " ";
            cnt++;
        }
        cout << endl;
    }
}
int main() {
    cin >> n;

    print(n);

    return 0;
}