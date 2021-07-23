#include<iostream>

using namespace std;

int BinarySearch(int* a, int l, int r, int k) {
    while(l <= r) {
        int m = (l + r) / 2;
        if(a[m] == x)
            return m;
        if(x > a[m])
            l = m + 1;
        else
            r = m - 1;
    }
    //if we can't find the elements, return -1
    return -1;
}

int ExponetialSearch(int* a , int n, int k) {       //array must be sorted in ascending order
    if(a[0] == k)
        return 0;
    int i = 1;

    while(i < n && a[i] < k)
        i *= 2;
    // l = i / 2 because at that index, the elements: a[i] < k
    //call min(i, n - 1) to prevent out of bound
    return BinarySearch(a, i / 2, min(i, n - 1), k);
}
