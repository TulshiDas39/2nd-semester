#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main (void)
{
	
	ifstream iFile;
	iFile.open("goruFight.jpg", ios::binary);
	
	ofstream oFile;
	oFile.open("out.jpg", ios::binary);
	
	if(iFile.is_open() && oFile.is_open())
	{
		unsigned char ch;
		iFile >> ch;

		
		while (!iFile.eof())
		{
			oFile << ch;
			iFile >> ch;
		}
		
		iFile.close();
		oFile.close();
	}
	else 
	{
		cout << "Could not open file" << endl;
	}
	return 0;
}





























