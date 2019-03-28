#include"SQmatrix.h"

int main()
{
	std::vector<std::vector<int>> v = { {1, 2, 3}, {1, 3, 5}, {2, 6, 4} };
	SQmatrix M(v,3);
	M.print();
	std::cin.get();
	return 0;
}