#include <iostream>
#include <cstdlib>
#include "search.h"
using namespace std;


int main()
{
    srand(time(NULL));
    int n, *a;
    GenerateSortedData(a, n);
    int x = a[n-2];
    cout << runningtime(Fibonaccisearch, a, n, x) << endl;
    output(Fibonaccisearch, a, n, x);
    return 0;
}