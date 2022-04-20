#include "omp.h"
#include <iostream>

int main()
{
	double sum = 0;
	omp_set_num_threads(6);
	#pragma omp parallel for
	for (int i = 0; i < 1001; i++)
		sum += i;
	std::cout << "Total is " << sum << "\n";
	return 0;
}