/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <set>
#include <array>
using namespace std;

int main() {
    int n;
    pair <int, int> pair;
    cout << "Enter Number of Elements in the Array: ";
    cin >> n;
    int arr[100];
    cout << endl << "Enter Array Elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum;
    cout << "Enter Sum of Number to be checked for: ";
    cin >> sum;
    for (int i = 0; i < n; i++) {
        int x = arr[i];
        int check_val = sum - x;
        bool check = binary_search(arr, arr + n , check_val);
        if (check) {
            cout << x << " , " << check_val << endl;
            cout << "Pair Found!";
            break;
        } else if (i == n) {
            cout << "Oops! No such Pair Found!";
        }
    } 
    
}
