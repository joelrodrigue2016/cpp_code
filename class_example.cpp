/******************************************************************************

This is a code sample for classes and objects
*******************************************************************************/

#include <iostream>
#include<stdio.h>

using namespace std;

class person
{
public:			//you can also switch it up to private
  string name;
  string last_name;
  float age;
};

int
main ()
{
  person student, student2, student3, student4, student5;

  student.name = "Joel";
  student.last_name = "Rodriguez";
  student.age = 24;

  student2.name = "Moises";
  student2.last_name = "Rodriguez";
  student2.age = 29;

  student3.name = "Sarai";
  student3.last_name = "Rodriguez";
  student3.age = 22;

  student4.name = "Stephanie";
  student4.last_name = "Rodriguez";
  student4.age = 23;

  student5.name = "Sarai";
  student5.last_name = "Jimenez";
  student5.age = 20;

  cout << "The student number 1 information is: \n" << "* " << student.name <<" \n" << "* " << student.last_name << " \n" << "* " << student.age << endl;
  cout << "+-----------------------------------+\n";
  cout << "The student number 2 information is: \n" << "* " << student2.name<< " \n" << "* " << student2.last_name << " \n" << "* " << student2.age << endl;
  cout << "+-----------------------------------+\n";
  cout << "The student number 3 information is: \n" << "* " << student3.name<< " \n" << "* " << student3.last_name << " \n" << "* " << student3.age << endl;
  cout << "+-----------------------------------+\n";
  cout << "The student number 4 information is: \n" << "* " << student4.name<< " \n" << "* " << student4.last_name << " \n" << "* " << student4.age << endl;
  cout << "+-----------------------------------+\n";
  cout << "The student number 5 information is: \n" << "* " << student5.name<< " \n" << "* " << student5.last_name << " \n" << "* " << student5.age*80<< endl;
  cout << "+-----------------------------------+\n";

  return 0;
}
