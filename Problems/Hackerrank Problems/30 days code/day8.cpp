#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    map<string, int> hm;
    string name;
    int number;
    for(int i = 0; i < n; i++) {
        cin >> name;
        cin >> number;
        hm.insert(std::pair<string, int>(name, number));
    }

    while(cin >> name) {
        std::map<string, int>::iterator it;
        it = hm.find(name);
        if(it == hm.end())
            cout << "Not found" << endl;
        else
            cout << it->first << '=' << it->second << endl;
    }

    return 0;
}