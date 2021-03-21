
//Printing all prime numbers that are under 50.

#include<iostream>
using namespace std;
bool isPrime(int n) {
   int i;
   for(i=2; i<=n/2; ++i) {
      if(n%i==0) {
         return false;
      }

   }
   return true;
}

int main(){

	for (int num=2; num<50; num++)

         if(isPrime(num)) cout << num << endl;


	return 0;
}
