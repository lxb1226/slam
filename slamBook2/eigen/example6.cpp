//
// Created by heyjude on 2020/10/15.
//

#include <iostream>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

int main(){
    Array44f a1, a2;
    Matrix4f m1, m2;
    m1 = a1 * a2;
    a1 = m1 * m2;
    a2 = a1 + m1.array();
    m2 = a1.matrix() + m1;

    ArrayWrapper<Matrix4f> m1a(m1);
    MatrixWrapper<Array44f> a1m(a1);

    cout << "a1: " << std::endl << a1 << endl;
    cout << "a2: " << std::endl << a2 << endl;
    cout << "m1: " << std::endl << m1 << endl;
    cout << "m2: " << std::endl << m2 << endl;
    return 0;
}
