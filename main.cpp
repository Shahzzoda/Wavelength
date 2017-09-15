/*
Name: Hydrogen Star
Author: Shahzoda Davlatova
Date: 03-23-2017
*/

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>

using namespace std;

/**********************************************************************/

string seriesTitle (int ground)
{
    if (ground == 1)
        return "LEYMAN";
    else if (ground == 2)
        return "BALMER";
    else if (ground == 3)
        return "PASCHEN";
    else if (ground == 4)
        return "BRACKET";
    else if (ground == 5)
        return "PFUND";
    else if (ground == 6)
        return "HUMPHREY";
}

/*********************************************************************/

int main()
{
    //initialization
    int excited = 1;             //excitedlvl orbital in each series
    float wavelength = 0;        //calculated wavelength (cm)
    float wavelengthNm = 0;      //converted wavelength (nm)
    const float R = 109677.581;  //constant that will be used in formula
    string seriesTitle (int);    //return the series

    ofstream outfile;
    outfile.open("HydrogenWL.txt");

    //fail safe for outfile opening
    if ( !outfile.is_open() ){
        outfile << "ERROR: Page cannot be opened";
        exit(1);
    }

    for(int ground=1; ground <= 6; ground++) {

        outfile << "\t" << seriesTitle(ground) << " SERIES" << endl
             << "\t    (n = "<< ground << ")" << endl;
        outfile << "Excited:\t\t" << "Wavelength:";

        outfile.setf(ios::fixed,ios::floatfield);
        outfile.precision(3);

        for(int i = 1; i <= 10; i++) {
            excited += 1;
            wavelength = 1/(R*(pow(ground, -2)-pow(excited,-2)));
            wavelengthNm = wavelength * pow(10,7);
            outfile << endl << excited << "\t\t\t" << wavelengthNm;
        }//end of wavelength loop


        excited -= 9;
        outfile << endl << endl << endl;
    }//end of series loop

    outfile.close();
    return 0;
} //end of main
