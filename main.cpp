/*
 Dennis Bui
 CIS 22B
 Winter 2016
 Assignment A
 Program A2
 This program exercises the different string class operators
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string string1, string2, string3, string4, string5, string6;
    int firstH;
    int lastL;
    
    cout << "Enter a greeting string i.e. Good Morning "<<endl;
    getline(cin, string1);
    cout << "Exercise 1" << endl;
    cout << string1 << endl;
    
    string2 = string1;
    string2 += " sleepy heads";
    cout << "Exercise 2" << endl;
    cout << string2 << endl;
    
    string3 = "bellow cello fellow hello mellow Novello Othello pillow Rollo solo yellow";
    cout << "Exercise 3" << endl;
    firstH = string3.find('h');
    cout << firstH << endl;
    
    string4.empty();
    string4 = string3;
    cout << "Exercise 4" <<endl;
    cout << string4.replace(firstH, 1, "J") << endl;
    
    string5 = string3;
    cout << "Exercise 5"<<endl;
    lastL = string5.find_last_of('l');
    cout << lastL <<endl;
    
    string6 = string3;
    cout << string6.erase(lastL+1) << endl;
    
}

/* *************** Execution Results ***********
 Enter a greeting string i.e. Good Morning
 Good Evening
 Exercise 1
 Good Evening
 Exercise 2
 Good Evening sleepy heads
 Exercise 3
 20
 Exercise 4
 bellow cello fellow Jello mellow Novello Othello pillow Rollo solo yellow
 Exercise 5
 70
 bellow cello fellow hello mellow Novello Othello pillow Rollo solo yell
 
 Process returned 0 (0x0)   execution time : 2.747 s
 Press any key to continue.
 */