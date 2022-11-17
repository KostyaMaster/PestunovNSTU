#include <iostream>
#include <exception>
#include <string>
#include <fstream>
using namespace std;

class Laba1User
{


public:

	string Name;
	int code;
	int debts;

	Laba1User()
	{
		code = debts = 0;
		Name = "Empty";
	}

	Laba1User(string Name, int code, int debts)
	{
		this->Name = Name;
		this->code = code;
		this->debts = debts;
	}



	string printt()
	{
		//cout << "Name: " << Name << "\t Code: " << code << "\t debts: " << debts << endl;
		return "Name: " + Name + "\t Code: " + to_string(code) + "\t debts: " + to_string(debts);
	}



private:




	/*
public:

	struct User
	{
		string Name;
		int code;
		int debts;
	};

	void insert()
	{

	}

private:
	*/
};


class temp
{
public:

	string Name;
	int code;
	int debts;

	temp()
	{
		code = debts = 0;
		Name = "Empty";
	}

	temp(string Name, int code, int debts)
	{
		this->Name = Name;
		this->code = code;
		this->debts = debts;
	}



	string printt()
	{
		//cout << "Name: " << Name << "\t Code: " << code << "\t debts: " << debts << endl;
		return "Name: " + Name + "\t Code: " + to_string(code) + "\t debts: " + to_string(debts);
	}



private:



};

int main()
{
	const int L = 12;
	int k = 0;
	int j;
	int t = 0;
	int i;
	string path = "Anser.txt";

	temp array[L]
	{
		temp("Semen Varlamov",12424,0),
		temp("Polina Eskina", 9562,8),
		temp("Pol Dubov",5555,2),
		temp("Ivan Ivanov",3012,0),
		temp("Oleg Bocharov",32,3),
		temp("Putup Vova", 909,0),
		temp("Ursun The Divine",1,0),
		temp("Mammon Collector",666,0),
		temp("Vasia Pupkin",322,15),
		temp("Aleksandr Oblomov",2212,0),
		temp("Ivan Telmnoholmov",300,2),
		temp("Boris Britva",4444,0),
	};

	for (i = 0; i < L; i++)
	{
		cout << array[i].printt() << endl;
	}
	
	cout << endl;
	cout << endl;
	for (i = 0; i < L; i++)
	{
		j = i;
		for (t=i; t < L; t++)
		{
			if (array[j].debts > array[t].debts)
			{
				j = t;
			}
		}
		swap(array[i], array[j]);

	}
	cout << endl;
	cout << endl;



	for (i = 0; i < L; i++)
	{
		cout << array[i].printt() << endl;
	}

	ofstream op;
	op.open(path, ofstream::in | ofstream::out | ofstream::app);
	if (!op.is_open())
	{
		cout << " Can'not open file" << endl;
	}
	else
	{
		for (i = 0; i < L; i++)
		{
						op << "Name: " << array[i].Name << "\t Code: " << array[i].code << "\t debts: " << array[i].debts << endl;
		}
	}
	op.close();
	return 0;
}


//temp a;
/*a.Name = "Semen Varlamov";
a.code = 12;
a.debts = 0;
a.printt();
	for (int i = 0; i < L; i++)
{

}

*/