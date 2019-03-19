#include "Class2.h"
#include "pch.h"
#include <iostream>
#include <cmath>
#include <string>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main() {

	string N, M;
	int n, m, z = 0;

	ifstream file("C:\\Users\\imba2511\\Desktop\\c_plus.TXT"); // onen file
	if (file.is_open())
	{
		while (getline(file, N))
		{
			if (z == 0) {
				istringstream(N) >> n;
				z += 1;
			}
			else istringstream(N) >> m;
		}
			cout << "Rows and Colm of MATRIX" << endl;
			cout <<"  "<< n << endl;	cout <<"  "<< m <<"\n"<<"-----------------------------------------------------------------" << endl;
	}
	file.close();   

	///////////////////////////////////////////// creating 

	int **arr = new int *[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[m];
	}

	///////////////////////////////////////////// fill up

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = rand()%89 + 10;
		}

	}

	/////////////////////////////////////////////// showing main matrix

	for (int i = 0; i < n; i++)
	{

			for (int j = 0; j < m; j++)
			{
				cout << "    " << arr[i][j] << "    ";
			}
		cout << endl << endl;
	}

	cout << "----------------------------------------------------------------" << endl;
	////////////////////////////////////////////////  showingresult matrix

	for (int i = 0; i < n; i++)
	{
		if (i%2 == 0) {

			for (int j = 0; j < m; j++)
			{
				cout << "    " << arr[i][j] << "    ";
			}
			cout << endl << endl;
		}
	}
	//////////////////////////////////////////////////// deletion
	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;

	return 0;
}

	