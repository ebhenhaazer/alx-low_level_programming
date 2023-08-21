#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>


#ifndef _MATHS_UTILITIES
#define _MATHS_UTILITIES 0
 

double NormalExt(double nMean, double nStdDev, double nLowBound, double nHighBound);

double fnSum( double * pNums, int nSize ) ;

int fnCompare (const void * a, const void * b);

int fnGetRandIndex(int nSizeOfArray);

double round(double nNum) ;

string fnIntToString(int nNum );
#endif
