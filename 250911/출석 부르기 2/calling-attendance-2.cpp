#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    while(n>=1 && n<=4){
        if(n==1){
            cout << "John"<< endl;
        } else if(n==2){
            cout << "Tom" << endl;
        } else if(n==3){
            cout << "Paul" << endl;
        } else {
            cout << "Sam" << endl;
        }

        cin >> n;
    }

    cout << "Vacancy";
    return 0;
}