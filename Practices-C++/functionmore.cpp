
#include<iostream>
using namespace std;


void addition(int a, int b)
 {
     int sum = a+b;
     cout << "Addition =" << sum << endl;

 }
 void subtraction (int a, int b)
 {
     int sum = a-b;
     cout<< "substraction = " << sum << endl;

 }
 void multiplication(int a, int b)
 {
     int sum = a*b;
     cout<<"Multiplication = " << sum << endl;

 }
 int main()

 {
     addition(10,20);
     subtraction(20,30);
          multiplication(22,32);

     return 0 ;
 }

