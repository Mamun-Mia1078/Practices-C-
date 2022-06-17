
#include<iostream>
using namespace std;

int x = 10; // global

int main()
{
    int x =10;
:: x = 50; // when same name another variable available
cout << :: x << endl ;
}

