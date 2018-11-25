/**
Christopher Galdi
2299616
galdi@chapman.edu
CPSC 350-01
Assignment 5 Faculty/Student Registrar Database
*/

#ifndef FACULTY_H
#define FACULTY_H
#include "Person.h"
#include "List.h"

using namespace std;

class Faculty : public Person
{
	public:
		Faculty();
		Faculty(string name, string level, string department, unsigned int id);
		~Faculty();

		string department;
		DoublyLinkedList<unsigned int> students;

		operator string()
		{
			stringstream ss;
			ss << id << "|" << name << "|" << level << "|" << department;
			ListNode<unsigned int> *curr;
			curr = students.front;
			while (curr != NULL)
			{
				ss << "|" << curr->data;
				curr = curr->next;
			}
			return ss.str();

		};

};

inline ostream &operator<<(ostream &os, const Faculty &p)
{
  os << p.id << "|" << p.name << "|" << p.level << "|" << p.department;
	ListNode<unsigned int> *curr;
	curr = p.students.front;
	while (curr != NULL)
	{
		os << "|" << curr->data;
		curr = curr->next;
	}
  return os;
}

#endif
