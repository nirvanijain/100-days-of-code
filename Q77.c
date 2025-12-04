//Check if the elements on the diagonal of a matrix are distinct
#include <stdbool.h>

bool areDiagonalElementsDistinct(int matrix[][N], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                return false; // Found a duplicate
            }
        }
    }
    return true; // All diagonal elements are distinct
}
