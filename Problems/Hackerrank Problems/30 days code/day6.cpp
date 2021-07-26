#include <iostream>
#include <string>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    std::cin >> t;
    while(t--) {
        string s;
        string s_odd, s_even;

        // cin >> s; // cin wont read after whitespaces
        getline(cin, s);

        // Keep reading a new line while there is
        // a blank line
        while(s.length() == 0)
            getline(cin, s);

        for(int i = 0; i < s.size(); i++) {
            if(i % 2)
                s_odd.push_back(s[i]);
            else
                s_even.push_back(s[i]);
        }
        std::cout << s_even << ' ' << s_odd << endl;
    }   
    return 0;
}
