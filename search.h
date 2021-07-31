#include <iostream>
#include <time.h>
#include <fstream>
#include <chrono>
#define oo 1000000007
using namespace std;

typedef int (*searchingalgorithms)(int a[], int n, int x);

void input(int*& a, int& n, int& key, int*& b);
bool inputFile(int*& a, int& n, int& key, int*& b, string filename);
bool outputFile(int*& a, int& n, int& key, string filename);
void printoutput(int a[], int b[], int n, int key, int option);
void input(int*& a, int& n, int& key, int*& b);
void GenerateSortedData(int*& a, int*& b, int& n);
int jumpSearch(int a[], int n, int x);
int Fibonaccisearch(int a[], int n, int x);
double runningtime(searchingalgorithms S, int a[], int n, int x);
void output(searchingalgorithms S, int a[], int n, int x);
int BinarySearch(int* a, int l, int r, int k);
int ExponetialSearch(int* a, int n, int k);