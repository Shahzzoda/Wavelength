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


    for(int ground=1; ground <= 6; ground++)
    {

        cout << "title";
        for(int i = 1; i <= 10; i++)
        {
            //cout << endl << ground << endl << excited << endl;
            cout << endl << endl << ground << endl << excited;
            excited += 1;
            wavelength = 1/(R*(pow(ground, -2)-pow(excited,-2)));
            wavelengthNm = wavelength * pow(10,7);
            cout << endl << wavelengthNm;

            //cout << endl << ground << endl << excited << endl;
        }
        cout << "\nhello" << endl << endl;
        excited -= 9;
        //cout << endl << ground << endl << excited << endl;
    }

    return 0;
}
