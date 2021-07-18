#include <iostream>
#include "search.h"
using namespace std;

int main()
{
    int n, *a;
    //GenerateSortedData(a, n);
    inputarray(a, n, "input.txt");
    output(Fibonaccisearch, a, n, 50);
    //cout << runningtime(Fibonaccisearch, a, n, a[n/2]);
    return 0;
}