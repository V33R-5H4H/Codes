//Construct a two-dimensional array using dynamic constructors.
#include<iostream>
using namespace std;
class Array {
    int rows;
    int cols;
    int** arr; 
public:
    Array(int r, int c) : rows(r), cols(c) {
        arr = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            arr[i] = new int[cols];
        }
    }
    ~Array() {
        for (int i = 0; i < rows; ++i) {
            delete[] arr[i];
        }
        delete[] arr;
    }
    void setValue(int row, int col, int value) {
        arr[row][col] = value;
    }
    int getValue(int row, int col) {
        return arr[row][col];
    }
};
int main() {
    int rows = 2;
    int cols = 2;
    Array myArray(rows, cols);
    myArray.setValue(0, 0, 10);
    myArray.setValue(0, 1, 20);
    cout << "Value at (0, 0): " << myArray.getValue(0, 0) << endl;
    cout << "Value at (0, 1): " << myArray.getValue(0, 1) << endl;
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