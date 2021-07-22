#include <iostream>
#include <cstdlib>
#include "search.h"
using namespace std;


int main()
{
    srand(time(NULL));
    int n, *a;
    GenerateSortedData(a, n);
    int x = rand() % n + 1;
    cout << runningtime(Fibonaccisearch, a, n, a[n]) << endl;
    output(Fibonaccisearch, a, n, a[n]);
    return 0;
}