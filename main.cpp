#include <iostream>
#include <ctime>

using namespace std;


//В языке C++ оператор typeid возвращает ссылку на объект 
//type_info, описывающий тип объекта, к которому принадлежит 
//оператор typeid.

template <typename T>
void Print(T* t, int size)
{
	if (typeid(t) != typeid(char**)) {
		for (int i = 0; i < size; i++) {
			cout << t[i] << ' ';
		}
		cout << endl;
	}
	else {
		for (int i = 0; i < size; i++) {
			cout <<hex<<int(t[i])<< ' ';
		}
		cout << endl;
	}
}

template <typename T>
void Sort(T* t, int size)
{
	int step;
	cout << "Исходный массив: " << endl << endl;
	Print(t, size);
	cout << "Размер шага: ";
	cin >> step;
	T k;
	for (int i = 0; i < size-step+1;)
	{
		
			k = t[i +step-1];
			t[i +step - 1] = t[i];
			t[i] = k;
			i = i + step;
		}
	cout << "Массив после сортировки: " << endl << endl;
	Print(t, size);
	}
	


int main()
{
	setlocale(LC_ALL, "Rus");

	int c;
	srand(time(NULL));
	int size = 1 + rand() % 20;
	bool flag = true;
	
	int *iPtr = new int[size];
	char *cPtr = new char[size];
	float *fPtr = new float[size];
	double *dPtr = new double[size];
	char **chPtr = new char *[size];

	for (int i = 0; i < size; i++)
	{
		iPtr[i] = rand() % 21;
		cPtr[i] = rand() % 78 + 48;
		fPtr[i] = float(rand() % 20 + 1) / float(rand() % 20 + 1);
		dPtr[i] = (double(rand() % 20) + 1) / (double(rand() % 20) + 1);

		char* temp = new char;
		*temp = rand() % 78 + 48;
		chPtr[i] = temp;
	}
	
	while(flag)
	{
		do
		{
			system("cls");
			cout << "Пожалуйста, выберите тип данных: \n\n 1 - int;\n 2 - char;\n 3 - float;\n 4 - double;\n 5 - char*;\n\n 0 - выход;" << endl;
			cin >> c;
			if (cin.fail()) {
				c = -1;
				cin.clear();
				cin.ignore(10000, '\n');
			}
	} while (c < 0 || c > 5);
		switch (c)
		{
		case 1:
			system("cls");
	
			Sort(iPtr, size);
			
			break;
		case 2:
			system("cls");
	
			Sort(cPtr, size);
		
			break;
		case 3:
			system("cls");
			
			Sort(fPtr, size);
		
			break;
		case 4:
			system("cls");
	
			Sort(dPtr, size);
		
			break;
		case 5:
			system("cls");
		
			Sort(chPtr, size);
			
			break;
		case 0: 
			flag = false; break;
		}
		system("pause");
	}

	return 0;
}