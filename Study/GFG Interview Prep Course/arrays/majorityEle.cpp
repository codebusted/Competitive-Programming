// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdbool.h>
#include <unordered_map>
#include <cmath>
#include <iostream>

 // } Driver Code Ends
//User function Template for C

// Function to find majority element in the array
// a: input array
// size: size of input array
/*int majorityElement(int a[], int size)
{
        
    // your code here
    std::unordered_map<int, int> hm;
    for(int i = 0; i < size; i++) {
        hm[a[i]]++;
        if(hm[a[i]] >= ceil((float)size/2))
            return a[i];
    }
    return -1;
}*/

int findCandidate(int a[], int size) {
    int maj_ind = 0, count = 1;
    for(int i = 1; i < size; i++) {
        if(a[maj_ind] == a[i])
            count++;
        else
            count--;
        if(count == 0) {
            maj_ind = i;
            count = 1;
        }
    }
    return a[maj_ind];
}

int isMajority(int a[], int size, int cand) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(a[i] == cand)
            count++;
    }
    if(count > size/2)
        return true;
    return false;
}

int majorityElement(int a[], int size) {
    int cand = findCandidate(a, size);
    if(isMajority(a, size, cand))
        return cand;
    return -1;
}

// { Driver Code Starts.

int main(){

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        
        for(int i = 0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        printf("%d\n", majorityElement(arr, n));
    }

    return 0;
}
  // } Driver Code Ends