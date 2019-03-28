#ifndef SQMATRIX_H
#define SQMATRIX_H
#include<iostream>
#include<vector>
#include<set>


class  SQmatrix {
private:
	std::vector<std::vector<int>> matrix;
	int sz;

public:
	SQmatrix() :sz(1), matrix() {}
	SQmatrix(std::vector<std::vector<int>> v, int newsz);

	std::vector<std::vector<int>> getmatrix();
	int getsize();
	void print()const;
	void changesize(int newsz);

	SQmatrix operator+(SQmatrix rhs);
	SQmatrix& operator+=(const SQmatrix& rhs);
	SQmatrix operator-(SQmatrix rhs);
	SQmatrix& operator-=(const SQmatrix& rhs);
	SQmatrix operator*(const SQmatrix &rhs);
	SQmatrix& operator*=(const SQmatrix& rhs);
	SQmatrix power(int a);
	void enlarge(std::vector<int> n);
};


class graph {


public:
	void pushback_node(std::vector<int> n);
	void addconnection(int location1, int location2);
	void delete_node(int location);
	graph(const SQmatrix &S) :M(S) {}
	SQmatrix getSQmatrix();
	
private:
	
	SQmatrix M;
	friend SQmatrix;

};




#endif 

