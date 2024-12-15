#include <iostream>

class Contact
{
    public:
    std::string FirstName;
    std::string LastName;
    std::string NeackName;
    std::string PhoneNumber;
    std::string DarkestSecret;
};

class PhoneBook
{  
    public:
    Contact StoredData[8];
    void    DisplayData()
    {
        // std::cout << "|   index   |   first name   |   last name   |   neack name   |";
        std::cout << "|------------------------ PhoneBook ----------------------|\n";
        int i = 0;
        while(i < 8)
        {
            std::cout << "  " << StoredData[i].FirstName <<  "  ";
            std::cout << "  " << StoredData[i].LastName <<   "  ";
            std::cout << "  " << StoredData[i].NeackName <<   "  ";
            // std::cout << StoredData[i].PhoneNumber << std::endl;
            // std::cout << StoredData[i].DarkestSecret << std::endl;
            std::cout << "\n|-----------------------------------------------|\n";
            i++;
        }
    }
};

int main()
{
    PhoneBook MyPhoneBook;
    int i = 0;
    while(1)
    {
        std::string input;
        std::cout << "Your PhoneBook> ";
        std::cin >> input;
        if (!input.compare("ADD"))
        {
            std::cout << "FirstName: ";
            std::getline(std::cin ,MyPhoneBook.StoredData[i].FirstName);
            // std::getline(std::cin ,MyPhoneBook.StoredData[i].FirstName);
            std::cout << "LastName: ";
            std::getline(std::cin ,MyPhoneBook.StoredData[i].LastName);
            std::cout << "NeackName: ";
            std::getline(std::cin ,MyPhoneBook.StoredData[i].NeackName);
            // std::cin >> MyPhoneBook.StoredData[i].NeackName;
            std::cout << "PhoneNumber: ";
            std::getline(std::cin ,MyPhoneBook.StoredData[i].PhoneNumber);
            // std::cin >> MyPhoneBook.StoredData[i].PhoneNumber;
            std::cout << "DarkestSecret: ";
            std::getline(std::cin ,MyPhoneBook.StoredData[i].DarkestSecret);
            // std::cin >> MyPhoneBook.StoredData[i].DarkestSecret;
            i++;
        }
        else if (!input.compare("EXIT"))
            break;
        else if (!input.compare("SEARCH"))
            MyPhoneBook.DisplayData();
        if (i == 8)
            i = 0;
    }
}