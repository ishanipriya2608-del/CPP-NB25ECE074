#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int **data;

public:
    
    Matrix(int m, int n) {
        rows = m;
        cols = n;

        data = new int*[rows];

        for (int i = 0; i < rows; i++)
            data[i] = new int[cols];

        cout << "Matrix created: " << rows << " x " << cols << endl;
    }

    

    Matrix(const Matrix& other) {
        rows = other.rows;
        cols = other.cols;

        data = new int*[rows];

        for (int i = 0; i < rows; i++) {
            data[i] = new int[cols];

            for (int j = 0; j < cols; j++)
                data[i][j] = other.data[i][j];
        }

        cout << "Deep copy created" << endl;
    }

    

    void set(int i, int j, int value) {
        data[i][j] = value;
    }

    

    void display() const {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++)
                cout << data[i][j] << " ";
            cout << endl;
        }
    }

    
    ~Matrix() {
        for (int i = 0; i < rows; i++)
            delete[] data[i];

        delete[] data;

        cout << "Matrix destroyed" << endl;
    }
};

int main() {
    Matrix A(2, 3);

    A.set(0, 0, 1);
    A.set(0, 1, 2);
    A.set(0, 2, 3);
    A.set(1, 0, 4);
    A.set(1, 1, 5);
    A.set(1, 2, 6);

    cout << "Original Matrix:" << endl;
    A.display();

    Matrix B = A;

    cout << "Copied Matrix:" << endl;
    B.display();

    return 0;
}