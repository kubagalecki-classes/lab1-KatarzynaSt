#include <iostream>
#include <math.h>

struct Wektor2D
{
    double x;
    double y;
    double xx   = pow(x, 2);
    double yy   = pow(y, 2);
    double sum  = xx + yy;
    double norm = pow(sum, 0.5);
    void   printWspol()
    {
        std::cout << "wspolrzedna wektora x = " << x << ",\n wspolrzedna wektora y = " << y << "\n";
    }
};

int main()
{
    Wektor2D wek;
    wek.x = 2;
    wek.y = -3;
    wek.printWspol();
    std::cout << "Norma tego wektora = " << wek.norm << ".\n";
}
