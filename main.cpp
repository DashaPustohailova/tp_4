#include <iostream>
#include "Stack.h"
#include <ctime>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Rus");
	int c = 0, s = 0;
	int l;
	srand(time(NULL));
	int size = 5 + rand() % 6;//%(�������� ����� ���������+1)+����� �������, �.�. �� 5 �� 10

	Stack s_1(size,1), s_2(size,1);
	
	Stack s_3(size);
	do
	{
		system("cls");
		cout << "������������!" << "\n" << "����������, �������� ��������:" << "\n\n" << "  1.  �������� �����;" << "\n" << "  2.  ������� �� ��������� ������� ����� �������� �������;" << "\n"  << "\n" << "  4.  ������� ����� �� ��������� �����;" << "\n" << "  5.  ��������� ����� �� ������������ �����; " << "\n" << "  6.  ���� 1 = ���� 2;" << "\n" << "  7.  ��������� �� ������� ���������� ��������� � ������;" << "\n" << "  8.  ����� ������� ������� �����, ������� ������ ���������������� ��� �������� ������� �����;" << "\n" << "  9.  ����� ������� ������� �����, ������� ������ ���������������� ��� �������� ������� �����;" << "\n" << "  10. �������� �������� ����� �� -1;"<< "\n"<<"  11. �������� ����;" << "\n\n" << "  0. ����� �� ���������." << endl;
		cin >> c;
		switch (c)
		{
		case 1:
			system("cls");
			
			cout << "1 ����"<<endl;
			cout << s_1;
			cout << endl << endl;
			cout << "2 ����" << endl;
			cout << s_2;
			cout << endl << endl;
		
			system("pause>null");
			break;
		case 2:
			system("cls");
			cout << "1 ����(��������)" << endl;
			cout << s_1;
			cout << endl << endl;
			cout << "2 ����" << endl;
			cout << s_2;
			cout << endl << endl;
			s_1 -= s_2;
			cout << "1 ����" << endl;
			cout << s_1;
			cout << endl << endl;
			
			system("pause>null");
			break;
		case 3:
		
		
		
			system("pause>null");
			break;
		
		case 4:
			system("cls");

			cout << "������� �����: " << endl;
			cin >> l;
			cout << "C ����� ������ �� ������ ��������? \n 1 - ������; 2 - ������" << endl;
			cin >> s;
			cout << endl << endl;
			switch (s)
			{
			case 1:

				s_1 - l;
				cout << "���������: " << s_1;
				break;
			case 2:

				s_2 - l;
				cout << "���������: " << s_2;
				break;
			}



			system("pause>null");
			break;

		case 5:
			system("cls");
		
			cout << "1 ����" << endl;
			cout << s_1;
			cout << endl << endl;
			cout << "2 ����" << endl;
			cout << s_2;
			cout << endl << endl;
			cout<<"������� �����: " << endl;
			cin >> l;
			cout << "����� ���� �� ������ ��������? \n 1 - ������; 2 - ������" << endl;
			cin >> s;
			system("cls");
			switch (s)
			{
			case 1:
				cout << s_1 << endl;
				s_1 / l;
				cout << s_1;
				break;
			case 2:
				cout << s_2 << endl;
				 s_2 / l;
				 cout << s_2;
				break;
			}
			

			system("pause>null");
			break;
		case 6:
			system("cls");
			cout << "1 ����(��������)" << endl;
			cout << s_1;
			cout << endl << endl;
			cout << "2 ����(��������)" << endl;
			cout << s_2;
			cout << endl << endl;
			s_1 = s_2;
			cout << "1 ����" << endl;
			cout << s_1;
			cout << endl << endl;
			cout << "2 ����" << endl;
			cout << s_2;
			system("pause>null");
			break;
		case 7:
			system("cls");
			cout << "1 ����" << endl;
			cout << s_1;
			cout << endl << endl;
			cout << "2 ����" << endl;
			cout << s_2;
			cout << endl << endl;
			s_1 == s_2;
			system("pause>null");
			break;
		case 8:
			system("cls");
			cout << "1 ����" << endl;
			cout << s_1;
			cout << endl << endl;
			cout << "2 ����" << endl;
			cout << s_2;
			cout << endl << endl;

			s_1 > s_2;
			system("pause>null");
			break;
		case 9:
			system("cls");
			cout << "1 ����" << endl;
			cout << s_1;
			cout << endl << endl;
			cout << "2 ����" << endl;
			cout << s_2;
			cout << endl << endl;

			s_1 < s_2;
			system("pause>null");
			break;
			system("pause>null");
			break;
		case 10:
			system("cls");
			cout << "����� ���� �� ������ ��������? \n 1 - ������; 2 - ������; 3 - ���;" << endl;
			cin >> s;
			system("cls");
			switch (s)
			{
			case 1:
				cout << "1 ����(��������)" << endl;
				cout << s_1;
				cout << endl << endl;
				!s_1;
				cout << "1 ����" << endl;
				cout << s_1;
				cout << endl << endl;
				break;
			case 2:
				cout << "2 ����(��������)" << endl;
				cout << s_2;
				cout << endl << endl;
				!s_2;
				cout << "2 ����" << endl;
				cout << s_2;
				cout << endl << endl;
				break;
			case 3:
				cout << s_1;
				cout << endl << endl;
				!s_1;
				cout << "1 ����" << endl;
				cout << s_1;
				cout << endl << endl;
				cout << "2 ����(��������)" << endl;
				cout << s_2;
				cout << endl << endl;
				!s_2;
				cout << "2 ����" << endl;
				cout << s_2;
				cout << endl << endl;
				break;
			}
			system("pause>null");
			break;
		case 11:
			system("cls");
			cout << "����� ���� �� ������ ��������? \n 1 - ������; 2 - ������" << endl;
			cin >> s;
			system("cls");
			switch (s)
			{
			case 1:
				cin >> s_1;
				break;
			case 2:
				cin >> s_2;
				break;
			}
			system("pause>null");
			break;
		}

	} while (c);
}