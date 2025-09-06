#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

void    PmergeMe::setInput(size_t ac, char **av)
{
    char *rest = NULL;
    long num = 0;
    for (size_t i = 1; i < ac; i++)
    {
        num = strtod(av[i], &rest);
        if (*rest || num < 0)
        {
            _mysequence.clear();
            throw std::runtime_error("Error: invalid input!");
        }
        std::set<int>::iterator it = this->_tmpsequence.find(num);
        if (it == this->_tmpsequence.end())
        {
            this->_mysequence.push_back(num);
            this->_tmpsequence.insert(num);
        }
        rest = NULL;
        num = 0;
    }
}
void    PmergeMe::printdeque(std::deque<int> &deq)
{
    for (std::deque<int>::iterator it = deq.begin(); it != deq.end(); it++)
    {
        std::cout << "num: " << (*it) << std::endl;   
    }
}
void    PmergeMe::printvector(std::vector<int> &vect)
{
    for (std::vector<int>::iterator it = vect.begin(); it != vect.end(); it++)
    {
        std::cout << "num: " << (*it) << std::endl;   
    }
}

void    PmergeMe::sortMe()
{
    this->sort(_mysequence);
}
void    PmergeMe::sort(std::deque<int> &sequence)
{
    // loop on _main and divid it into paires
    if (_mysequence.size() < 2)
    {
        // insert pen into main
        return;
    }
    std::deque<int> main;
    std::vector<int> pend;
    if (sequence.size() % 2)
    {
        int last = sequence.size() - 1;
        _pend.push_back(sequence.at(last));
        sequence.pop_back();
    }
    std::deque<int>::iterator it1 = sequence.begin();
    std::deque<int>::iterator it2 = sequence.begin() + 1;
    int i = 2;
    int size = sequence.size();
    std::map<int, int> mymap;
    while (1)
    {
        if (size - i >= 0)
        {
            if (*it1 > *it2)
            {
                std::swap(*it1, *it2);
            }
            mymap[(*it1)] = (*it2);
            it1 += 2;
            it2 += 2;
            i += 2;                                             
        }
        else
        {
            break;
        }
    }
    this->printdeque(sequence);
    std::cout << "----" << std::endl;
    for (int i = 0; i < (int)sequence.size(); i++)
    {
        if (!(i % 2))
        {
            pend.push_back(sequence.at(i));
        }
        else
        {
            main.push_back(sequence.at(i));
        }
    }
    this->printdeque(main);
    std::cout << "----" << std::endl;
    this->printvector(pend);
    std::cout << "====" << std::endl;

    if (main.size() < 2)
    {
        this->_main = main;
        insertPendElements(pend, mymap);
        return;
    }
    sort(_main);
    // _main = sequence;
    // loop on paires and push on _second
    // call sort() with _main as a parameter
}


        
void    PmergeMe::insertPendElements(std::vector<int> &pend, std::map<int, int> &mymap)
{
    _main.push_front(pend.at(0));
    for (size_t i = 1; i < pend.size(); i++)
    {
                                                                                                                                                                                                                                                  
    }
    
}
PmergeMe::~PmergeMe()
{
    _mysequence.clear();
}