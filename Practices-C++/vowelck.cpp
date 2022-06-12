#include<bits/stdc++.h>
using namespace std;
int main()
{    char text;
cout << "Enter your letter ";
cin >> text;
text = tolower(text);
switch(text){
   case 'a':
   case 'e':
   case 'i':
   case 'o':
    case 'u':
       cout << "its a vowel letter";
       break;

   default:
    cout << "its consonant letter";
   }





    return 0;

}

