#include <iostream>
#include <math.h>

class Wektor2D
{
private:
    double x;
    double y;

public:
    Wektor2D(double xx = 0, double yy = 0)
    {
        this->x = xx;
        this->y = yy;
    }

    double getX() { return this->x; }
    double getY() { return this->y; }
    double setX(double xx) { this->x = xx; }
    double setY(double yy) { this->y = yy; }

    Wektor2D operator+(Wektor2D q) { return Wektor2D(x + q.getX(), y + q.getY()); }
    double   operator*(Wektor2D q) { return (x * q.getX() + y * q.getY()); }
};
int main()
{
    Wektor2D v1;
    std::cout << "Wektor v1 " << std::endl;
    std::cout << "Wspolrzedna x=" << v1.getX() << std::endl;
    std::cout << "Wspolrzedna y=" << v1.getY() << std::endl;

    Wektor2D v2(1, 2);
    std::cout << "Wektor v2" << std::endl;
    std::cout << "Wspolrzedna x=" << v2.getX() << std::endl;
    std::cout << "Wspolrzedna y=" << v2.getY() << std::endl;

    Wektor2D v3(1, 2);
    v3.setX(-7);
    v3.setY(6);
    std::cout << "Wektor v3" << std::endl;
    std::cout << "Wspolrzedna x=" << v3.getX() << std::endl;
    std::cout << "Wspolrzedna y=" << v3.getY() << std::endl;

    Wektor2D sum = v3 + v2;
    std::cout << "Suma wektorów v1 i v2 = (" << sum.getX() << "," << sum.getY() << ")" << std::endl;

    double iloczyn_skalarny = v2 * v3;
    std::cout << "Iloczyn skalarny wektorów v2 i v3 = " << iloczyn_skalarny << std::endl;
}
