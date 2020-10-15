//
// Created by heyjude on 2020/10/14.
//
#include <iostream>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

int main(){
    MatrixXd m(2, 5);
    m.resize(4, 3);
    cout << "The matrix m is of size " << m.rows() << "x" << m.cols() << endl;
    VectorXd v(2);
    v.resize(5);
    cout << "The vector v is of size " << v.size() << endl;
    cout << "As a matrix, v is of size " << v.rows() << "x" << v.cols() << endl;
    return 0;
}
