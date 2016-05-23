/*
 Dennis Bui
 CIS 22B
 Winter 2016
 Assignment B
 Problem B1
 This program will prompt the user for the height and radius of a cone and then use that input
 to calculate the volume of the requested cone.
 */
#include <iostream>
#include <cmath>

using namespace std;
const double PI = 3.14159265358979323846;
struct Cone
{
    double height;
    double radius;
};

void inPut(double &height, double &radius);
void setUp(double height, double radius, Cone * ptr);
double getVolume(Cone * ptr);
void outPut(Cone * ptr);
int main()
{
    double height;
    double radius;
    
    Cone *ptr = new Cone();
    inPut(height, radius);
    setUp(height, radius, ptr);
    outPut(ptr);
    
    delete (ptr);
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

/* ******************** setUp ****************
 Puts the data of the height and radius into
 the structure using pointers
 */
void setUp(double height, double radius, Cone * ptr)
{
    ptr->height = height;
    ptr->radius = radius;
}

/* ******************** getVolume ****************
 Pulls radius and height from the Cone structure and
 uses the values to calculate the volume of the cone
 volume is returned as a double
 */
double getVolume(Cone * ptr)
{
    double volume;
    volume = (PI * pow(ptr->radius, 2) * ptr->height) / 3;
    return volume;
}

/* ******************** outPut ****************
 Pulls height and radius from the Cone structure
 prints them out. Calls function getVolume and
 prints out volume as well
 */
void outPut(Cone * ptr)
{
    double volume = getVolume(ptr);
    ;
    cout << "The volume of a cone with a radius of " << ptr->radius << " and a height of " << ptr->height << " is " << volume;
}


/* *************** Execution Results ***********
 Enter the height of the cone: 6
 Enter the radius of the cone: 2
 The volume of a cone with a radius of 2 and a height of 6 is 25.1327
 Process returned 0 (0x0)   execution time : 75.013 s
 Press any key to continue.
 */
