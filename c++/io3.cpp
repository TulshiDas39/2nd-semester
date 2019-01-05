#include <iostream>
#include <iomanip>

using namespace std;

int main (void)
{
	//string s = "Niraj is a newcome today";
	//cout << s << endl;
	
	//int i=120;
	//float f =23.45;
	//double d = 3.45678976;
	
	//cout << i << " " << f << "\t" << d << endl;
	
	//cout << setprecision(8) << d << endl;
	
	string name[3] = {"Tahlil Zibran", "Mahir Mahbub", "Shamima Akter"};
	int age[3] = {7, 154, 19};
	double salary[3] = {12.345678, 1111.445, 2.11};
	
	cout << "Name" << "\t\t\t" << "Age" << "\t\t" << "Salary" << endl;
	
	for(int i=0; i<3; i++)
	{
		cout 	<< name[i] << "\t\t" << setw(3) << setfill(' ') << age[i] << "\t\t" 
				<< setw(9) << setfill('x') << setprecision(8) << salary[i] << endl;
	}
	
	return 0;
}
