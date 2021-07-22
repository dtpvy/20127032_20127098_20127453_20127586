typedef int (*searchingalgorithms)(int a[], int n, int x);

void inputarray(int*& a, int& n, const char* filename);
void GenerateSortedData(int*& a, int& n);
int jumpSearch(int a[], int n, int x);
int Fibonaccisearch(int a[], int n, int x);
int runningtime(searchingalgorithms S, int a[], int n, int x);
void output(searchingalgorithms S, int a[], int n, int x);