#include <iostream>
using namespace std;

int main() {
    int n, q, tmp, p1, p2;
    int query[3];
    
    cin >> n >> q;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<q; i++){
        cin >> tmp;
        cin >> p1;
        if(tmp == 1){
            cout << arr[p1-1];
        } else if(tmp == 2){
            for(int j=0; j<n; j++){
                if(arr[j]==p1){
                    cout << j+1;
                    break;
                } else if(j==n-1){
                    cout << 0;
                }
                
            }
        } else if(tmp ==3){
            cin >> p2;
            for(int j=p1-1; j<p2; j++){
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}