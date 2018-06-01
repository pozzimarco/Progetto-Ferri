#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include "Origine.h"
#include <conio.h>
using namespace std;

void main() {

	cout << "dimmi n" << endl;
	int n;
	int i = 0;
	int j;
	cin >> n;

	vector<int>vec;
	vec.resize(n);
	for (int i = 0; i < n; i++) {

		int x = 0;
		do {
			cout << "inserisci numero" << endl;
			cin >> x;
			if (x > 9 || x < 0)
				cout << "errore rinserisci" <<endl;
		} while (x>9 || x<0);
		vec[i] = x;
	}

	int p=Fattoriale::fatt(n);
	cout << "il numero delle permutzioni di " << n << " e' " << p << endl;

	
	for (int c = 0; c < p; c++) {
		for (j = 0; j < n; j++) {
			cout << vec[j];

		}
		cout << endl;

		for (j = 0; j < n - 1; j++) {
			int s;
			s = vec[j];
			vec[j] = vec[j + 1];
			vec[j + 1] = s;

		}
	}
		_getch();

}