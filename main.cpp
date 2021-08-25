#include <iostream>

using namespace std;

int main(int argc, char* argv[], char*envp[])
{
	cout << "Num of args (argc) = " << argc << endl;
	cout << "Program name is " << argv[0];
	cout << "\nOther args are " << endl;
	for (size_t i = 1; i < argc; i++)
		cout << "argv[" << i << "] = " << argv[i] << endl;
	cout << "\nEnvironmental settings are " << endl;
	for (size_t i = 0; i < argc; i++)
		cout << "envp[" << i << "] = " << envp[i] << endl;
	return 0;
}