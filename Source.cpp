#include <iostream>
#include <cstdlib>
#include "search.h"
using namespace std;



int main()
{
    srand(time(NULL));
    int n, * a, c, * b, key, c1;
    string filename;
    cout << "Compare running time of 3 algorithms: " << endl;
    cout << "------------------------------------------------------" << endl;
    cout << "1. User Input data from keyboard" << endl;
    cout << "2. Automatically generate dataset of size 10000, 100000 and 1000000 and find a random key in the array" << endl;
    cout << "3. Read Input from a file" << endl;
    cout << "----------------------------------------------------------------------------------------------" << endl;
    //cout << "Note: " << endl;
    //cout << "   jump search, exponetial search get data with array starting from 0 to n - 1" << endl;
    //cout << "   fibonacci search gets data with array starting from 1 to n" << endl;
    cout << endl;
    cout << "Enter your choice: ";
    cin >> c;
    if (c == 1)
    {
        //array a begin 0 to n-1, array b begin 1 to n, the elements of the two arrays are the same
        cout << "input array in ascending order: " << endl;
        input(a, n, key, b);
        cout << "select the output algorithms: " << endl;
        cout << "1. Jump Search\n";
        cout << "2. Exponetial Search\n";
        cout << "3. Fibonacci search\n";
        cout << "4. All Algorithms\n";
        cout << "Enter your choice: ";
        cin >> c1;
        printoutput(a, b, n, key, c1);
    }
    if (c == 2)
    {      
        bool check = true;
        cout << "do you want to save generated data to file ?" << endl;
        cout << "1. Yes" << endl;
        cout << "0. No" << endl;
        cout << "Your choice: ";
        int c2; 
        cin >> c2;
        cout << endl;
        cout << "select the output algorithms: " << endl;
        cout << "1. Jump Search\n";
        cout << "2. Exponetial Search\n";
        cout << "3. Fibonacci search\n";
        cout << "4. All Algorithms\n";
        cout << "Enter your choice: ";
        cin >> c1;
        cout << endl;
        //
        int Data[] = { 10000, 100000, 1000000 };
        string filename[] = { "output1.txt", "output2.txt", "output3.txt" };
        for (int i = 0; i < 3; i++)
        {
            n = Data[i];
            cout << "Data size: " << n << endl;
            cout << "-------------------" << endl;
            //array a begin 0 to n-1, array b begin 1 to n, the elements of the two arrays are the same
            //random the elements of the two array
            GenerateSortedData(a, b, n);
            int x = rand() % n;     //get a random key to find
            if (c2) 
                check = outputFile(a, n, a[x], filename[i]);
            //
            printoutput(a, b, n, a[x], c1);
            
        }
        if (check) cout << "Data successfully saved at output1.txt, output2.txt and output3.txt" << endl;
    }
    if (c == 3) {
        cout << "file format: " << endl;
        cout << "1st line: n, k " << endl;
        cout << "2nd line: n integer separated by a space (in ascending order)" << endl;
        cout << "-----------------------------------------------------" << endl;
        cout << "file name (path): ";
        cin >> filename;
        if (inputFile(a, n, key, b, filename)) {
            cout << "select the output algorithms: " << endl;
            cout << "1. Jump Search\n";
            cout << "2. Exponetial Search\n";
            cout << "3. Fibonacci search\n";
            cout << "4. All Algorithms\n";
            cout << "Enter your choice: ";
            cin >> c1;
            printoutput(a, b, n, key, c1);
        }
    }
    return 0;
}