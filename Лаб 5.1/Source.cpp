#include <math.h>
#include <iostream>
#include <iomanip> 
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");// ������������ ����������� �������
    cout << "���, �����, ���, ����������� 1.2, �������� �. �., ������������ ������ �5" << endl;
    cout << "������������� ������ � ����������." << endl;
        int num, a;
        cin >> num;
        cout << dec << num << endl;
        cout << hex << num << endl;
        cout << oct << num << endl;
        a = num + 1;
        cout << dec << a << endl;
        cout << hex << a << endl;
        cout << oct << a << endl;
        int dec, bin = 0, j;
        cin >> dec;
        for (j = 0; dec > 0; j++)
        {
            bin += (dec % 2) * pow(10.0, j);
            dec /= 2;
        }
        cout << bin << num << endl;
        system("pause");

        return 0; 
    }