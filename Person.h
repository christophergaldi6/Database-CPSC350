/**
Christopher Galdi
2299616
galdi@chapman.edu
CPSC 350-01
Assignment 5 Faculty/Student Registrar Database
*/

#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <sstream>
using namespace std;

class Person
{
public:
  string name;
  unsigned int id;
  string level;

  Person();
  ~Person();

  bool operator==(const Person& s);
  bool operator==(const int s);
  bool operator!=(const Person& s);
  bool operator<(const Person& s);
  bool operator>(const Person& s);

  operator string()
  {
    stringstream ss;
    ss << id;
    return ss.str();

  };
};

inline ostream &operator<<(ostream &os, const Person &p)
{
  os << p.id;
  return os;
}


#endif
