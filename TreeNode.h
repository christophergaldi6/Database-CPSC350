/**
Christopher Galdi
2299616
galdi@chapman.edu
CPSC 350-01
Assignment 5 Faculty/Student Registrar Database
*/

#ifndef TREENODE_H
#define TREENODE_H
#include <iostream>

template <class T>
class TreeNode
{
public:
  TreeNode()
  {
    key = NULL;
    left = NULL;
    right = NULL;
  };
  TreeNode(T k)
  {
    key = k;
    left = NULL;
    right = NULL;
  };
  ~TreeNode()
  {

  };

  T key;
  TreeNode *left;
  TreeNode *right;
};



#endif
