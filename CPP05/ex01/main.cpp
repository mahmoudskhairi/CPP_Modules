#include "Form.hpp"

void Correct()
{
    std::cout << "\n# ------------------- correct test ------------------- #" << std::endl;
    Bureaucrat bur_("*bur", 3);
    Form form("*form", 5, 5);
    std::cout << "\n############ form informations ############" << std::endl;
    std::cout << form << std::endl;
    std::cout << "\n############ Bureaucrat informations ############" << std::endl;
    std::cout << bur_ << std::endl;
    std::cout << "###########################################" << std::endl;
    form.beSigned(bur_);
    std::cout << "form named: " << form.GetName() << ", signed successfully.\n" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
}
void Wrong()
{
    std::cout << "\n# ------------------- Wrong test ------------------- #" << std::endl;
    Bureaucrat bur_("*bur", 7);
    Form form("*form", 5, 5);
    std::cout << "\n############ form informations ############" << std::endl;
    std::cout << form << std::endl;
    std::cout << "\n############ Bureaucrat informations ############" << std::endl;
    std::cout << bur_ << std::endl;
    std::cout << "###########################################" << std::endl;
    form.beSigned(bur_);
    std::cout << "form named: " << form.GetName() << ", signed successfully.\n" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
}
int main()
{
    try
    {
        Correct();
        // Wrong();
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}