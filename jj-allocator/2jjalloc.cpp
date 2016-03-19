#include "2jjalloc.h"
#include <vector>
#include <string>
#include <iostream>

int main()
{
#if 0
	int ia[5] = {0, 1, 2, 3, 4};
#else
	std::string  ia[5] = {"Thomas", "Edward", "James", "Golden", "Toby"};
#endif
	unsigned int i = 0;

#if 0
	std::vector<int, JJ::allocator<int> > iv(ia, ia + 5);
#else
	std::vector<std::string, JJ::allocator<std::string> >
		iv(ia, ia + 5);
#endif
	for (i = 0; i < iv.size(); i++)
		std::cout << iv[i] << std::endl;

	return 0;
}
