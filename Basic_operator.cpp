#include<iostream>
//using namespace std;
int main()
{
    int a,b;
    int sum;
    int mul;
    float div;
    double rem;
    std::cout<<"Type a number:";
    std::cin>>a;
    std::cout<<"Type another number:";
    std::cin>>b;
    sum= a+b;
    mul=a*b;
    div=a/b;
    rem=a%b;
    std::cout<<"Sum is:"<<sum<<std::endl;
    std::cout<<"Multiplication is:"<<mul<<std::endl;
    std::cout<<"Division is:"<<div<<std::endl;
    std::cout<<"Remainder is:"<<rem<<std::endl;
    return 0;
}
