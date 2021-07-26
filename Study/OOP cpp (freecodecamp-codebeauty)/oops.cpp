#include <iostream>
#include <string>

using std::string;

// abstract class
// or
// contract
class AbstractEmployee {
	virtual void askForPromotion() = 0;
};

// Employee class inheriting from abstract class AbstractEmployee
// or
// Employee class signed contract with AbstractEmployee
class Employee:AbstractEmployee {
	string name;
	string company;
	int age;

public:
	// constructors
	Employee(string Name, string Company, int Age) {
		name = Name;
		company = Company;
		age = Age;
	}
/*note: when a constructor is defined by user, the default constructor gets deleted*/

	// getters and setters
	void setName(string name) { // name setter
		name = name;
	}
	string getName() { // name getter
		return name;
	}
	void setCompany() {
		company = company;
	}
	string getCompany() {
		return company;
	}
	void setAge() {
		age = age;
	}
	int getAge() {
		return age;
	}

	void introduceYourself() {
		std::cout << "Name: " << name << std::endl;
		std::cout << "Company: " << company << std::endl;
		std::cout << "Age: " << age << std::endl;
	}

	void askForPromotion() {
		if(age > 30)
			std::cout << name << " promoted" << std::endl;
		else {
			std::cout << name << " not promoted." << std::endl;
		}
	}

// work() function of the base class is overwritten by the work function of derived class
	virtual void work() {
		std::cout << name << " is performing tasks." << std::endl;
	}
};

// child class inheriting from "Employee" base class
class Developer : public Employee {
public:
	string lang;

/*note: Developer class is inheriting from Employee class 
and it has a constructor, so Developer class doesn't has default constructor
*/

	Developer(string name, string company, int age, string Lang) 
	: Employee(name, company, age) {
		lang = Lang;
	}

	void work() {
		std::cout << getName() << " is debugging codes." << std::endl;
	}
};

/*Accountant class doesn't have access to properties of Employee class
because by default class is inherited as private
*/
class Accountant : Employee {
public:
	int records; // number of records particular accountant maintains

	Accountant(string name, string company, int age, int Records)
	: Employee(name, company, age) {
		records = Records;
	}
};

int main(int argc, char const *argv[])
{
	/*Employee employee1("Seldina", "YT-codebeauty", 25);
	//employee1.introduceYourself();

	Employee employee2("John", "Amazon", 35);
	//employee2.introduceYourself();

	employee1.askForPromotion();
	employee2.askForPromotion();*/

	Developer d("Mary", "Google", 30, "C++");
	//d.introduceYourself();

	Accountant a("Jack", "Bank of Chicago", 29, 100);

	Employee* e1 = &d; // base class pointer to derived class object
	e1->work();

	return 0;
}