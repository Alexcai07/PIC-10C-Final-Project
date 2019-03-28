#include"SQmatrix.h"

SQmatrix::SQmatrix(std::vector<std::vector<int>> v, size_t newsz)
{
	bool isSquare(true);
	for (size_t i = 0; i < v.size(); i++)
	{
		if (v[i].size() < newsz)
		{
			isSquare = false;
		}
	}
	if (isSquare)
	{
		matrix = v;
		sz = newsz;
	}
	else
	{
		std::cout << "Not a Square Matrix!" << std::endl;
	}
}

 void SQmatrix:: print()const {
	 for (size_t i = 0; i < sz; ++i)
	 {
		 for (size_t j = 0; j < sz; ++j)
		 {
			 std::cout <<"  "<< matrix[i][j]<<" " ;
		 }
		 std::cout << std::endl;
	 }
}