#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
 while (1)
 {
      int guessNumber, randomNumber;
  cout << "Enter your gussing Number 1 to 5 ";
  cin >> guessNumber;
  randomNumber = 1 +rand() %5;
  if (guessNumber == randomNumber){
    cout << " you have won the game " << endl <<endl;
  } else
  {

      cout << "you have loss " <<endl;
      cout << "guessing Number will : " << randomNumber ;
  }

   getch();
 }
}
