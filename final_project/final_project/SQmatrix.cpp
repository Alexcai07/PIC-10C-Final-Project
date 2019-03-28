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
	 std::cout << std::endl;
}

 SQmatrix SQmatrix::operator+(SQmatrix rhs)
 {
	 
	 if (sz != rhs.sz)
	 {
		 std::cout << "not a valid addition" << std::endl;;
	 }
	 else
	 {
		 for (size_t i = 0; i < sz; ++i)
		 {
			 for (size_t j = 0; j < sz; ++j)
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
		 for (size_t i = 0; i < sz; ++i)
		 {
			 for (size_t j = 0; j < sz; ++j)
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
		 for (size_t i = 0; i < sz; ++i)
		 {
			 for (size_t j = 0; j < sz; ++j)
			 {
				 int sum = 0;
				 for (size_t k = 0; k < sz; ++k)
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