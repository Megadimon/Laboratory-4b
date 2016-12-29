#include <stdio.h>
#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <conio.h>
using namespace std;

struct SUBJECT 
{

	int Rus;
	int Mat;
	int Phi;
};

struct STUDENTS  
{
	char fio[128]; 
	SUBJECT sub;
	char supply[128]; 
	char sex[10];   
	int age;
};

int main(void)
{
	STUDENTS *pS = 0;
	int n = 0; 
	int R = 0,M = 0,P = 0;

	cout << " The number of array elements: "; 
	cin >> n; 
	cout << endl;

	pS = (STUDENTS *)malloc(n*sizeof(STUDENTS)); 

	for (int i = 0; i<n; i++)
	{
		cout << " Student " << i+1 << endl;
		cout << " Full name: "; 
		cin >> pS[i].fio;
		_flushall();  
		cout << " Sex: ";
		cin >> pS[i].sex;
		cout << " Age: ";
		cin >> pS[i].age;  
		cout << " Supply: ";
		cin >> pS[i].supply; 
		cout << " Subjects";
		cout << endl << " RUS: ";
		cin >> pS[i].sub.Rus;
		cout << endl << " MAT: ";
		cin >> pS[i].sub.Mat;
		cout << endl << " Physics: ";
		cin >> pS[i].sub.Phi;
	}

	for (int i = 0; i<n; i++) 
	{
		cout << endl << "Student " << i+1 << " "<< pS[i].fio << " " << pS[i].sex << " "<< pS[i].age << " ";
		cout << "RUS = " << pS[i].sub.Rus << " MAT = " << pS[i].sub.Mat << " PHI = " << pS[i].sub.Phi;
	}
     

	for (int i = 0; i<n; i++) 
	{
		 R += pS[i].sub.Rus;
		 M += pS[i].sub.Mat;
         P += pS[i].sub.Phi;

	}
	R=R/n;
	M=M/n;
	P=P/n;

	cout << endl << " The mean value in subjects: " << "RUS= " << R << " MAT= " << M << " PHY= "<< P;
	
	free(pS);

		cout << endl << endl << "Press any button to exit the program" << endl;
	_getch();

	return 0;
}