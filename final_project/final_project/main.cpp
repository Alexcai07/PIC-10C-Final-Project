#include"SQmatrix.h"

int main()
{
	std::vector<std::vector<int>> v1 = { {1, 2, 3}, {1, 3, 5}, {2, 6, 4} };
	std::vector<std::vector<int>> v2 = { {1, 1, 3}, {1, 1, 5}, {2, 1, 4} };
	SQmatrix M(v1,3);
	SQmatrix N(v2,3);
	M.print();
	N.print();
	M =M+ M;
	M.print();
	M -= N;
	M.print();
	M *= N;
	M.print();
	
	M.power(100);
	M.print();

	std::vector<int> addednode{ 3,4,8,4 };
	graph G(N);
	G.pushback_node(addednode);
	G.getSQmatrix().print();
	G.addconnection(2, 3, 999);
	G.getSQmatrix().print();
	G.delete_node(2);
	G.getSQmatrix().print();
	std::cin.get();
	return 0;
}