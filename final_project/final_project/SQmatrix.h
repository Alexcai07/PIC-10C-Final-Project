#ifndef SQMATRIX_H
#define SQMATRIX_H
#include<iostream>
#include<vector>
#include<set>

class  SQmatrix {
private:
	std::vector<std::vector<int>> matrix;
	size_t sz;

public:
	SQmatrix() :sz(1), matrix() {}
	SQmatrix(std::vector<std::vector<int>> v, size_t newsz);


	void print()const;

	SQmatrix operator+(SQmatrix rhs);
	SQmatrix& operator+=(const SQmatrix& rhs);
	SQmatrix operator-(SQmatrix rhs);
	SQmatrix& operator-=(const SQmatrix& rhs);
	SQmatrix operator*(const SQmatrix &rhs);
	SQmatrix& operator*=(const SQmatrix& rhs);
	SQmatrix power(int a);
	
};



class graph {
private:
	std::vector<int> nodes;
	SQmatrix M;
	

public:
	void pushback_node(std::vector<int> n);

	void delete_node();
};




#endif 

