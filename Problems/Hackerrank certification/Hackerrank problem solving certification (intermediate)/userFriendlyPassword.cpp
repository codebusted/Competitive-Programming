#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


/*
 * Complete the 'authEvents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts 2D_STRING_ARRAY events as parameter.
 */
 
int setPassword(string s) {
    long res = 0;
    int len = s.length();
    for(int i = 0; i < len; ++i) {
        res += (int)s[i] * (long)round(pow(131, (len - (i + 1))));
    }
    return (res % (long)(pow(10, 9) + 7));
}

vector<int> authEvents() //vector<vector<string>> events) 
{
    vector<int> v;
    cout << setPassword("cAr1") << endl;
    return v;
    
}

int main()
{
    /*ofstream fout(getenv("OUTPUT_PATH"));

    string events_rows_temp;
    getline(cin, events_rows_temp);

    int events_rows = stoi(ltrim(rtrim(events_rows_temp)));

    string events_columns_temp;
    getline(cin, events_columns_temp);

    int events_columns = stoi(ltrim(rtrim(events_columns_temp)));

    vector<vector<string>> events(events_rows);

    for (int i = 0; i < events_rows; i++) {
        events[i].resize(events_columns);

        string events_row_temp_temp;
        getline(cin, events_row_temp_temp);

        vector<string> events_row_temp = split(rtrim(events_row_temp_temp));

        for (int j = 0; j < events_columns; j++) {
            string events_row_item = events_row_temp[j];

            events[i][j] = events_row_item;
        }
    }

    vector<int> result = authEvents(events);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();*/

    vector<int> v = authEvents();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}