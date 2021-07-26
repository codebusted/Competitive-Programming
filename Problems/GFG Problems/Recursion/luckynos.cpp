
#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool isLucky(int n, int &counter) {
    if(counter > n) // base condition
        return true;

    if(n % counter == 0)
        return false;

    int newPos = n - n / counter;
    counter++;

    return isLucky(newPos, counter);
}

int main() {
    int t;
    cin >> t;//testcases
    while(t--) {
        int n;
        cin>>n;//input n
        int counter = 2;
        
        //calling isLucky() function
        if(isLucky(n, counter))
            cout<<"1\n";//printing "1" if isLucky() returns true
        else
            cout<<"0\n";//printing "0" if isLucky() returns false
    }
    return 0;
}