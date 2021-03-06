//
// Created by heyjude on 2020/10/14.
//

#include <iostream>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

int main(){
    ArrayXXf a(3, 3);
    ArrayXXf b(3, 3);

    a << 1, 2, 3, 4, 5, 6, 7, 8, 9;
    b << 1, 2, 3, 1, 2, 3, 1, 2, 3;

    cout << "a + b = " << endl << a + b << endl << endl;
    cout << "a - 2 = " << endl << a - 2 << endl;
    cout << "a * b = " << endl << a * b << endl;
    cout << "a / b = " << endl << a / b << endl;

    return 0;
}