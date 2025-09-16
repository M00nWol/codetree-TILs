#include <iostream>
using namespace std;

int main() {
    
    int arr[100];
    int cnt[9] = {};
    int i = 0;
    int k, tmp;

    while(true){
        cin >> arr[i];
        if(arr[i]==0){
            k = i;
            break;
        }
        i++;
    }

    for(int i=0; i<=k; i++){
        tmp = (arr[i]%100)/10;
        if(tmp!=0){
            cnt[tmp+1]++;
        }
    }

    for(int j=0; j<10; j++){
        cout << (j+1) << " - " << cnt[j] << endl;

        cout << "J : " << j << endl;
    }

    return 0;
}