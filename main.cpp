#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    int ground = 1; //groundlvl orbital in each series
    float wavelength = 0; //calculated wavelength (cm)
    float wavelengthNm = 0; //wavelength in nanometers

    const float R = 109677.581; //constant that will be used in formula


    for(int excited=1; excited <= 6; excited++)
    {
        cout << "title" << endl;
        for(int i = 1; i <= 10; i++)
        {
            cout << ground << endl;
            ground += 1;

            wavelength = 1/(R*(pow(ground, -2)-pow(excited,-2)));
            wavelengthNm = wavelength * pow(10,7);
            cout << wavelengthNm;
        }
        cout << "\nhello" << endl << endl;
        ground -= 9;
    }

    return 0;
}
