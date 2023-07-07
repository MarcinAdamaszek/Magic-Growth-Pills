#include <iostream>


int main() {
	const int size = 8;
	const int j0 = 8, j1 = 7, j2 = 6, j3 = 5, j4 = 4, j5 = 3, j6 = 2, j7 = 1;

	bool isSolved;

	int tests;
	int x, y;
	int tempX;
	int solution;
	int moveCount;
	int i, j;
	int i0, i1, i2, i3, i4, i5, i6, i7;
	int chessBoard[size + 2][size + 2] {
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
	};

	std::cin >> tests;
	for (int k = 0; k < tests; k++) {
		std::cin >> x;
		std::cin >> y;

		isSolved = false;
		i0 = 0, i1 = 0, i2 = 0, i3 = 0, i4 = 0, i5 = 0, i6 = 0, i7 = 0;

		for (int l = 0; l <= size; l++) {
			for (int n = 0; n <= size; n++) {
				chessBoard[n][l] = 1;
			}
		}

		while (i0 != size + 1) {

			i = 0;
			j = 0;
			moveCount = 0;
			tempX = x;

			while ((i < size || j < size) && tempX > 0) {
				if (chessBoard[i][j + 1]) {
					j++;
					tempX *= 2;
					moveCount++;
				}
				else {
					i++;
					tempX -= 100;
					moveCount++;
				}
				if (tempX == y) {
					if (!isSolved) {
						solution = moveCount;
						isSolved = true;
					}
					if (moveCount < solution) {
						solution = moveCount;
					}
				}
			}
			
			if (i6 == size) {
				chessBoard[i7][j7] = 0;
				i0 = i7;
				i1 = i7;
				i2 = i7;
				i3 = i7;
				i4 = i7;
				i5 = i7;
				i6 = i7;
				i7++;
				for (int m = 0; m < size; m++) {
					chessBoard[m][j0] = 1;
					chessBoard[m][j1] = 1;
					chessBoard[m][j2] = 1;
					chessBoard[m][j3] = 1;
					chessBoard[m][j4] = 1;
					chessBoard[m][j5] = 1;
					chessBoard[m][j6] = 1;
				}
			}
			if (i5 == size) {
				chessBoard[i6][j6] = 0;
				i0 = i6;
				i1 = i6;
				i2 = i6;
				i3 = i6;
				i4 = i6;
				i5 = i6;
				i6++;
				for (int m = 0; m < size; m++) {
					chessBoard[m][j0] = 1;
					chessBoard[m][j1] = 1;
					chessBoard[m][j2] = 1;
					chessBoard[m][j3] = 1;
					chessBoard[m][j4] = 1;
					chessBoard[m][j5] = 1;
				}
			}
			if (i4 == size) {
				chessBoard[i5][j5] = 0;
				i0 = i5;
				i1 = i5;
				i2 = i5;
				i3 = i5;
				i4 = i5;
				i5++;
				for (int m = 0; m < size; m++) {
					chessBoard[m][j0] = 1;
					chessBoard[m][j1] = 1;
					chessBoard[m][j2] = 1;
					chessBoard[m][j3] = 1;
					chessBoard[m][j4] = 1;
				}
			}
			if (i3 == size) {
				chessBoard[i4][j4] = 0;
				i0 = i4;
				i1 = i4;
				i2 = i4;
				i3 = i4;
				i4++;
				for (int m = 0; m < size; m++) {
					chessBoard[m][j0] = 1;
					chessBoard[m][j1] = 1;
					chessBoard[m][j2] = 1;
					chessBoard[m][j3] = 1;
				}
			}
			if (i2 == size) {
				chessBoard[i3][j3] = 0;
				i0 = i3;
				i1 = i3;
				i2 = i3;
				i3++;
				for (int m = 0; m < size; m++) {
					chessBoard[m][j0] = 1;
					chessBoard[m][j1] = 1;
					chessBoard[m][j2] = 1;
				}
			}
			if (i1 == size) {
				chessBoard[i2][j2] = 0;
				i0 = i2;
				i1 = i2;
				i2++;
				for (int m = 0; m < size; m++) {
					chessBoard[m][j0] = 1;
					chessBoard[m][j1] = 1;
				}
			}
			if (i0 == size) {
				chessBoard[i1][j1] = 0;
				i0 = i1++;
				for (int m = 0; m < size; m++) {
					chessBoard[m][j0] = 1;
				}
			}
			chessBoard[i0++][j0] = 0;
		}

		if (isSolved) {
			std::cout << solution << std::endl;
		}
		else {
			std::cout << "NIE" << std::endl;
		}
	}
}

