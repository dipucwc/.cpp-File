
//Making a guessing game where the user need to guess a secret number

#include <iostream>
#include <random>

using namespace std;
int get_random_number(int small, int high);
int get_random_number(int small, int high)
{
   static random_device dev;
   static mt19937 rng(dev());

   uniform_int_distribution<std::mt19937::result_type>
   dist(small, high);
   return dist(rng);
}

int main()
{
   int secret = get_random_number(0,100);
   int guess = 0;


 while(guess!=secret)
   {
   cout << "Guess a number ? "<<endl;
   cin >> guess;
   if (guess > secret)
   cout << "The secret number is smaller !"<<endl;
   else if (guess < secret)
   cout << "The secret number is larger !"<<endl;
   else
   cout << "You found the secret number !"<<endl;
   }
   return 0;
}
