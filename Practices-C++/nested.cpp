#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mark;
    cin >> mark;

    if(mark>32){

    if(mark >=70)
        {
            cout << mark << " your your letter grade is Golden A+" ;
        }
        else if(mark >=80)
        {
            cout << mark << " your your letter grade is A+" ;
        }
        else if(mark >=70)
        {
            cout << mark << " your your letter grade is A" ;
        }

        else if(mark >=60)
        {
            cout << mark << " your your letter grade is B" ;
        }
        else if(mark >=50)
        {
            cout << mark << " your your letter grade is C" ;
        }

    } else {
    cout << "Fail" <<endl;
    }

    return 0;

}

