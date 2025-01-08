#include <iostream>
#include <fstream>

int main(int ac, char *av[])
{
    std::ifstream SourceFile(av[1]);
    std::ofstream DestinationFile("dest.replace");
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string line;
    ssize_t index = 0;
    if (ac == 4)
    {
        if (SourceFile.is_open() && SourceFile.is_open())
        {
            while (std::getline(SourceFile, line))
            {
                if (s1.compare(s2))
                {
                    while (index != -1)
                    {
                        index = line.find(s1);
                        if (index == -1) // std::string::npos == -1 means that s1 is not found!!
                            break;
                        line.erase(index, s1.length());
                        line.insert(index, s2);
                    }
                }
                DestinationFile << line + "\n";
            }
            SourceFile.close();
            DestinationFile.close();
        }
        else
            std::cout << "Sorry, once of the files doesn't open!";
    }
    else
        std::cout << "wrong input try again !" << std::endl;
}