#include <iostream>
using namespace std;

int main() {
    string arr[10];
    char c;
    int len;
    int cnt = 0;

    for(int i=0; i<10; i++){
        cin >> arr[i];
    }

    cin >> c;

    for(int i=0; i<10; i++){
        len = arr[i].length();
        if(arr[i][len-1] == c){
            cout << arr[i] << endl;
            cnt++;
        }
    }

    if(cnt==0){
        cout << "None";
    }
    return 0;
}