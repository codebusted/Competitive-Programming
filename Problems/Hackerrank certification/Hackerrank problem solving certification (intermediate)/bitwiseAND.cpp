/*COPIED CODE*/

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'countPairs' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

long countPairs(vector<int> arr) {
    long res = 0;
    int m = 0;
    map<int, int> hm;
    for(int ele : arr) {
        hm[ele]++;
        m = max(m, ele);
    }
    for(int i = 0; i <= m; ++i) {
        if(!hm.count(i))
        continue;
        
        for(int j = i; j <= m; ++j) {
            if(!hm.count(j))
            continue;
            
            // __builtin_popcount()- GCC function, gives the number of set bits in the number
            if(__builtin_popcountll(i & j) == 1) { // used to check if number is power of 2 (if number of set bits is 1 then no is 2 power)
                if(i==j)
                    res += ((long(hm[i]) * (hm[i] - 1)) / 2);
                else
                    res += (long(hm[i]) * hm[j]);
            }
        }
    }
    
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++) {
        string arr_item_temp;
        getline(cin, arr_item_temp);

        int arr_item = stoi(ltrim(rtrim(arr_item_temp)));

        arr[i] = arr_item;
    }

    long result = countPairs(arr);

    fout << result << "\n";

    fout.close();

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
