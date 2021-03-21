/* Making two lists all with 5000 integer elements where 1st  list can contain the
odd integers from 1 to 9999, and 2nd  even integers can contain from 2 to 10000 and merging the two lists so that the resulting list prints the  integer elements from 1 to
10000 */

#include <list>
#include <iostream>

int main()
{
    std::list<int> list1;
    std::list<int> list2;

    for(int i = 0; i < 5000; ++i)
    {
        list1.emplace_back(i * 2 + 1);
        list2.emplace_back(i * 2 + 2);
    }

    list1.merge(list2);

    std::list<int> list3 = list1;

    list3.reverse();
    list3.pop_front();
    list3.splice(list3.begin(), list1);

    for (const int it : list3)
        std::cout << it << "\n";
}
