#ifndef SQMATRIX_H
#define SQMATRIX_H
#include<vector>
#include<unordered_set>

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

	friend graph;
	
};

class graph {
private:
	
	class node {
	public:
		std::vector<node> connection;
		friend graph;
		friend SQmatrix;
	};

	std::unordered_set<node> nodes;
	SQmatrix M;


};




#endif 

