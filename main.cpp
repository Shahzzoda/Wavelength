/*
Name: Hydrogen Star
Author: Shahzoda Davlatova
Date: 03-23-2017
Description:

Application:
    This application lists what wavelength would be released if an
electron of a hydrogen atom starts excited state, and then goes back to
the ground state. It prints a neat table with the ground state (n),
excited state (excited), the wavelength, and the name of the series it
falls under.
    The tables are organized in increasing ground states. Each table
prints the name of the series in the middle, in all capitals. Then has
the ground state in parenthesis as a reminded, directly underneath it.
It prints out two columns one with the excited state, and one with the
wavelength it produces. This format makes it easier for the scientist to
find what they need even if they only have the ground state of the
electron, name of the series it belongs to, or the wavelength recorded
for the atom.

The Science (in simple terms):
    The atom has a positive center and orbitals where negative particles
travel. The positive protons and negative electrons repel each other,
but cannot separate. When an electron gains enough energy, it will
escape the orbitals. However, when the appropriate amounts of energy is
applied, the electron will jump into a higher orbital level, entering
what is known as the 'excited' state. The original state of the electron
configuration is known as the ground state. Most of the electrons cannot
stay at the excited state, and therefore go back to the ground state. In
this demotion, a certain amount of energy is released. The energy is
released in wavelengths, and can be calculated. Astronomers use this
information to learn more about the stars, and nebulas, since majority
of the universe is made of hydrogen.

Format:
    Bottom up format, with the function that returns which series the
set of wavelengths belong to followed by the main function. The main
function consists of two for loops nested within each other. Outer loop
repeats six times to advance to the next series, and inner loop runs ten
times to print the excited and ground orbital levels as well as printing
the calculated wavelengths emitted.Inside the outer loop but not the
inner loops, the outfile statements are printed to ensure that each
table has a header.
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
