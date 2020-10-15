//
// Created by heyjude on 2020/10/15.
//

#include <iostream>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

int main(){

//    Matrix3f A;
//    Vector3f b;
//    A << 1, 2, 3, 4, 5, 6, 7, 8, 10;
//    b << 3, 3, 4;
//    cout << "Here is the matrix A:\n" << A << endl;
//    cout << "Here is the vector b:\n" << b << endl;
//
//    Vector3f x = A.colPivHouseholderQr().solve(b);
//
//    cout << "The solution is:\n" << x << endl;

//    Matrix2f A, b;
//    A << 2, -1, -1, 3;
//    b << 1, 2, 3, 1;
//    cout << "Here is the matrix A:\n" << A << endl;
//    cout << "Here is the right hand side b: \n" << b << endl;
//    Matrix2f x = A.ldlt().solve(b);
//    cout << "the solution is:\n" << x << endl;

//    Matrix2f A;
//    A << 1, 2, 2, 3;
//    cout << "Here is the matrix A:\n" << A << endl;
//    SelfAdjointEigenSolver<Matrix2f> eigensolver(A);
//    if(eigensolver.info() != Success) abort();
//    cout << "The eigenvalues of A are:\n" << eigensolver.eigenvalues() << endl;
//    cout << "Here's a matrix whose columns are eigenvectors of A \n"
//        << "corresponding to these eigenvalues:\n"
//        << eigensolver.eigenvectors() << endl;
//    cout << "A*vec(1) = \n" << A * (eigensolver.eigenvectors().col(0)) << endl;
//    cout << "e(1)*vec(1) = \n" << eigensolver.eigenvalues()(0) * eigensolver.eigenvectors().col(0);

//    Matrix3f A;
//    A << 1, 2, 1, 2, 1, 0, -1, 1, 2;
//    cout << "Here is the matrix A:\n" << A << endl;
//    cout << "The determinant of A is " << A.determinant() << endl;
//    cout << "The inverse of A is: \n" << A.inverse() << endl;


//    MatrixXf A = MatrixXf::Random(3, 2);
//    cout << "Here is the matrix A:\n" << A << endl;
//    VectorXf b = VectorXf::Random(3);
//    cout << "Here is the right hand side b: \n" << b << endl;
//    cout << "The least-squares solution is : \n" << A.jacobiSvd(ComputeThinU | ComputeThinV).solve(b) << endl;

    Matrix2f A, b;
    LLT<Matrix2f> llt;
    A << 2, -1, -1, 3;
    b << 1, 2, 3, 1;
    cout << "Here is the matrix A:\n" << A << endl;
    cout << "Here is the right hand side b:\n" << b << endl;
    cout << "Computing LLT decomposition..." << endl;
    llt.compute(A);
    cout << "The solution is:\n" << llt.solve(b) << endl;
    cout << "Computing LLT decomposition..." << endl;
    A(1, 1)++;
    cout << "Here is the matrix A:\n" << A << endl;
    cout << "Computing LLT decomposition..." << endl;
    llt.compute(A);
    cout << "This solution is now:\n" << llt.solve(b) << endl;
    return 0;
}
