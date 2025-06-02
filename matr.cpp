#include "matrix.h"

void Matrix::set(size_t row, size_t col, double value) {
 	if (row > rows_ || col > cols_) {
                std::cout << "Invalid position in matrix\n";
                exit(-1);
        }
	data_[row][col] = value;
}

double Matrix::get(size_t row, size_t col) const {
	if (row > rows_ || col > cols_) {
		std::cout << "Invalid position in matrix\n";
		return -1;
	}
	return data_[row][col];
}

size_t Matrix::getRows() const {
	return rows_;
}

size_t Matrix::getCols() const {
	return cols_;
}

void Matrix::print() const {
	for (int i = 0; i < rows_; ++i) {
		for (int j = 0; j < cols_; ++j) {
			std::cout << data_[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

