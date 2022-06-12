
#include<bits/stdc++.h>
using namespace std;
int main()
{    int num;
   cin >> num;
    if(num%4 == 0 && num % 100!=0){
        cout << num << " is leaf year" ;
    } else {
    cout << num << " its not leaf year";
    }


    return 0;

}
