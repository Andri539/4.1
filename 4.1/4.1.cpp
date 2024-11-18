#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N;
	cout << "������ �������� N: ";
	cin >> N;

	
	double sum1 = 0;
	int k = 1;
	while (k <= N) {
		sum1 += (1 + sqrt(1 + k * k)) / (k * k);
		k++;
	}

	
	double sum2 = 0;
	k = 1;
	do {
		sum2 += (1 + sqrt(1 + k * k)) / (k * k);
		k++;
	} while (k <= N);

	
	double sum3 = 0;
	for (k = 1; k <= N; k++) {
		sum3 += (1 + sqrt(1 + k * k)) / (k * k);
	}

	
	double sum4 = 0;
	for (k = N; k >= 1; k--) {
		sum4 += (1 + sqrt(1 + k * k)) / (k * k);
	}

	
	cout << "��������� (while): " << sum1 << endl;
	cout << "��������� (do-while): " << sum2 << endl;
	cout << "��������� (for, �����������): " << sum3 << endl;
	cout << "��������� (for, ���������): " << sum4 << endl;

	return 0;
}
