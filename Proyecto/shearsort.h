#ifndef SHEARSORT_H
#define SHEARSORT_H

#include <cstdlib>
#include <iostream>
#include "string"

using namespace std;

class Shearsort{

public:

  int n;
  double **matriz;

  Shearsort();
	Shearsort(int n, double** matriz);
	~Shearsort();

  void operator~();

};
#endif /* SHEARSORT_H */
