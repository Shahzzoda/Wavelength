# Wavelength

Application:
    This application lists what wavelength would be released if an electron of a hydrogen atom starts excited state, and then goes back to the ground state. It prints a neat table with the ground state (n), excited state (excited), the wavelength, and the name of the series it
falls under.

The tables are organized in increasing ground states. Each table prints the name of the series in the middle, in all capitals. Then has the ground state in parenthesis as a reminded, directly underneath it. It prints out two columns one with the excited state, and one with the wavelength it produces. This format makes it easier for the scientist to find what they need even if they only have the ground state of the electron, name of the series it belongs to, or the wavelength recorded for the atom.

The Science:
    The atom has a positive center and orbitals where negative particles travel. The positive protons and negative electrons repel each other, but cannot separate. When an electron gains enough energy, it will escape the orbitals. However, when the appropriate amounts of energy is applied, the electron will jump into a higher orbital level, entering what is known as the 'excited' state. The original state of the electron configuration is known as the ground state. Most of the electrons cannot stay at the excited state, and therefore go back to the ground state. In this demotion, a certain amount of energy is released. The energy is released in wavelengths, and can be calculated. Astronomers use this information to learn more about the stars, and nebulas, since majority of the universe is made of hydrogen.

Format:
    Bottom up format, with the function that returns which series the set of wavelengths belong to followed by the main function. The main function consists of two for loops nested within each other. Outer loop repeats six times to advance to the next series, and inner loop runs ten times to print the excited and ground orbital levels as well as printing the calculated wavelengths emitted.Inside the outer loop but not the inner loops, the outfile statements are printed to ensure that each table has a header.
