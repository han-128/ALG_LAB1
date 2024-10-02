#include <iostream>
#include <string>
#include <fstream>

using namespace std;


class KS


{


private:
	int workshopALL;
	int workshopWORK;
	int eff;
	string nameKS;

public:
	KS() {};
	KS(int WALL, int WWORK, int e, string nn) :nameKS(nn), workshopALL(WALL), workshopWORK(WWORK), eff(e) {}
	friend void outData();




	int addKS()
	{
		int newALL;
		int newWORK;
		int newEFF;
		string newName;

		system("cls");

		if ((workshopALL == 0) || (workshopWORK == 0) || (nameKS == "") || (eff == 0))
		{
			cout << "Введите количество цехов: ";
			cin >> newALL;
			system("cls");
			if (cin.fail() || cin.peek() != '\n')
			{
				cin.clear();
				cin.ignore(1000, '\n');
				system("cls");
				cout << "Введено некорректное количество цехов\n\n";
				return 1;
			}

			else
			{
				if (newALL > 0)
					workshopALL = newALL;
			}




			cout << "Введите количество рабочих цехов: ";
			cin >> newWORK;
			system("cls");
			if (cin.fail() || cin.peek() != '\n')
			{
				cin.clear();
				cin.ignore(1000, '\n');
				system("cls");
				cout << "Введено некорректное количество рабочих цехов\n\n";
				return 1;
			}

			else
			{
				if ((newWORK > 0) && (newWORK <= workshopALL))
					workshopWORK = newWORK;
				else
				{
					cout << "Введено некорректное количество рабочих цехов\n\n";
					return 1;
				}
			}




			cout << "Введите коэффициент эффективности: ";
			cin >> newEFF;
			system("cls");
			if (cin.fail() || cin.peek() != '\n')
			{
				cin.clear();
				cin.ignore(1000, '\n');
				system("cls");
				cout << "Введён некорректный коэффициент эффективности\n\n";
				return 1;
			}

			else
			{
				if (newEFF > 0)
					eff = newEFF;
			}




			cin.clear();
			cout << "Введите имя: ";
			cin >> newName;
			if (newName != "")
			{
				nameKS = newName;
				system("cls");
			}
			else
			{
				system("cls");
				cout << "Введено некорректное имя\n\n";
				return 1;
			}





		}
		else
		{
			cout << "У вас уже есть КС\n\n";
			return 1;
		}
	}

	void changeName()
	{
		string newName;
		if ((workshopALL == 0) || (workshopWORK == 0) || (nameKS == "") || (eff == 0))
		{
			system("cls");
			cout << "У вас нет КС" << "\n\n";
		}
		else
		{
			system("cls");
			cout << "Введите новое имя: ";
			cin >> newName;
			system("cls");
			if (newName != "")
				nameKS = newName;
			else
			{
				system("cls");
				cout << "Введено некорректное имя";
			}
		}


	}

	void changeALL()
	{
		int newALL;
		if ((workshopALL == 0) || (workshopWORK == 0) || (nameKS == "") || (eff == 0))
			cout << "У вас нет КС" << "\n";
		else
		{
			system("cls");
			cout << "Введите новое количество цехов: ";
			cin >> newALL;
			system("cls");
			if (cin.fail() || cin.peek() != '\n')
			{
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Введено некорректное количество цехов\n\n";
			}

			else
			{
				if ((newALL > 0) && (newALL >= workshopWORK))
					workshopALL = newALL;
				else
				{
					cout << "Введено некорректное количество цехов\n\n";
				}
			}
		}
	}

	void changeWORK()
	{
		int newWORK;
		if ((workshopALL == 0) || (workshopWORK == 0) || (nameKS == "") || (eff == 0))
			cout << "У вас нет КС" << "\n";
		else
		{
			system("cls");
			cout << "Введите новое количество рабочих цехов: ";
			cin >> newWORK;
			system("cls");
			if (cin.fail() || cin.peek() != '\n')
			{
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Введено некорректное количество рабочих цехов\n\n";
			}

			else
			{
				if ((newWORK > 0) && (newWORK <= workshopWORK))
					workshopALL = newWORK;
				else
				{
					cout << "Введено некорректное количество рабочих цехов\n\n";
				}
			}
		}
	}

