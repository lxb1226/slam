//
// Created by heyjude on 2020/10/15.
//

#include <iostream>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

int main(){
//    MatrixXcf a = MatrixXcf::Random(2, 2);
//    cout << "Here is the matrix a\n" << a << endl;
//    cout << "Here is the matrix a^T\n" << a.transpose() << endl;
//    cout << "Here is the conjugate of a\n" << a.conjugate() << endl;
//    cout << "Here is the matrix a^*\n" << a.adjoint() << endl;

//    Vector3d v(1, 2, 3);
//    Vector3d w(0, 1, 2);
//    cout << "Dot product: " << v.dot(w) << endl;
//    double dp = v.adjoint() * w;
//    cout << "Dot product via a matrix product: " << dp << endl;
//    cout << "Cross product:\n" << v.cross(w) << endl;

//    Matrix2d mat;
//    mat << 1, 2, 3, 4;
//    cout << "Here is mat.sum():             " << mat.sum() << endl;
//    cout << "Here is mat.prod():            " << mat.prod() << endl;
//    cout << "Here is mat.mean():            " << mat.mean() << endl;
//    cout << "Here is mat.minCoeff():        " << mat.minCoeff() << endl;
//    cout << "Here is mat.maxCoeff():        " << mat.maxCoeff() << endl;
//    cout << "Here is mat.trace():           " << mat.trace() << endl;

//    MatrixXf m(4, 4);
//    for(int i = 0; i < 4; ++i){
//        for(int j = 0; j < 4; ++j){
//            m(i, j) = j + 1 + i * 4;
//        }
//    }
//    cout << "m: " << endl << m << endl;
//    cout << "Block in the middle" << endl;
//    cout << m.block<2, 2>(1, 1) << endl << endl;
//    for(int i = 1; i <= 3; ++i){
//        cout << "Block of size" << i << "x" << i << endl;
//        cout << m.block(0, 0, i, i) << endl << endl;
//    }

//    Array22f m;
//    m << 1, 2, 3, 4;
//    Array44f a = Array44f::Constant(0.6);
//    cout << "Here is the array a:" << endl << a << endl << endl;
//    a.block<2,2>(1,1) = m;
//    cout << "Here is now a with m copied into its central 2*2 block:" << endl << a << endl << endl;
//    a.block(0, 0, 2, 3)  = a.block(2, 1, 2, 3);
//    cout << "Here is now a with bottom-right 2*3 block copied into top-left 2*2 block:" << endl << a << endl << endl;


//    MatrixXf m(4, 4);
//    for(int i = 0; i < 4; ++i){
//        for(int j = 0; j < 4; ++j){
//            m(i, j) = j + 1 + i * 4;
//        }
//    }
//    cout << "Here is the matrix m:" << endl << m << endl;
//    cout << "2nd Row: " << m.row(1) << endl;
//    m.col(2) += 3 * m.col(0);
//    cout << "After adding 3 times the first column into the third column, the matrix m is:\n";
//    cout << m << endl;
//
//    VectorXf v(2);
//    MatrixXf m(2, 2), n(2, 2);
//
//    v << -1, 2;
//    m << 1, -2, -3, 4;
//    cout << "v.squaredNorm() = " << v.squaredNorm() << endl;
//    cout << "v.norm() = " << v.norm() << endl;
//    cout << "v.lpnorm<1>() = " << v.lpNorm<1>() << endl;
//    cout << "v.lpNorm<Infinity>() = " << v.lpNorm<Infinity>() << endl;
//    cout << endl;
//    cout << "m.squaredNorm() = " << m.squaredNorm() << endl;
//    cout << "m.norm() = " << m.norm() << endl;
//    cout << "m.lpNorm<1>() = " << m.lpNorm<1>() << endl;
//    cout << "m.lpNorm<Infinity>() = " << m.lpNorm<Infinity>() << endl;

//    ArrayXXf a(2, 2);
//    a << 1, 2, 3, 4;
//    cout << "(a > 0).all()   = " << (a>0).all() << endl;
//    cout << "(a > 0).any()   = " << (a>0).any() << endl;
//    cout << "(a > 0).count()   = " << (a>0).count() << endl;
//    cout << "(a > 2).all()   = " << (a>2).all() << endl;
//    cout << "(a > 2).count()   = " << (a>2).count() << endl;
//    cout << "(a > 2).any()   = " << (a>2).any() << endl;


//    MatrixXf m(2, 2);
//    m << 1, 2, 3, 4;
//    MatrixXf::Index maxRow, maxCol;
//    float max = m.maxCoeff(&maxRow, &maxCol);
//    MatrixXf::Index minRow, minCol;
//    float min = m.minCoeff(&minRow, &minCol);
//    cout << "Max: " << max << ", at: " << maxRow << "," << maxCol << "," << endl;
//    cout << "Min: " << min << ", at: " << minRow << "," << minCol << "," << endl;

//    MatrixXf mat(2, 4);
//    mat << 1, 2, 6, 9, 3, 1, 7, 2;
//    cout << mat << endl;
//    cout << "Column's maximum: " << endl << mat.colwise().maxCoeff() << endl;
//    cout << "Row's maximum: " << endl << mat.rowwise().maxCoeff() << endl;
//
//    MatrixXf::Index maxIndex;
//    float maxNorm = mat.colwise().sum().maxCoeff(&maxIndex);
//    cout << "Maximum sum at position " << maxIndex << endl;
//    cout << "The correspoding vector is: " << endl;
//    cout << mat.col(maxIndex) << endl;
//    cout << "And its sum is : " << maxNorm << endl;

//    MatrixXf mat(2, 4);
//    VectorXf v(2);
//    mat << 1, 2, 6, 9, 3, 1, 7, 2;
//    v << 0, 1;
//
//    mat.colwise() += v;
//    cout << "Broadcasting result : " << endl;
//    cout << mat << endl;


    MatrixXf mat(2, 4);
    VectorXf v(2);

    mat << 1, 23, 6, 9, 3, 11, 7, 2;
    v << 2, 3;
    MatrixXf::Index index;
    (mat.colwise() - v).colwise().squaredNorm().minCoeff(&index);
    cout << "Nearest neighbour is column " << index << ":" << endl;
    cout << mat.col(index) << endl;

    return 0;
}