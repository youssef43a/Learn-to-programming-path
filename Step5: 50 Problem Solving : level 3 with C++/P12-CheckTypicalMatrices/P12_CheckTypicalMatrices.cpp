#include <iostream>
#include <iomanip>

using namespace std;

int ft_RandomNumber(short from, short to) {

    int RandomNumber = rand() % (to - from + 1) + from;

    return RandomNumber;
}

void ft_Fill_3_3MatrixWithRandomNumbers(int matrix[3][3], short Row, short Columns) {

    short i = 0;
    short j;

    while (i < Row) {
        j = 0;
        while (j < Columns) {
            matrix[i][j] = ft_RandomNumber(1, 10);
            j++;
        }
        i++;
    }
}

void ft_Print_3x3_Matrix(int matrix[3][3], short Row, short Columns) {

    short i = 0;
    short j;
    
    while (i < Row) {
        j = 0;
        while (j < Columns) {
            cout << setw(2) << setfill('0') << matrix[i][j] << "    ";
            j++;
        }
        cout << endl;
        i++;
    }
}

bool ft_CheckIsTypicalMatrix(int matrix1[3][3], int matrix2[3][3],  short Row, short Cols) {

    short i = 0;
    short j;
    
    while (i < Row) {
        j = 0;
        while (j < Cols) {
            if (matrix1[i][j] != matrix2[i][j])
                return false;
            j++;
        }
        cout << endl;
        i++;
    }
    return true;
}

int main() {
    //seed the random number fenerator in c++. called only one in the program
    srand((unsigned)time(NULL));
    
    int matrix1[3][3];
    int matrix2[3][3];
    
    ft_Fill_3_3MatrixWithRandomNumbers(matrix1, 3, 3);
    cout << "\nMatrix1:\n";
    ft_Print_3x3_Matrix(matrix1, 3, 3);

    
    ft_Fill_3_3MatrixWithRandomNumbers(matrix2, 3, 3);
    cout << "\nMatrix2:\n";
    ft_Print_3x3_Matrix(matrix2, 3, 3);

    cout << endl;
    if (ft_CheckIsTypicalMatrix(matrix1, matrix1, 3, 3)) {
        cout << "Yes: matrixes are typical.";
    } 
    else
        cout << "No: matrixes are Not typical.";
    cout << endl;
    return 0;
}