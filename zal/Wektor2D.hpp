#include <iostream>
#include <math.h>

struct Wektor2D
{ 
    Wektor2D (double x, double y){};
    //double xx   = pow(x, 2);
    //double yy   = pow(y, 2);
    //double sum  = xx + yy;
    //double norm = pow(sum, 0.5);
    //void   printWspol()
    //{
      //  std::cout << "wspolrzedna wektora x = " << x << ",\n wspolrzedna wektora y = " << y << "\n";
    //}
};

int main()
{
    Wektor2D v1;
    v1.printWspol();
    std::cout << "Norma tego wektora = " << v1.norm << ".\n";
    std::cout << "wspolrzedna wektora x = " << v1.x << ",\n wspolrzedna wektora y = " << v1.y << "\n";
}

//Wektor2D v1{};           // Konstruktor domyślny, wektor o wsp. [0, 0]
//v1.setX(1.);             // setter
//v1.setY(1.);             // setter
//double x1 = v1.getX(1.); // getter
//double y1 = v1.getY(1.); // getter
 
//Wektor2D v2{2., 2.}; // Konstruktor nadający współrzędne
 
//Wektor2D sum = v1 + v2; // dodawanie wektorów
 
//double prod = v1 * v2; // iloczyn skalarny
