#include <iostream>
#include <string>
#include <sstream>

using namespace std;


void cleanUp(string &s)
{
	string problems = "@#$%^&*,.";
	
	for(int i=0; i<s.length(); i++)
	{
		for(int j=0; j<problems.length(); j++)
		{
			if(s[i]==problems[j]) s[i] = ' ';
		}
	}
}

int main (void)
{
	/*
	Reading integers from a file
	
	int n;
	
	while (cin >> n)
	{
		cout << n << endl;
	}
	
	int n;
	
	cin >>n;
	
	while (!cin.eof())
	{
		cout << n << endl;
		cin >> n;
	}
	*/
	
	/*
	Reading one character at a time
	char ch;
	
	cin >>ch;
	
	while (!cin.eof())
	{
		cout << ch;
		cin >> ch;
	}
	
	char ch;
	
	cin.get(ch);
	
	while (!cin.eof())
	{
		cout << ch;
		cin.get(ch);3
	}
	*/
	
	/*
	Reading fle with n lines
	
	int n;
	string s;
	
	cin >>n;
	getline(cin,s);
	
	for(int i=0; i<n; i++)
	{
		getline(cin,s);
		cout << s << endl;
	}
	*/
	
	int n;
	string s;
	
	cin >>n;
	getline(cin,s);
	
	
	for(int i=0; i<n; i++)
	{
		getline(cin,s);
		cleanUp(s);
		istringstream iss(s); // iss is a stream like cin : string -> stream
		
		string word;
		int count =0;
		
		while(iss >> word)
			count ++;
		
		cout << count << endl;
	}
	
	return 0;
}











