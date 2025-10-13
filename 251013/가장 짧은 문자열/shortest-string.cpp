#include <iostream>
using namespace std;

int main() {
    string s1, s2, s3;


    cin >> s1 >> s2 >> s3;

    int l1 = s1.length();
    int l2 = s2.length();
    int l3 = s3.length();

    int min = l1, max = l1;

    if(l1>l2){
        if(l1>l3){
            max = l1;
        } else {
            max = l3;
        }
    } else{
        if(l2>l3){
            max = l2;
        } else{
            max = l3;
        }
    }

    if(l1<l2){
        if(l1<l3){
            min = l1;
        } else {
            min = l3;
        }
    } else{
        if(l2<l3){
            min = l2;
        } else{
            min = l3;
        }
    }

    cout << max-min;
    return 0;
}