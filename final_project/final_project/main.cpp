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

//below considers a real life senerio with my graph class, by possibly a person who do not even know matrix 
//The graph I choose is the Seven Bridges of Konigsberg which is a historically notable problem in mathematics. 
//Its negative resolution by Leonhard Euler in 1736
//the problem itself is not included in my discussion. I only use it as an illustration of my graph class
	SQmatrix start = SQmatrix();
	graph Sevenbridge(start);
	std::vector<int> s1 = { 0 };
	std::vector<int> s2 = { 2,0 };
	std::vector<int> s3 = { 1,1,0 };
	std::vector<int> s4 = { 2,0,1,0 };
	Sevenbridge.pushback_node(s2);
	Sevenbridge.pushback_node(s3);
	Sevenbridge.pushback_node(s4);
	Sevenbridge.getSQmatrix().print();
	int answer = Sevenbridge.get_num_of_connection(2, 3, 10);
	std::cout << answer;



	std::cin.get();
	return 0;
}