#include<iostream>
#include<string>
#include<cctype>
void check_validity(int x);
int check_digit(std::string &str);
int check_uppper(std::string &str);
int check_dash(std::string &str);

void check_validity(int x){
  if(x!=0)
     std::cout<<"is a valid plate number."<<std::endl;
  else
   	std::cout<<"is not valid plate number."<<std::endl;
}
int check_dash(std::string &str){

	if(str!="-") return 0;
	return 1;
}

int check_digit(std::string &str){

  for (int i=0; i<=2; i++)
    {
        if (!isdigit(str[i])) return 0;
    }
  return 1;

}

int check_uppper(std::string &str){

  for (int i=0; i<=2; i++)
    {
        if (!isupper(str[i])) return 0;
    }
  return 1;

}

int main()
{

   std::string s;
   int x = 1 ;
   std::cout<<"Write a plate number: "<<std::endl;
   std::getline(std::cin,s);
   if(s.length()==7){
   	std::string str1 = s.substr (0,3);
     x = x  * check_uppper(str1);
    std::string str2 = s.substr (4,3);
     x = x  * check_digit(str2);
    std::string str3 = s.substr (3,1);
    x = x * check_dash(str3);
    check_validity(x);
   }
   else
   	std::cout<<"is not valid plate number."<<std::endl;

    return 0;
}
