#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	//variabili di input
	int size_x = 0, size_y = 0, bit_depth = 8; // 8 bit = 256 color
	bool running = true;
	string modify_bit_depth = "n";

	//variabili di calcolo
	int pixel_count = 0; // PC = widht (in Px) * height (in Px)
	//RESULT IS IN BIT!
	int file_size = 0;   // FS = PixelCount * BitDepth 

	//interaction with user
	cout << "Calculator of image weight: " << endl;
	//input the size of image
	cout << "Vertical size (in PIXEL): " << endl;
	cin >> size_y;
	cout << "Horizontal size (in PIXEL): " << endl;
	cin >> size_x;
	//ask type of bit_depth
	cout << "The type of bit depth is 8 bit, want change it?" << endl;

	while (running == true) {
		cout << "n = [NO] (8bit) | y = [YES] (other)" << endl;
		cout << "Choose -> ";
		cin >> modify_bit_depth;
		//check the choose
		if (modify_bit_depth == "y" || modify_bit_depth == "Y" || modify_bit_depth == "Yes") {
			//change bit depth
			cout << "The most famous bit dephts are:" << endl;
			cout << "(8bit - 16bit - 24bit - 32bit - 64bit or custom)" << endl;
			cout << "Enter only the numeric value -> ";
			cin >> bit_depth;
			cout << "Now the bit depth are: " << bit_depth << "bit" << endl;
			running = false;
		}
		else if (modify_bit_depth == "n" || modify_bit_depth == "N" || modify_bit_depth == "No") {
			//dont change bit depth
			running = false;
		}
		else {
			//print error
			cout << "Sorry, but there was some mistake, Retry" << endl;
		}
	}

	//calculate the size
	pixel_count = size_x * size_y;
	file_size = pixel_count * bit_depth;

	//print the data generated
	cout << "\nResult:" << endl;
	cout << "Horizontal size: " << size_x << " px" << endl;
	cout << "Vertical size: " << size_y << " px" << endl;
	cout << "Bit depht: " << bit_depth << " bit" << endl;
	cout << "Pixel count: " << pixel_count << " pixel" << endl;
	cout << "Image size: " << file_size << " bit" << endl;

	//end of the code
	system("PAUSE");
	return 0;
}