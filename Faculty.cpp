/**
Christopher Galdi
2299616
galdi@chapman.edu
CPSC 350-01
Assignment 5 Faculty/Student Registrar Database
*/

#include "Faculty.h"

using namespace std;

Faculty::Faculty():Person()
{
	level = "";
}

Faculty::Faculty(string n, string l, string d, unsigned int i)
{
	name = n;
	level = l;
	department = d;
	id = i;
}

Faculty::~Faculty()
{

}
