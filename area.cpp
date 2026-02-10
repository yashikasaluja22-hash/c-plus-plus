#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.1415
double rectangle(double l, double b);
double square(double a);
double circle(double r);
int main() {
double l, b;
double a, r;
cout << "Enter length and breadth for Rectabgle: ";
cin>>l>>b;
cout << "Area of Rectangle: " <<rectangle(l, b) << '\n';

double square(double a);
cout << "Enter side for area of square: ";
cin>>a;
cout << "Area of square: " << square(a) << '\n';

cout << "Enter radius for circle: ";
cin >> r;
cout <<"Area of circle: " << circle(a) << '\n';
return 0;
}
double rectangle(double l, double b){
    double area = l * b;
    return area;
}
double square(double a){
    double area = a * a;
    return area;
}
double circle(double r){
    double area =  3.14 * r * r;
 return area;
}