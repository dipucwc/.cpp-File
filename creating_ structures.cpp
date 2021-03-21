
/*  creating a data structures for a  program (Date struct with days, months and years)*/


#include <iostream>
#include <cstring>

using namespace std;
struct DoB
{
	int day;
	int month;
	int year;
};

struct Person
{
	string name;
    string gender;
    string occupation;
    bool is_member;
    DoB d;
    DoB r;
};

void print_data(struct Person p);


void print_data(struct Person p){

  cout<<"name :"<< p.name <<endl;
  cout<<"Date of birth: "<<p.d.day<<"/"<<p.d.month<<"/"<<p.d.year<<endl;
  cout<<"occupation: "<< p.occupation<<endl;
  cout<<"gender: "<<p.gender<<endl;
  cout<<"Date of registration: "<<p.r.day<<"/"<<p.r.month<<"/"<<p.r.year<<endl;


}

int main(){

  struct Person p;
  p.name ="Dipu";
  p.d.day = 12;
  p.d.month = 11;
  p.d.year = 1987;
  p.gender = "male";
  p.occupation = "student";
  p.is_member = true;
  p.r.day = 30;
  p.r.month = 03;
  p.r.year = 2021;

  print_data(p);

  return 0;
}
