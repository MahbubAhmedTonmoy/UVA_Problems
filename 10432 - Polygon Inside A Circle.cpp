#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    double r;
    while(scanf("%lf%d", &r, &n) == 2){
            /// Angle between each two points for every point.
        double pi = (double) 360 / n;

    /// For each Isosceles in the polygon the angle between the base and radius.
        double theta = (double) 90 - (pi / 2);


        /// Convert Degree angle to Radian to use in code.
        double theta_radian = theta * M_PI / 180;

        ///  a is base
        double a = 2 * r * cos(theta_radian);

        /// h is hight
        double h = r * sin(theta_radian);

        /// S represent area of single segment.
        double S = (a * h) / 2;

        /// S*n is the area of complete polygon.
        printf("%.3lf\n", S * n);
    }
    return 0;
}
