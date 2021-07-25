#include <iostream>
#include <cstdlib>
#include "search.h"
using namespace std;


int main()
{
    srand(time(NULL));
    int n, *a, c, *b, key;
    cout << "1. Input to the screen array size, number to search, a sorted array of positive integers. The output is the running time of the 3 algorithms and the position of the number to find\n";
    cout << "2. See data runtime results of 3 algorithms with sorted random numbers on dataset 10000, 100000 and 1000000 elements and the key is an element in the array \n";
    cout << "Note: jump search, exponetial search get data with array starting from 0 to n-1 and fibonacci search gets data with array starting from 1 to n\n";
    cout << "Enter your choice: ";
    cin >> c;
    if (c == 1)
    {
        //array a begin 0 to n-1, array b begin 1 to n, the elements of the two arrays are the same
        input(a, n, key, b);
        cout << "jumpsearch: " << endl;
        cout << "Time: " << runningtime(jumpSearch, a, n, key) << endl;
        output(jumpSearch, a, n, key);
        cout << "exponetialsearch: " << endl;
        cout << "Time: " << runningtime(ExponetialSearch, a, n, key) << endl;
        output(ExponetialSearch, a, n, key);
        cout << "fibonaccisearch: " << endl;
        cout << "Time: " << runningtime(Fibonaccisearch, b, n, key) << endl;
        output(Fibonaccisearch, b, n, key);
    }
    if (c == 2)
    {
        int Data[] = { 10000, 100000, 1000000 };
        for (int i = 0; i < 3; i++)
        {
            n = Data[i];
            cout << "n: " << n << endl;
            //array a begin 0 to n-1, array b begin 1 to n, the elements of the two arrays are the same
            //random the elements of the two array
            GenerateSortedData(a, b, n);
            int x = rand() % n;
            cout << "jumpsearch: " << endl;
            cout << "Time: " << runningtime(jumpSearch, a, n, a[x]) << endl;
            output(jumpSearch, a, n, a[x]);
            cout << "exponetialsearch: " << endl;
            cout << "Time: " << runningtime(ExponetialSearch, a, n, a[x]) << endl;
            output(ExponetialSearch, a, n, a[x]);
            cout << "fibonaccisearch: " << endl;
            cout << "Time: " << runningtime(Fibonaccisearch, b, n, b[x+1]) << endl;
            output(Fibonaccisearch, b, n, b[x+1]);
        }
    }
    
    return 0;
}