#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>

class Matrix {
public:	
	Matrix() {
		rows_ = 0;
		cols_ = 0;
		data_ = nullptr;
	}
	Matrix(size_t rows, size_t cols) {
		rows_ = rows;
		cols_ = cols;
		data_ = new double*[rows_];
		for (int i = 0; i < rows_; ++i) {
			data_[i] = new double[cols_];
		}
	}
	void set(size_t row, size_t col, double value);
	double get(size_t row, size_t col) const;
	size_t getRows() const;
	size_t getCols() const;
	void print() const;
	~Matrix() {
		rows_ = 0;
		cols_ = 0;
		for (int i = 0; i < rows_; ++i) {
			delete [] data_[i];
		}
		delete data_;
		data_ = nullptr;
	}
private:
	size_t rows_;
	size_t cols_;
	double** data_;
};



#endif
