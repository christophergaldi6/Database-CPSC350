/**
Christopher Galdi
2299616
galdi@chapman.edu
CPSC 350-01
Assignment 5 Faculty/Student Registrar Database
*/

#include "Person.h"

using namespace std;

Person::Person()
{
  name = "";
  id = 0;
  level = "";
}

Person::~Person()
{
  
}

bool Person::operator==(const Person& s)
{
  if(s.id == id)
  {
    return true;
  }

  else
  {
    return false;
  }
}

bool Person::operator==(const int s)
{
  if(s == id)
  {
    return true;
  }

  else
  {
    return false;
  }
}

bool Person::operator!=(const Person& s)
{
  if(s.id != id)
  {
    return true;
  }

  else
  {
    return false;
  }
}

bool Person::operator<(const Person& s)
{
  if(s.id > id)
  {
    return true;
  }

  else
  {
    return false;
  }
}
bool Person::operator>(const Person& s)
{
  if(s.id < id)
  {
    return true;
  }

  else
  {
    return false;
  }
}
