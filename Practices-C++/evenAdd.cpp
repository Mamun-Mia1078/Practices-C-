#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, value;
    cout << "Enter your Number : ";
   cin >> num;
   for ( int i = 2; i<=num ; i++)
    {
         value = value %2 ==0 ;
         value = value+i;
                      value = value -1;



   }
       cout<< value  ;


    }

