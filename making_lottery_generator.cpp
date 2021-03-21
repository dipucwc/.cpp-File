/*Making a lottery generator that returns an array with 7 random numbers
between 1 and 49*/

#include <iostream>
#include <bits/stdc++.h>

int main(){

  std::set<int> list;
  srand(time(0));
  while(list.size()!=7)
     {

      list.insert(rand() % 49 + 1);

     }

    std::cout<<"Your lottery numbers are: "<<std::endl;

    for (std::set<int>::iterator it=list.begin(); it!=list.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';


    std::cout<<std::endl;

	return 0;
}
