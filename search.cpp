#include <iostream>
#include "search.h"
#include <time.h>
#include <fstream>
#define oo 1000000007
using namespace std;

void inputarray(int*& a, int& n, const char* filename)
{
    fstream fi(filename, ios::in);
    fi >> n;
    a = new int[n+1];
    for (int i = 1; i <= n; i++)
    {
        fi >> a[i];
    }
}

void GenerateSortedData(int*& a, int& n)
{
    cin >> n;
    a = new int[n+1];
	a[0] = 0;
    for (int i = 1; i <= n; i++)
	{
        int x = rand() % n;
        a[i] = (x >= a[i-1]) ? x : a[i-1] + rand() % 100;
	}
}

int Fibonaccisearch(int a[], int n, int key)
{
  
    int fib1 = 0; // 0'th fibonacci = 0
    int fib2 = 1; //1'st fibonacci  = 1
    int fib = fib1 + fib2; //2'nd fibonacci  = 1
    //find i'th fibonacci is smallest and greater than or equal to n to divide the array into 2 parts i-1'th fibonacci elements and i-2'th fibonacci elements
    while (fib < n)
    {
        fib1 = fib2; //i-2'th fibonacci
        fib2 = fib; //i-1'th fibonacci
        fib = fib1 + fib2; //i'th fibonacci
    }
    int flag = 1; //mark the left position
    while (fib > 1) {
        int i = min(flag + fib1, n);
        if (a[i] == key) return i; //found the key in the array
        if (a[i] < key) {
            //the key belongs in the range from fib1 to fib2 so the subarray is considered to have fib2 elements
            fib = fib2; //i'th fibonacci
            fib2 = fib1; //i-1'th fibonacci
            fib1 = fib - fib2; //i-2'th fibonacci
            flag = i; //the left position is now i
        }
        else {
            //the key belongs in the range from flag to fib1 so the subarray is considered to have fib1 elements 
            fib = fib1; //i'th fibonacci
            fib2 = fib2 - fib1; //i-1'th fibonacci
            fib1 = fib - fib2; //i-2'th fibonacci
        }
    }
    if (fib2 && a[flag] == key)
        return flag;
    return -1;
}

int runningtime(searchingalgorithms S, int a[], int n, int x)
{
    int start_t = clock();
    S(a, n, x);
    int end_t = clock();
    return end_t - start_t;
}

void output(searchingalgorithms S, int a[], int n, int x)
{
    int i = S(a, n, x);
    if (i > 0)
    {
        cout << "Found " << x << " at index: " << i << endl;
    }
    else
    {
        cout << "Don't find any " << x << " in the array!" << endl;
    }
}