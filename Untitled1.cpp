//#include "std_lib_facilities.h"
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	cout << "Please enter your first name:\n";
	string first_name;
	cin >> first_name;
	cout << "Hello, " << first_name <<"!\n";
	return 0;
}

/*
#include "std_lib_facilities.h"
int main()
{
cout << "Please enter your first name (followed by 'enter'):\n";
string first_name; // first_name is a variable of type string
cin >> first_name; // read characters into first_name
cout << "Hello, " << first_name << "!\n";
cout<< "setup Complete";
}
*/
/*
#include<iostream> 
  
using namespace std;
  
// main function -
// where the execution of program begins
int main()
{
   cout << "Please enter your first name (followed by 'enter'):\n";
string first_name; // first_name is a variable of type string
cin >> first_name; // read characters into first_name
cout << "Hello, " << first_name << "!\n";
cout<< "setup Complete";
}
*/