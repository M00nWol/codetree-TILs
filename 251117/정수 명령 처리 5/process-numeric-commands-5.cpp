#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    vector<int> v;
    string command;
    int c;
    
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> command;

        if(command=="push_back"){
            cin >> c;
            v.push_back(c);
        } else if(command == "get"){
            cin >> c;
            cout << v[c-1] << endl;
        } else if(command == "size"){
            cout << v.size() << endl;
        } else {
            v.pop_back();
        }
    }
    return 0;
}