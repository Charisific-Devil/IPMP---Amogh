/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>
#include <iostream>
#include <algorithm>
#include <set>
#include <array>
#include <map>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, counter;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[1000];
    cout << "Enter Elements of Array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        counter = count(arr, arr + n, arr[i]);
        if (counter%2 != 0) {
            cout << "Element with Odd number of occurences found! It is " << arr[i] << " with frequency " << counter << endl;
            break;
        }
    }
    
    
    
}