	void changeEFF()
	{
		int newEFF;
		if ((workshopALL == 0) || (workshopWORK == 0) || (nameKS == "") || (eff == 0))
		{
			system("cls");
			cout << "У вас нет КС" << "\n\n";
		}
		else
		{
			system("cls");
			cout << "Введите новый коэффициент эффективности: ";
			cin >> newEFF;
			system("cls");
			if (cin.fail() || cin.peek() != '\n')
			{
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Введёе некорректный коэффициент эффективности\n\n";
			}

			else
			{
				if (newEFF > 0)
					eff = newEFF;
				else
				{
					cout << "Введёе некорректный коэффициент эффективности\n\n";
				}
			}
		}
	}

	void showInfoKS()
	{
		if ((workshopALL == 0) || (workshopWORK == 0) || (nameKS == "") || (eff == 0))
		{
			system("cls");
			cout << "У вас нет КС, так как заданные для неё данные некорректны " << "\n" << "\n";
		}
		else
		{
			system("cls");
			cout << "Параемтры КС: " << "\n";
			cout << "Название: " << nameKS << "\n";
			cout << "Всего цехов: " << workshopALL << " \n";
			cout << "Цехов в работе: " << workshopWORK << " \n";
			cout << "Коэффициент эффективности: " << eff << " \n" << "\n";
		}

	}

	void inData()
	{
		ofstream in;
		in.open("data.txt");
		if (in.is_open())
		{

		}
	}





};



class pipeline
{
private:
	float length;
	float diametr;
	bool repair;
	string name;

public:
	pipeline(float l, float d, bool r, string n) : length(l), diametr(d), repair(r), name(n) {}



	int addPipe()
	{
		float newLength;
		float newDiametr;
		int newRepair;
		string newName;



		system("cls");

		if ((length == 0) || (diametr == 0) || (name == "") || (repair != 0) || (repair != 1))
		{
			cout << "Введите длину: ";
			cin >> newLength;
			system("cls");
			if (cin.fail() || cin.peek() != '\n')
			{
				cin.clear();
				cin.ignore(1000, '\n');
				system("cls");
				cout << "Введена некорректная длина\n";
				return 1;
			}

			else
			{
				if (newLength > 0)
					length = newLength;
				else
				{
					cout << "Введена некорректная длина\n";
					return 1;
				}
			}


			cin.clear();
			system("cls");
			cout << "Введите диаметр: ";
			cin >> newDiametr;
			system("cls");
			if (cin.fail() || cin.peek() != '\n')
			{
				cin.clear();
				cin.ignore(1000, '\n');
				system("cls");
				cout << "Введён некорректный диаметр\n";
				return 1;
			}

			else
			{
				if (newDiametr > 0)
					diametr = newDiametr;
			}


			cin.clear();
			cout << "Введите имя: ";
			cin >> newName;
			if (newName != "")
				name = newName;
			else
			{
				system("cls");
				cout << "Введено некорректное имя\n";
				return 1;
			}



			cin.clear();
			system("cls");
			cout << "Введите состояние работы (0 - не работает, 1 - работает): ";
			cin >> newRepair;
			if (newRepair == 0 || newRepair == 1)
			{
				cin.clear();
				cin.ignore(1000, '\n');
				system("cls");
				repair = newRepair;
			}
			else
			{
				system("cls");
				cout << "Введено некорректное значение состояния работы\n";
				return 1;
			}
		}
		else
		{
			cout << "У вас уже есть труба\n\n";
			return 1;
		}
	}

	void changeLength()
	{
		float newLength;
		if ((length == 0) && (diametr == 0) && (name == ""))
			cout << "У вас нет трубы" << "\n";
		else
		{
			system("cls");
			cout << "Введите новую длину: ";
			cin >> newLength;
			if (cin.fail() || cin.peek() != '\n')
			{
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "Введена некорректная длина";
			}

			else
			{
				if (newLength > 0)
					length = newLength;
				else
				{
					cout << "Введена некорректная длина";
				}
			}
		}
	}

