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
