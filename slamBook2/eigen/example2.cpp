//
// Created by heyjude on 2020/10/14.
//

#include <iostream>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

int main(){
    MatrixXd m0 = MatrixXd::Random(3, 3);
    MatrixXd m1 = MatrixXd::Constant(3, 3, 2.4);
    Matrix2d m2 = Matrix2d::Zero();
    Matrix3d m3 = Matrix3d::Ones();
    Matrix4d m4 = Matrix4d::Identity();

    Matrix3d m5;
    m5 << 1, 2, 3, 4, 5, 6, 7, 8, 9;
    cout << "m0 =" << endl << m0 << endl;
    cout << "m1 =" << endl << m1 << endl;
    cout << "m2 =" << endl << m2 << endl;
    cout << "m3 =" << endl << m3 << endl;
    cout << "m4 =" << endl << m4 << endl;
    cout << "m5 =" << endl << m5 << endl;

    MatrixXf mat = MatrixXf::Ones(2, 3);
    cout << "before: " << endl << mat << endl << endl;
    mat = (MatrixXf(2, 2) << 0, 1, 2, 0).finished() * mat;
    cout << "after: " << endl << mat << endl << endl;



}