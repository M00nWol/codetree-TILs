#include <iostream>
using namespace std;

int main() {
    int score[100];
    int cnt[10] = {};

    int i=0, k; 

    while(true){
        cin >> score[i];
        if(score[i]!=0){
            cnt[score[i]/10 - 1]++;
        } else{
            k = i;
            break;
        }
        i++;
    }
    
    for(int i=9; i>=0; i--){
        cout << (i+1)*10 << " - " << cnt[i] << endl;
    }
    return 0;
}