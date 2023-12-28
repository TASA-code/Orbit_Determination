#ifndef  _coordinate_H
#define  _coordinate_H

#include </opt/homebrew/opt/eigen/include/eigen3/Eigen/Dense>

using namespace Eigen;

typedef Matrix<double,6,1> Vector6d;




extern Vector6d P2ECI(Vector6d& Perifocal);

// extern Vector3d ECI2LVLH(Vector3d& ECI_r, Vector3d& ECI_v);

// extern double GMST(double Julian);

// extern double UTC2Julian(int year, int month, int day, int hour, int minute, int second);

// extern Vector2d Precession_Nutation(double JD);

extern Vector6d ECI2ECEF(const Vector6d& ECI, double t);

extern Vector3d ECEF2ECI(Vector3d& a, double t);

extern Vector2d ECEF2GEO(Vector6d& ECEF);


#endif