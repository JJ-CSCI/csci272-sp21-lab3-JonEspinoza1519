//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------

// Put the assignment code here

class Quaternion {
private:
  double a,b,c,d;

public:
  Quaternion(double a1, double b1, double c1, double d1){
    a = a1;
    b = b1;
    c = c1;
    d = d1;
  }

  bool operator== (const Quaternion& q) const{
    if (a == q.a && b == q.b && c == q.c && d == q.d)
      return true;
    else
      return false;
  }

  Quaternion operator+ (const Quaternion& q) const{
    Quaternion returnMe{a + q.a, b + q.b, c + q.c, d + q.d};
    return returnMe;
  }

  Quaternion operator- (const Quaternion& q) const{
    Quaternion returnMe{a - q.a, b - q.b, c - q.c, d - q.d};
    return returnMe;
  }

  Quaternion operator* (const double& multi) const{
    Quaternion returnMe{a * multi, b * multi, c * multi, d * multi};
    return returnMe;
  }
};

//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "q1" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        REQUIRE( q == p );
    }
    SECTION( "q2" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q + p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{0.0, 0.0, 0.0, 0.0};
        REQUIRE( (q - p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q * 2.0) == r );
    }
}
//------------------------------
