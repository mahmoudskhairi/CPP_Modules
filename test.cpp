#include <iostream>

class MyPerson
{
private:
	static int _Counter;
	std::string _ID;
	std::string _FirstName;
	std::string _LastName;
	std::string _Email;
	std::string _PhoneNumber;

public:
	MyPerson(std::string ID, std::string FirstName, std::string LastName, std::string Email, std::string PhoneNumber)
	{
		_Counter++;
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_PhoneNumber = PhoneNumber;
	}
	static void UpdateCounter(int NewCounter)
	{
		_Counter = NewCounter;
	}
	void SendEmail(std::string Subject, std::string Body);
	void SendSms(std::string Message);
	void GetCounter()
	{
		std::cout << _Counter << std::endl;
	}
};

int MyPerson::_Counter = 1;

void MyPerson::SendEmail(std::string Subject, std::string Body)
{
	std::cout << "\n$ the following email is sent successfully to PhoneNumber: " << _PhoneNumber;
	std::cout << "\nSubject: " << Subject << std::endl;
	std::cout << "\nBody: " << Body << std::endl;
}

void MyPerson::SendSms(std::string Message)
{
	std::cout << "\n$ the following SMS is sent successfully to email : " << _Email;
	std::cout << "\nMessage: " << Message << std::endl;
}
int main()
{
	// MyPerson::GetCounter();
	MyPerson::UpdateCounter(0);
	// std::cout << MyPerson::_Counter << std::endl;
	MyPerson person1("0", "mahmoud", "skhairi", "mahmoud.skhairi@gmail.com", "0614369799");
	person1.SendEmail("salat aljumua", "we must to reserve our place in the BUS of 13:00 am to go to mosque for ALJUMUA priyer !!");
	person1.SendSms("hey hatim, don't forget to reserve your place in the BUS of 13:00, salat_is_First##");
	person1.GetCounter();
}