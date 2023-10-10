#include <iostream>
 
using namespace std;
 
const int MAXPOLY = 200;
double EPSILON = 0.000001;
 
class Point
{
    private:
    public:
        double x, y;
};
 
class Polygon
{
    private:
    public:
        Point p[MAXPOLY];
        int n;
 
        Polygon()
        {
            for (int i = 0; i < MAXPOLY; i++)
                Point p[i];// = new Point();
        }
};
 
double area(Polygon p)
{
    double total = 0;
    for (int i = 0; i < p.n; i++)
    {
        int j = (i + 1) % p.n;
        total += (p.p[i].x * p.p[j].y) - (p.p[j].x * p.p[i].y);
    }
    return total / 2;
}
 
int main(int argc, char **argv)
{
    Polygon p;
 
    cout << "Enter the number of points in Polygon: ";
    cin >> p.n;
    cout << "Enter the coordinates of each point: <x> <y>";
    for (int i = 0; i < p.n; i++)
    {
        cin >> p.p[i].x;
        cin >> p.p[i].y;
    }
 
    double a = area(p);
    if (a > 0)
        cout << "The Area of Polygon with " << (p.n)
                << " points using Slicker Algorithm is : " << a;
    else
        cout << "The Area of Polygon with " << p.n
                << " points using Slicker Algorithm is : " << (a * -1);
}

// Output
// Enter the number of points in Polygon: 4
// Enter the coordinates of each point: <x> <y>
//1 1
//1 6
//6 6
//6 1
//The Area of Polygon with 4 points using Slicker Algorithm is : 25
 
//Enter the number of points in Polygon: 
//5
//Enter the coordinates of each point: <x> <y>
//1 2
//4 5
//9 8
//3 2
//1 5
//The Area of Polygon with 5points using Slicker Algorithm is : 6.0
//------------------
//(program exited with code: 0)
//Press return to continue
