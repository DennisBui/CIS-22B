/*
 Dennis Bui
 CIS 22B
 Winter 2016
 Assignment B
 Problem B2
 This program will prompt the user for the height and radius of a cone and then use that input
 to calculate the volume of the requested cone.
 */
#include <iostream>
#include <cmath>

using namespace std;
const double PI = 3.14159265358979323846;
class Cone
{
private:
    double height;
    double radius;
public:
    void setUp(double h, double r);
    double getVolume()const;
    void outPut()const;
    
};
/* ******************** setUp ****************
 Puts the data of the height and radius into
 the structure using pointers
 */
void Cone::setUp(double h, double r)
{
    height = h;
    radius = r;
}

/* ******************** getVolume ****************
 Pulls radius and height from the Cone structure and
 uses the values to calculate the volume of the cone
 volume is returned as a double
 */
double Cone::getVolume()const
{
    double volume;
    volume = (PI * pow(radius, 2) * height) / 3;
    return volume;
}

/* ******************** outPut ****************
 Pulls height and radius from the Cone structure
 prints them out. Calls function getVolume and
 prints out volume as well
 */
void Cone::outPut()const
{
    double volume = getVolume();
    cout << "The volume of a cone with a radius of " << radius << " and a height of " << height << " is " << volume <<endl;
}


void inPut(double &height, double &radius);

int main()
{
    double height;
    double radius;
    Cone myCone;
    
    inPut(height, radius);
    myCone.setUp(height, radius);
    myCone.outPut();
    
  
}

/* ******************** inPut ****************
 asks user for the height and radius of Cone
 height and radius are saved as reference
 */
void inPut(double &height, double &radius)
{
    cout << "Enter the height of the cone: ";
    cin >> height;
    
    cout << "Enter the radius of the cone: ";
    cin >> radius;
}

/* *************** Execution Results ***********
 Enter the height of the cone: 6
 Enter the radius of the cone: 2
 The volume of a cone with a radius of 2 and a height of 6 is 25.1327
 Process returned 0 (0x0)   execution time : 75.013 s
 Press any key to continue.
 */
