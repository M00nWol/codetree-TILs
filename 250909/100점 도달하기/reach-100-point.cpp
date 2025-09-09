#include <iostream>
using namespace std;

int main() {
    int n;
    char g;

    cin >> n;

    while(n<=100){
        if(n>=90){
            g = 'A';
        } else if(n>=80){
            g = 'B';
        } else if(n>=70){
            g = 'C';
        } else if(n>=60){
            g = 'D';
        } else {
            g = 'F';
        }
        cout << g << " ";
        n++;
    }
    return 0;
}