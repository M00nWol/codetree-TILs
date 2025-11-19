#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> de;
    int n;
    string command;
    int c;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> command;
        if(command=="push_front"){
            cin >> c;
            de.push_front(c);
        } else if(command=="push_back"){
            cin >> c;
            de.push_back(c);
        } else if(command=="pop_front"){
            cout << de.front() << endl;
            de.pop_front();
        } else if(command=="pop_back"){
            cout << de.back() << endl;
            de.pop_back();
        } else if(command=="size"){
            cout << de.size() << endl;
        } else if(command=="empty"){
            cout << (de.empty()?1:0) << endl;
        } else if(command=="front"){
            cout << de.front() << endl;
        } else if(command=="back"){
            cout << de.back() << endl;
        }

    }
    return 0;
}