#include "omp.h"
#include <iostream>

int main()
{
	double sum = 0;
	
	// Set the number of threads manually as one less
	//   than the number available
	omp_set_num_threads(omp_get_num_threads() - 1);
	
	// Processor directive to parallelize the for loop
	#pragma omp parallel for
	for (int i = 0; i < 1001; i++)
		sum += i;
	std::cout << "Total is " << sum << "\n";
	return 0;
}
