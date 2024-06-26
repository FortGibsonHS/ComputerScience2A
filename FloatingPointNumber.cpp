/*Given sphereRadius, compute the volume of a sphere and assign sphereVolume with the result. Use (4.0 / 3.0) to perform floating-point division, instead of (4 / 3) which performs integer division.
 *
 *Volume of sphere = (4.0 / 3.0) π r3 (Hint: r3 can be computed using *. Use the constant M_PI for the value of pi.)
 */

#include <iostream>
#include <iomanip>
#include <math.h>

int main(void) {
    // M_PI can be used to access the value of pi. This comes from the math.h library.
    double sphereVolume;
    double sphereRadius;
    
    std::cin >> sphereRadius;

    /* Your solution goes here  */
    
    std::cout << std::fixed << std:: setprecision(2);
    std::cout << "Volume: " << sphereVolume;

    return 0;
}
