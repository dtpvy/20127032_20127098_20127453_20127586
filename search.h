typedef int (*searchingalgorithms)(int a[], int n, int x);

void input(int*& a, int& n, int& key, int*& b);
void GenerateSortedData(int*& a, int*& b, int& n);
int jumpSearch(int a[], int n, int x);
int Fibonaccisearch(int a[], int n, int x);
double runningtime(searchingalgorithms S, int a[], int n, int x);
void output(searchingalgorithms S, int a[], int n, int x);
int BinarySearch(int* a, int l, int r, int k);
int ExponetialSearch(int* a, int n, int k);