	void changeDiametr()
	{
		float newDiametr;
		if ((length == 0) && (diametr == 0) && (name == ""))
			cout << "У вас нет трубы" << "\n";
		else
		{
			system("cls");
			cout << "Введите новый диаметр: ";
			cin >> newDiametr;
			if (newDiametr > 0)
				diametr = newDiametr;
			else
			{
				cout << "Введён некорректный диаметр";
			}
		}
	}

	void changeRepain()
	{
		bool newRepair;
		if ((length == 0) && (diametr == 0) && (name == ""))
			cout << "У вас нет трубы" << "\n";
		else
		{
			system("cls");
			cout << "Введите новое состояние работы: ";
			cin >> newRepair;
			if ((newRepair == 0) || (newRepair == 1))
				repair = newRepair;
			else
			{
				cout << "Введено некорректное значение состояния работы";
			}
		}
	}

	void changeName()
	{
		string newName;
		if ((length == 0) && (diametr == 0) && (name == ""))
			cout << "У вас нет трубы" << "\n";
		else
		{
			system("cls");
			cout << "Введите новое имя: ";
			cin >> newName;
			if (newName != "")
				name = newName;
			else
			{
				cout << "Введено некорректное имя";
			}
		}


	}

	void showInfo()
	{
		if ((length == 0) && (diametr == 0) && (name == ""))
		{
			system("cls");
			cout << "У вас нет трубы, так как заданные для неё данные некорректны " << "\n" << "\n";
		}
		else
		{
			system("cls");
			cout << "Параметры трубы: " << "\n";
			cout << "Название: " << name << "\n";
			cout << "Длина: " << length << " м\n";
			cout << "Диаметр: " << diametr << " см\n";
			cout << "Состояние работы: " << repair << " \n" << " \n";
		}

	}
};




void outData()
{
	KS ks;


	string temp;

	ifstream inputFile("data.txt");

	inputFile >> temp;
	ks.workshopALL = stoi(temp);

	inputFile >> temp;
	ks.workshopWORK = stoi(temp);

	inputFile >> temp;
	ks.eff = stoi(temp);

	inputFile >> ks.nameKS;
}




int main()
{
	setlocale(LC_ALL, "Russian");
	pipeline pipeline(0, 0, 0, "");
	KS KS(0, 0, 0, "");
	int chose;


	do
	{
		cout << "1. Показать информацию о трубе\n";
		cout << "2. Показать информацию о КС\n";
		cout << "------------------------------\n";
		cout << "3. Добавить трубу\n";
		cout << "4. Изменить длину\n";
		cout << "5. Изменить диаметр\n";
		cout << "6. Изменить работа\n";
		cout << "7. Изменить имя трубы\n";
		cout << "------------------------------\n";
		cout << "8. Добавить КС\n";
		cout << "9. Изменить количество цехов\n";
		cout << "10. Изменить количество рабочих цехов\n";
		cout << "11. Изменить коэффициент эффективности\n";
		cout << "12. Изменить имя КС\n";
		cout << "------------------------------\n";
		cout << "13. Записать данные в файл\n";
		cout << "14. Взять данные из файл\n";
		cout << "\n";
		cout << "Выберите действие: ";

		cin >> chose;



		switch (chose)
		{
		case 1:
			pipeline.showInfo();
			break;

		case 2:
			KS.showInfoKS();
			break;

		case 3:
			pipeline.addPipe();
			break;

		case 4:
			pipeline.changeLength();
			break;

		case 5:
			pipeline.changeDiametr();
			break;

		case 6:
			pipeline.changeRepain();
			break;

		case 7:
			pipeline.changeName();
			break;

		case 8:
			KS.addKS();
			break;

		case 9:
			KS.changeALL();
			break;

		case 10:
			KS.changeWORK();
			break;

		case 11:
			KS.changeEFF();
			break;

		case 12:
			KS.changeName();
			break;

			//case 13:
			//	inData();
			//	break;

		case 14:
			outData();
			break;

		default:
			cout << "Неверный выбор, попробуйте снова.\n";
		}
	} while (chose != 0);
	return 0;
}





