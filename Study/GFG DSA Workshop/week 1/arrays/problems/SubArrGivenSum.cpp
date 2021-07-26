
#include <iostream>
#include <vector>
#include <list>

#ifndef ll
#define ll long long
#endif

std::list<int> subarr(int n, ll s, std::vector<int> arr) {
    ll currsum = arr[0];
    int i = 0, j = 1;
    std::list<int> li;

    while(j <= n) {

        if(currsum < s) {
            while(currsum < s)
                currsum += arr[j++];
        }

        else if(currsum == s) {
            li.push_back(i + 1);
            li.push_back(j);
            return li;
        }

        else {
            while(currsum > s)
                currsum -= arr[i++];
        }
    }
    
    li.push_back(-1);
    return li;

}

int main(int argc, char const *argv[])
{
    int t;
    std::cin >> t;

    int n;
    ll s;
    std::vector<int> arr;
    std::list<int> res;

    while(t--) {
        std::cin >> n >> s;
        arr.clear();
        res.clear();
        int temp;
        for (int i = 0; i < n; i ++) {
            std::cin >> temp;
            arr.push_back(temp);
        }

        res = subarr(n, s, arr);
        for(std::list<int>::iterator i = res.begin(); i !=  res.end(); i++)
            std::cout << *i << ' ';
        std::cout << std::endl;

    }
    return 0;
}