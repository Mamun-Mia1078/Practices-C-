#include<iostream>
using namespace std;
int main(){
int num, sum= 0;
cout << "Enter Number of Students: ";
cin >> num;
int students[num];
for(int i = 0 ; i<num; i++)
{
cout << "Marks for student : " << i+1 << " = ";
    cin >> students[i];
    sum = sum + students[i];
}

cout << "Total Marks : " <<sum << endl ;
float avg = (float) sum/num;
cout << "Total Aveg : " <<avg <<endl;

int max = students[0];
int min = students[0];

for (int i=1; i<num; i++){
    if (max < students[i])
    {

        max = students[i];
    }
     if (min > students[i])
    {

        min = students[i];
    }
}


    cout << "heighest mark is : " << max <<endl;

    cout << "lowest  mark is : " << min <<endl;




return 0;
}
