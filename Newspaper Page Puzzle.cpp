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
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void print(int pagein, int arr[]) {
    cout << "The Page numbers on the sheet containing page " << pagein << " are ";
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << ", ";
    }
    return;
}
int main() {
    int input_page;
    cout << "There are 16 Pages folded in half to make a Newspaper!" << endl;
    cout << "Hence 2 sides per page gives us a net of 64 pages per newspaper" << endl;
    cout << "Also, this implies there are 4 sides per sheet!" << endl;
    cout << "Enter Page Number: ";
    cin >> input_page;
    if ((input_page > 64) || (input_page <= 0)) {
        cout << "Invalid Page Number! Please Enter again: ";
        cin >> input_page;
    }
    if ((input_page % 2 == 0) && (input_page <=32)) {
        int pages[] = {input_page - 1, input_page, 65 - input_page, 66 - input_page};
        print(input_page, pages);
    } else if ((input_page % 2 != 0) && (input_page <=32)) {
        int pages[] = {input_page, input_page + 1, 64 - input_page, 65 - input_page};
        print(input_page, pages);
    } else if ((input_page % 2 == 0) && (input_page > 32)) {
        int pages[] = {65 - input_page, 66 - input_page, input_page - 1, input_page};
        print(input_page, pages);
    } else if ((input_page % 2 != 0) && (input_page > 32)) {
        int pages[] = {64 - input_page, 65 - input_page, input_page, input_page + 1};
        print(input_page, pages);
    }
    
}
