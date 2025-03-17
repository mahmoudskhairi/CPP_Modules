#include "Form.hpp"

void Correct()
{
    std::cout << "\n# ------------------- correct test ------------------- #" << std::endl;
    bureaucrat bur_("*bur", 3);
    Form form("*form", 5, 5);
    std::cout << "\n############ form informations ############" << std::endl;
    std::cout << form;
    std::cout << "\n############ bureaucrat informations ############" << std::endl;
    std::cout << bur_;
    std::cout << "###########################################" << std::endl;
    form.beSigned(bur_);
    std::cout << "----------------------------------------------" << std::endl;
}
void Wrong()
{
    std::cout << "\n# ------------------- Wrong test ------------------- #" << std::endl;
    bureaucrat bur_("*bur", 7);
    Form form("*form", 5, 5);
    // std::cout << "\n############ form informations ############" << std::endl;
    // std::cout << form;
    // std::cout << "\n############ bureaucrat informations ############" << std::endl;
    // std::cout << bur_;
    // std::cout << "###########################################" << std::endl;
    // form.beSigned(bur_);
    bur_.signForm(form);
    std::cout << "----------------------------------------------" << std::endl;
}
int main()
{
    try
    {
    //   Correct();
      Wrong();
    }
    catch (std::exception &e)
    {
        std::cerr <<  e.what() << '\n';
    }
}