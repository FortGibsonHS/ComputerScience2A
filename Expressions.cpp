/* Integer variables height, length, and width are read from input, representing the height, the length, and the width of a box, respectively. Assign boxVolume with the volume of the box.
 *
 * Ex: If the input is 2 4 20, then the output is:
 *
 * Volume: 160
 *
 * Note: The volume of a box is calculated by multiplying the height, the length, and the width.
 */

#include <iostream>

int main(void) {
	int height;
	int length;
	int width;
	int boxVolume;
	
	std::cin >> height;
	std::cin >> length;
	std::cin >> width;

   /* Your code goes here */
   
   std::cout << "Volume: " << boxVolume;

   return 0;
}
