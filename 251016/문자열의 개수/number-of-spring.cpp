#include <iostream>
using namespace std;

int main() {
    int cnt = 0;
    string arr[200];
    string s;
    
    cin >> s;

    while(s!="0"){
        cnt++;
        if(cnt%2!=0){
            arr[cnt-1] = s;
        }

        cin >> s;
    }

    cout << cnt << endl;
    for(int i=0; i<cnt; i+=2){
        cout << arr[i] << endl;
    }
    return 0;
}