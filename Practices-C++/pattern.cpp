#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row, col, value;
    cout << "Enter your Number : ";
   cin >> value ;
   for ( int row = 1; row<=value ; row++){
    for (col = 1 ; col<=row; col++){

        cout << " " << col;
    }
    cout << endl;
   }


    }
