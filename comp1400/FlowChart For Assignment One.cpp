#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   ?? level;
   ?? wanttoplay;
   ?? time;
   ?? empty_sqaures;
   ?? empty_squares;

   cout << "Welcome to The NineGaps Game!" << endl;   level ="";
   wanttoplay ="";
   time ="3 minutes";
   while (!(wanttoplay=="No"))
   {
      raptor_prompt_variable_zzyz ="Please enter the level of difficulty for the game: ";
      cout << raptor_prompt_variable_zzyz << endl;
      cin >> level;
      if (level=="easy")
      {
         empty_sqaures =3;
         cout << "The numbers 1 to 9 will randomly be chosen and input into the squares." << endl;         cout << "Three numbers will randomly be removed from the multidemensional array." << endl;         cout << "Output a multidimensional array that is 3 by 4, with 3 empty squares. Also, the timer of 3 minutes will decrement continually." << endl;      }
      else
      {
         if (level=="medium")
         {
            empty_squares =5;
            cout << "The numbers 1 to 9 will randomly be chosen and input into the squares." << endl;            cout << "Five numbers will randomly be removed from the multidemensional array." << endl;            cout << "Output a multidimensional array that is 3 by 4, with 3 empty squares. Also, the timer of 3 minutes will decrement continually." << endl;         }
         else
         {
            if (level=="hard")
            {
               empty_squares =7;
               cout << "The numbers 1 to 9 will randomly be chosen and input into the squares." << endl;               cout << "Seven numbers will randomly be removed from the multidemensional array." << endl;               cout << "Output a multidimensional array that is 3 by 4, with 3 empty squares. Also, the timer of 3 minutes will decrement continually." << endl;            }
            else
            {
            }
         }
      }
   }
   cout << "Thank You For Playing The Game!" << endl;
   return 0;
}
