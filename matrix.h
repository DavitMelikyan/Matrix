#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>

class Matrix {
public:	
	Matrix();
	Matrix(size_t rows, size_t cols);
	void set(size_t row, size_t col, double value);
	double get(size_t row, size_t col) const;
	size_t getRows() const;
	size_t getCols() const;
	void print() const;
	~Matrix();	
private:
	size_t rows_;
	size_t cols_;
	double** data_;
};



#endif
