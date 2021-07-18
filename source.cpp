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
    cout << x << endl;
    cout << runningtime(Fibonaccisearch, a, n, a[x]) << endl;
    output(Fibonaccisearch, a, n, a[x]);
    return 0;
}