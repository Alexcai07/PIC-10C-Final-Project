#ifndef SQMATRIX_H
#define SQMATRIX_H
#include<vector>


class  SQmatrix {
private:
	std::vector<std::vector<int>> matrix;
	int sz;

public:
	SQmatrix();

	SQmatrix(const SQmatrix &m);

	void print()const;

	SQmatrix operator+(const SQmatrix& rhs);
	SQmatrix& operator+=(const SQmatrix& rhs);
	SQmatrix operator-(const SQmatrix& rhs);
	SQmatrix& operator-=(const SQmatrix& rhs);
	SQmatrix operator*(const SQmatrix& rhs);
	SQmatrix& operator*=(const SQmatrix& rhs);

	SQmatrix operator*(const SQmatrix& rhs);
	SQmatrix power(int a);
};

class graph {
private:

};




#endif 

