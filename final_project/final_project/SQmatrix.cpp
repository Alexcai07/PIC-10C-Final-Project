#include"SQmatrix.h"

SQmatrix::SQmatrix(std::vector<std::vector<int>> v, int newsz)
{
	bool isSquare(true);
	for (int i = 0; i < int(v.size()); i++)
	{
		if (int(v[i].size()) < newsz)
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


std::vector<std::vector<int>> SQmatrix::getmatrix()
{
	return matrix;
}

 void SQmatrix:: print()const {
	 for (int i = 0; i < sz; ++i)
	 {
		 for (int j = 0; j < sz; ++j)
		 {
			 std::cout <<"  "<< matrix[i][j]<<" " ;
		 }
		 std::cout << std::endl;
	 }
	 std::cout << std::endl;
}

 void SQmatrix::changesize(int newsz)
 {
	 sz = newsz;
 }


 int SQmatrix::getsize()
 {
	 return sz;
 }


 SQmatrix SQmatrix::operator+(SQmatrix rhs)
 {
	 
	 if (sz != rhs.sz)
	 {
		 std::cout << "not a valid addition" << std::endl;;
	 }
	 else
	 {
		 for (int i = 0; i < sz; ++i)
		 {
			 for (int j = 0; j < sz; ++j)
			 {
				 rhs.matrix[i][j] += matrix[i][j];
			 }
		 }
	 }
	 return rhs;
 }

 SQmatrix& SQmatrix::operator+=(const SQmatrix& rhs)
 {
	 *this = *this + rhs;
	 return *this;
 }

 SQmatrix SQmatrix::operator-(SQmatrix rhs)
 {
	 if (sz != rhs.sz)
	 {
		 std::cout << "not a valid subtraction" << std::endl;;
	 }
	 else
	 {
		 for (int i = 0; i < sz; ++i)
		 {
			 for (int j = 0; j < sz; ++j)
			 {
				 rhs.matrix[i][j] -= matrix[i][j];
			 }
		 }
	 }
	 return rhs;
 }

 SQmatrix& SQmatrix::operator-=(const SQmatrix& rhs)
 {
	 *this = *this - rhs;
	 return *this;
 }

 SQmatrix SQmatrix::operator*(const SQmatrix &rhs)
 {
	 std::vector<std::vector<int>> v(sz, std::vector<int>(sz, 0));
	 SQmatrix result(v,sz);
	 if (matrix.size() != rhs.matrix.size())
	 {
		 std::cout << "Invalid matrix multiplication!" << std::endl;
	 }
	 else
	 {
		 for (int i = 0; i < sz; ++i)
		 {
			 for (int j = 0; j < sz; ++j)
			 {
				 int sum = 0;
				 for (int k = 0; k < sz; ++k)
				 {
					 sum += matrix[i][k] * rhs.matrix[k][j];
				 }
				 result.matrix[i][j] = sum;
			 }
		 }
	 }
	 return result;
 }

 SQmatrix& SQmatrix::operator*=(const SQmatrix& rhs)
 {
	 *this = *this * rhs;
	 return *this;
 }

 SQmatrix SQmatrix::power(int a)
 {
	 SQmatrix temp(*this);
	 for (int i = 0; i < a; ++i)
	 {
		 *this *= temp;
	 }
	 return *this;
 }

 SQmatrix graph::getSQmatrix()
 {
	 return M;
 }

 void SQmatrix::enlarge(std::vector<int> n)
 {
	 if (n.size() != sz + 1)
	 {
		 std::cout << "Invalid node input!" << std::endl;
	 }
	 else
	 {
		 matrix.push_back(n);
		 for (int i = 0; i < sz; ++i)
		 {
			matrix[i].push_back(n[i]);
		 }
		 sz+=1;
	 }
 }
 

 void graph::pushback_node(std::vector<int> n)
 {
	 M.enlarge(n);
 }