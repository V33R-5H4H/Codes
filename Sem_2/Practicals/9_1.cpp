//Construct a two-dimensional array using dynamic constructors.
#include<iostream>
using namespace std;
//Construct a two-dimensional array using dynamic constructors.
#include<iostream>
using namespace std;
class Dynamic2DArray {
private:
    int rows;
    int cols;
    int** arr; // Pointer to a pointer (2D array)

public:
    // Constructor to create a dynamic 2D array
    Dynamic2DArray(int r, int c) : rows(r), cols(c) {
        // Allocate memory for the rows
        arr = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            // Allocate memory for each column
            arr[i] = new int[cols];
        }
    }

    // Destructor to free memory
    ~Dynamic2DArray() {
        for (int i = 0; i < rows; ++i) {
            delete[] arr[i]; // Delete each row
        }
        delete[] arr; // Delete the array of pointers
    }

    // Set value at a specific position
    void setValue(int row, int col, int value) {
        arr[row][col] = value;
    }

    // Get value at a specific position
    int getValue(int row, int col) {
        return arr[row][col];
    }
};

int main() {
    int rows = 2;
    int cols = 2;

    // Create a dynamic 2D array
    Dynamic2DArray myArray(rows, cols);

    // Set some values
    myArray.setValue(0, 0, 10);
    myArray.setValue(0, 1, 20);

    // Get and display values
    cout << "Value at (0, 0): " << myArray.getValue(0, 0) << endl;
    cout << "Value at (0, 1): " << myArray.getValue(0, 1) << endl;

    return 0;
}
/*
int main(){
    int *x=new int[2];
    x[0]=new int[2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<"Enter element"<<i+1<<"x"<<j+1;
            cin>>x[i][j];
        }
    }
    cout<<"Matrix is :"<<endl;
    cout<<"| "<<x[0][0]<<" "<<x[0][1]<<" |"<<endl;
    cout<<"| "<<x[1][0]<<" "<<x[1][1]<<" |"<<endl;
}
*/