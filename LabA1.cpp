/*
 Dennis Bui
 CIS 22B
 Winter 2016
 Assignment A
 Problem A1
 This program will prompt the user for the amount of strings they want and allow them to print
 them out.
 */

#include <iostream>
#include <string>

using namespace std;

void getSize(int &stringNums);

void getSpace(int stringNums, string*& userArray);

void inputData(int stringNums, string *userArray);

void printData(int stringNums, string *userArray);

void Destroy(string *userArray);

int main()
{
    int stringNums;
    string* ptrSpace;
    
    getSize(stringNums);
    getSpace(stringNums, ptrSpace);
    inputData(stringNums, ptrSpace);
    printData(stringNums, ptrSpace);
    Destroy(ptrSpace);
}

/* ******************** getSize ****************
 asks user for size of the array
 size is saved through reference
 */

void getSize(int &stringNums)
{
    cout << "How many strings would you like in this program? ";
    cin >> stringNums;
}

/* ******************** getSpace ****************
 creates the array, in the size that the user requested in function getSize
 */

void getSpace(int stringNums, string*& userArray)
{
    userArray = new string[stringNums];
}

/* ******************** inputData ****************
 the user will enter the strings one after the other until the array is filled
 */
void inputData(int stringNums, string *userArray)
{
    cout << "Write out the string you want ";
    cin.ignore();
    for(int i = 0; i < stringNums; i++)
    {
        getline(cin, userArray[i]);
    }
}

/* ******************** printData ****************
 the compiler will print all of the strings that the user entered
 */

void printData(int stringNums, string *userArray)
{
    cout << endl;
    for (int i = 0; i < stringNums; i ++)
    {
        cout << userArray[i] << endl;
    }
}

/* ******************** Destroy *****************
 The compiler will free the dynamic array
 */

void Destroy(string *userArray)
{
    delete [] userArray;
}

/* ************ Execution Results ****************
 How many strings would you like in this program? 5
 Write out the string you want Panic! At The Disco
 Twenty One Pilots
 Hoodie Allen
 Bastille
 Atlas Genius
 
 Panic! At The Disco
 Twenty One Pilots
 Hoodie Allen
 Bastille
 Atlas Genius
 
 Process returned 0 (0x0)   execution time : 32.203 s
 Press any key to continue.
 */
