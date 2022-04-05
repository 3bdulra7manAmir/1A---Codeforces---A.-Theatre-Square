// A. Theatre Square.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //Size of Theature Square "Rectangular" N * M «·ÿÊ· ›Ì «·⁄—÷
    //Size of Flafstone         "Square"    A * A ÿÊ· «·÷·⁄ ›Ì ‰›”Â
    cout << "Enter Theature Square Length = ";
    int Rec_Length;
    cin >> Rec_Length;
    
    cout << "Enter Theature Square Width = ";
    int Rec_Width;
    cin >> Rec_Width;

    int Rec_Surface = Rec_Length * Rec_Width;

    cout << "Enter Flafstone Length or Width = ";
    int Squ_L;
    cin >> Squ_L;
    
    int Squ_Surface = Squ_L * Squ_L;

    int Required_Flafstones = Rec_Surface / Squ_Surface;
    Required_Flafstones += 2;

    cout << Required_Flafstones;
}