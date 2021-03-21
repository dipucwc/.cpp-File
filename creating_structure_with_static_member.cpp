
/*Creating a structure with static members with function and a couple of variables*/


#include <iostream>

struct variables
{
    static void hello()
    {
        std::cout << "hello, world\n";
    }

    static inline int a = 0;
    static inline char b = 'b';
};

int main()
{
    variables::hello();

    variables::a = 10;
    std::cout << variables::b << "\n";
    std::cout << variables::a << "\n";

    return variables::a;
}
