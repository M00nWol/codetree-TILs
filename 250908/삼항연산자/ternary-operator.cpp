#include <iostream>
using namespace std;

int main() {
    int n, grade;

    cin >> n;

    grade = (n==100)? 0 : 10;

    if(grade == 0){
        cout << "pass";
    } else {
        cout << "failure";
    }
    return 0;
}