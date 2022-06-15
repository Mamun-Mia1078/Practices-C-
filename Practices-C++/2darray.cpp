#include<iostream>
using namespace std;
int main()
{
    int A [2] [3];
    A[0] [0] = 10;
    A[0] [1] = 70;
    A[0] [2] = 90;


    A[1] [0] = 60;
    A[1] [1] = 70;
    A[1] [2] = 60;

  for (int row=0 ; row<2;  row++){
    for(int col=0; col<3; col++){
        cout << A [row][col] << " ";
    }
    cout << endl;
  }
return 0;
}
