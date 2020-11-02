#include <iostream>
#include <math.h>

class Wektor2D 
{
	public:		  		
      Wektor2D()//Konstruktor domyślny, wektor o wsp. [0, 0]
      {
        x=0; y=0;
       // std::cout << "Jestem domyślny :)" <<std::endl;
      }
// Konstruktor nadający współrzędne
//Wektor2D(double xx, double yy=2); 
private:
   	double x;
  	double y;
  		
};

//Wektor2D::Wektor2D (double xx, double yy)
//{
  //x=xx;
 // y=xx;
//}

//int main()
//{
//Wektor2D v1();
//std::cout << "wspolrzedna wektora x = " << v1.x << ",\n"; 
//std::cout << "wspolrzedna wektora y = " << v1.y << "\n";
//}
