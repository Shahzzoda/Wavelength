#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    int excited = 1; //groundlvl orbital in each series
    float wavelength = 0; //calculated wavelength (cm)
    float wavelengthNm = 0; //wavelength in nanometers

    const float R = 109677.581; //constant that will be used in formula
    string seriesTitle (int);

    for(int ground=1; ground <= 6; ground++)
    {
        cout << "\t" << seriesTitle(ground) << " SERIES" << endl << "\t    (n= "<< ground << ")" << endl;
        cout << "Excited:\t\t" << "Wavelength:";
        for(int i = 1; i <= 10; i++)
        {
            excited += 1;
            wavelength = 1/(R*(pow(ground, -2)-pow(excited,-2)));
            wavelengthNm = wavelength * pow(10,7);
            cout << endl << excited << "\t\t\t" << wavelengthNm;
        }
        excited -= 9;
        cout << endl << endl << endl;
    }

    return 0;
}

string seriesTitle (int ground) {
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
    return "HUMPHREY";}
