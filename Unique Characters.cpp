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
    char s[1000] = "";
    cout << endl << "Enter String: ";
    cin.getline(s,1000);
    map <char, int> counter;
    for (char x : s) {
        counter[x]++;
        if ((counter[x] > 1) && ((x>='a' && x <= 'z') || (x>='A' && x <= 'Z'))) {
            cout << "There is a duplicate character present! " << x << " of frequency " << counter[x] << endl;
            break;
        } else if (x == s[-1]) {
            cout << "The String has no duplicates" << endl;
            break;
        }
    }
    
    
    
}
