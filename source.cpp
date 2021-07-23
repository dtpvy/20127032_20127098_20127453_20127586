#include <iostream>
#include <cstdlib>
#include "search.h"
using namespace std;


int main()
{
    srand(time(NULL));
    int n, *a;
    GenerateSortedData(a, n);
    int x = rand() % a[n/3] + rand() % a[n];
    cout << runningtime(Fibonaccisearch, a, n, x) << endl;
    output(jumpSearch, a, n, a[n-100]);
    return 0;
}