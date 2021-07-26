#include <bits/stdc++.h>

using namespace std;
// 43Ah*ck0rr0nk


/*
 * Complete the 'decryptPassword' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string decryptPassword(string s) {
    if(s.length() <= 1)
        return s;
    
    stack<char> x;
    while(isdigit(s.front()) && s.front() != '0') {
        x.push(s.front());
        s.erase(s.begin() + 0);
    }
    
    string res;
    int i = 0;
    while(i < s.length()) {
        
        if(isalpha(s[i])) {
            if(isupper(s[i]) && islower(s[i + 1]) && s[i + 2] == '*') {
                swap(s[i], s[i + 1]);
                res.push_back(s[i]);
                res.push_back(s[i + 1]);
                i += 2;
            }
            else {
                res.push_back(s[i]);
                i++;
            }
        }
        else if(s[i] == '0') {
            res.push_back(x.top());
            x.pop();
            i++;
        }
        else
            i++;
    }
    cout << res <<  endl;
    return res;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = decryptPassword(s);

    fout << result << "\n";

    fout.close();

    return 0;
}