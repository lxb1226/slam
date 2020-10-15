//
// Created by heyjude on 2020/10/15.
//

#include <iostream>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

int main(int argc, char **argv){
    ArrayXXf a = ArrayXXf::Random(2, 2);
    a *= 2;
    cout << "a = " << endl << a << endl;
    cout << "a.abs() = " << endl << a.abs() << endl;
    cout << "a.abs().sqrt() = " << endl << a.abs().sqrt() << endl;
    cout << "a.min(a.abs().sqrt()) = " << endl << a.min(a.abs().sqrt()) << endl;
    return 0;
}

