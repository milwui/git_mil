#include "module_1.h"

struct Book
{
	string surname;
	string tilte;
	int year;
};
void enter() {
	ofstream fout("Bibl.txt");
	int n;
	cout << "������� ���������� ����: ";
	cin >> n;

	Book* arr = new Book[n];
	for (int i = 0; i < n; i++)
	{
		cout << "����� ", i + 1, ":\n";
		cout << "������� ������: ";
		cin >> arr[i].surname;
		cout << "�������� �����: ";
		cin >> arr[i].tilte;
		cout << " ��� �������: ";
		cin >> arr[i].year;
		fout << arr[i].surname << " " << arr[i].tilte << " " << arr[i].year << endl;
	}
	fout.close();
	delete[] arr;
}