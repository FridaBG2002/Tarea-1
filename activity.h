// =================================================================
//
// File: activity.h
// Author:
// Date:
//
// =================================================================
#ifndef ACTIVITY_H
#define ACTIVITY_H
#include <fstream>
using namespace std;

// =================================================================
// sumaIterativa. Calculate the sum from 1 to n with an iterative
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	o(n)
// =================================================================
int suma;
int i = 1;

unsigned int sumaIterativa(int n) {
  
   while (i <= n) {
    suma = suma + i;
    i ++;
   }

   return suma;
}

// =================================================================
// sumaRecursiva. Calculate the sum from 1 to n with an recursive
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	o(n)
// =================================================================

unsigned int sumaRecursiva(unsigned int n) {

   if (n ==1 )
	   return 1;
   else
	 return (sumaRecursiva(n - 1) + n);

}

// =================================================================
// sumaDirecta. Calculate the sum from 1 to n with a mathematical
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	o(1)
// =================================================================
unsigned int sumaDirecta(unsigned int n) {

 suma = (n * (n + 1)) / 2;
   return suma;
}

#endif /* ACTIVITY_H */
