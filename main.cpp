#include "matrix.h"

int main() {
	int row = 3;
	int col = 4;
	Matrix matr(row,col);
	std::cout << matr.getRows() << std::endl;
	std::cout << matr.getCols() << std::endl;
	matr.set(2, 3, 15);
	matr.set(1, 1, 14);
	matr.set(0, 2, 10);
	std::cout << matr.get(2, 3) << std::endl;	
	matr.print();
	return 0;
}
