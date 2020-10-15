//
// Created by heyjude on 2020/10/15.
//

#include <iostream>
#include <Eigen/Dense>
#include <cmath>
#include <Eigen/Geometry>
#include <Eigen/Core>

using namespace std;
using namespace Eigen;

int main(){
    Matrix3d rotation_matrix;
    rotation_matrix.setIdentity();
    AngleAxisd rotation_vector(M_PI/4,Vector3d(0, 0, 1));
    cout.precision(3);
    cout << "rotation vector: Angle is: " << rotation_vector.angle() * (180 / M_PI) << endl;
    cout << "rotation matrix = \n" << rotation_vector.matrix() << endl;
    rotation_matrix = rotation_vector.toRotationMatrix();
    Vector3d v(1, 0, 0);
    Vector3d v_rotated = rotation_vector * v;
    cout << "(1, 0, 0) after rotation = " << v_rotated.transpose() << endl;
    v_rotated = rotation_matrix * v;
    cout << "(1, 0, 0) after rotation = " << v_rotated.transpose() << endl;

    Vector3d euler_angles = rotation_matrix.eulerAngles(2, 1, 0);
    cout << "yaw pict roll = " << euler_angles.transpose() * (180 / M_PI) << endl;

    Isometry3d T = Isometry3d::Identity();
    T.rotate(rotation_vector);
    T.pretranslate(Vector3d(0, 0, 3));
    cout << "Transform matrix = \n" << T.matrix() << endl;

    Quaterniond q = Quaterniond(rotation_vector);
    cout << "quaternion = \n" << q.coeffs() << endl;
    q = Quaterniond(rotation_matrix);
    cout << "quaternion = \n" << q.coeffs() << endl;
    v_rotated = q * v;
    cout << "(1, 0, 0) after rotation = " << v_rotated.transpose() << endl;
}