
#include <iostream>
#include <string>
#include <fstream>
#include <string>
using namespace std;

class DivideToZeroException
{
private:
	std::string m_error{"Cannot divide to zero!"};

public:
	DivideToZeroException() = default;

	const char* getError() { return m_error.c_str(); }
};

class ZnamenatelisZeroException
{
private:
	std::string m_error{ "Znamenatel cannot be zero!" };

public:
	ZnamenatelisZeroException() = default;

	const char* getError() { return m_error.c_str(); }
};

class FileOpenException
{
private:
	std::string m_error{ "File Open Error!" };

public:
	FileOpenException() = default;

	const char* getError() { return m_error.c_str(); }
};


class Student {

public:
	Student() = default;
	Student(string name, string surname, string age) {
		this->name = name;
		this->surname = surname;
		this->age = age;
		string filename = "Students\\";
		filename.append(to_string(id));
		filename.append(".txt");
		file.open(filename, std::ios::app);



	}
	int get_id() {


		return this->id;
	}

	void save_to_file() {


		if (file.is_open()) {
			file << name;
			file << ";";
			file << surname;
			file << ";";
			file << age;
		}
		else
		{
			throw FileOpenException();
		}




	}
	void read_from_file() {
		string filename = "Students\\";
		int e_id{};
		cout << "Enter Id: ";
		cin >> e_id;


		fstream file_r;
		filename.append(to_string(e_id));
		filename.append(".txt");
		file_r.open(filename, std::ios::in);
		if (file_r.is_open())
		{

			while (std::getline(file_r, name, ';') &&
				std::getline(file_r, surname, ';') &&
				std::getline(file_r, age))



				file_r.close();

		}
		else
		{
			throw FileOpenException();
		}



	}

	string get_name()
	{

		return this->name;
	}

	~Student() {

		file.close();


	}

private:
	static int ID;
	string name;
	string surname;
	string age;
	const int id = ++ID;
	fstream file;

};

int Student::ID = 0;

class Double
{
	int chislitel{ 0 };
	int znamenatel{ 1 };
	fstream file;
public:
	Double() {
		file.open("Double.dat", std::ios::out);


	}
	Double(int chislitel, int znamenatel) {

		this->chislitel = chislitel;
		if (znamenatel == 0)
		{
			throw ZnamenatelisZeroException();
		}
		else
		{
			this->znamenatel = znamenatel;
		}
		file.open("Double.dat", std::ios::out);


	}
	void set_data(int chislitel, int znamenatel);
	void add(int chislitel, int znamenatel);
	void dif(int chislitel, int znamenatel);
	void mul(int chislitel, int znamenatel);
	void div_double(int chislitel, int znamenatel);
	void div_numb(int numb);
	void save_to_file() {
		if (file.is_open()) {
			file << chislitel;
			file << ";";
			file << znamenatel;
		}
		else
		{
			throw FileOpenException();
		}


	}
	void read_from_file() {

		fstream file_r;
		file_r.open("Double.dat", std::ios::in);
		if (file_r.is_open())
		{
			string s_chislitel{}, s_znamenatel;
			while (std::getline(file_r, s_chislitel, ';') &&
				std::getline(file_r, s_znamenatel))


				this->chislitel = stoi(s_chislitel);
			this->znamenatel = stoi(s_znamenatel);

			file_r.close();


		}
		else
		{
			throw FileOpenException();
		}



	}
	~Double() {
		file.close();



	}
};


void Double::set_data(int chislitel, int znamenatel) {
	this->chislitel = chislitel;
	if (znamenatel == 0)
	{
	      throw ZnamenatelisZeroException();
	}
	else
	{
		this->znamenatel = znamenatel;
	}



}

void Double::add(int chislitel, int znamenatel) {
	int chis = (this->chislitel * znamenatel + this->znamenatel * chislitel);
	int znam = this->znamenatel * znamenatel;

	int k = 0;
	for (int i = 999; i >= 1; i--)
	{
		if (chis % i == 0 && znam % i == 0)
		{
			chis /= i;
			znam /= i;
			k++;
		}
	}

	this->chislitel = chis;
	this->znamenatel = znam;


}
void Double::dif(int chislitel, int znamenatel) {
	int chis = (this->chislitel * znamenatel - this->znamenatel * chislitel);
	int znam = this->znamenatel * znamenatel;

	int k = 0;
	for (int i = 999; i >= 1; i--)
	{
		if (chis % i == 0 && znam % i == 0)
		{
			chis /= i;
			znam /= i;
			k++;
		}
	}


	this->chislitel = chis;
	this->znamenatel = znam;


}
void Double::mul(int chislitel, int znamenatel) {
	int chis = this->chislitel * chislitel;
	int znam = this->znamenatel * znamenatel;

	int k = 0;
	for (int i = 999; i >= 1; i--)
	{
		if (chis % i == 0 && znam % i == 0)
		{
			chis /= i;
			znam /= i;
			k++;
		}
	}


	this->chislitel = chis;
	this->znamenatel = znam;


}
void Double::div_double(int chislitel, int znamenatel) {
	if (chislitel == 0) throw DivideToZeroException();
    int chis = this->chislitel * znamenatel;
	int znam = this->znamenatel * chislitel;

	int k = 0;
	for (int i = 999; i >= 1; i--)
	{
		if (chis % i == 0 && znam % i == 0)
		{
			chis /= i;
			znam /= i;
			k++;
		}
	}


	this->chislitel = chis;
	this->znamenatel = znam;


}

void Double::div_numb(int numb) {
	if (numb == 0 )
	{
		throw DivideToZeroException();
	}
	
	else
	{
		int znmenatel = 1;
		int chislitel = numb;
		int chis = this->chislitel * znamenatel;
		int znam = this->znamenatel * chislitel;

		int k = 0;
		for (int i = 999; i >= 1; i--)
		{
			if (chis % i == 0 && znam % i == 0)
			{
				chis /= i;
				znam /= i;
				k++;
			}
		}


		this->chislitel = chis;
		this->znamenatel = znam;

	}
}

int main() {
	Student a("Sahib", "Shakhayev", "21");
	Student b;
	cout << b.get_name() << " before" << endl;
	try
	{
		a.save_to_file();
	}
	catch (FileOpenException& exception)
	{
		cerr << "An exception occurred (" << exception.getError() << ")\n";
	}
	
	try
	{
		b.read_from_file();
	}
	catch (FileOpenException& exception)
	{
		cerr << "An exception occurred (" << exception.getError() << ")\n";
	}

	Double d;
	try
	{
		d.set_data(4, 0);
	}
	catch (ZnamenatelisZeroException& exception)
	{
		cerr << "An exception occurred (" << exception.getError() << ")\n";
	}
	cout << b.get_name() << " after" << endl;
	return 0;
}