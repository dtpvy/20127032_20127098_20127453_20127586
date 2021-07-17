#include <iostream>
#include "search.h"
using namespace std;

int main()
{
    int n, *a;
    GenerateSortedData(a, n);
    output(Fibonaccisearch, a, n, a[5]);
    cout << runningtime(Fibonaccisearch, a, n, a[n/2]);
    return 0;
}