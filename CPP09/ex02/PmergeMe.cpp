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
        std::cout << (*it);
        if (it + 1 != deq.end())
        {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}
void    PmergeMe::printvector(std::vector<int> &vect) const
{
    for (std::vector<int>::iterator it = vect.begin(); it != vect.end(); it++)
    {
        std::cout << (*it) << " - ";   
    }
    std::cout << std::endl;
}

void    PmergeMe::sortMe()
{
    this->sort(_mysequence);
    // this->printdeque(this->_main);
}
void    PmergeMe::sort(std::deque<int> &sequence)
{
    // std::cout << "------------ sort --------------" << std::endl;
    // loop on _main and divid it into paires
    // this->printdeque(sequence);
    std::deque<int> main;
    std::vector<int> pend;
    int last = -1;
    if (sequence.size() % 2)
    {
        last = sequence.size() - 1;
        last = sequence.at(last);
        sequence.pop_back();
    }
    std::deque<int>::iterator it1 = sequence.begin();
    std::deque<int>::iterator it2 = sequence.begin() + 1;
    int i = 2;
    int size = sequence.size();
    while (1)
    {
        if (size - i >= 0)
        {
            if (*it1 > *it2)
            {
                std::swap(*it1, *it2);
            }
            if (!_flag)
            {
                _map[(*it1)] = (*it2);    
            }
            it1 += 2;
            it2 += 2;
            i += 2;                                      
        }
        else
        {
            break;
        }
    }
    if (!_flag)// must be chaned
    {
        _flag = 1;        
    }
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
    if (last >= 0)// must be changed
    {
        pend.push_back(last);
    }
    if (main.size() > 2)
    {
        sort(main);
    }
    if (!_main.size())
    {
        this->_main = main;
    }
    insertPendElements(pend);
    // std::cout << "--------------------------------" << std::endl;
}

void    PmergeMe::sequenceState(const std::string &input)
{
        std::cout << input;
        if (input == "before: ")
        {
            this->printdeque(_mysequence);                 
        }
        else if (input == "after: ")
        {
            this->printdeque(_main);                 
        }
}

void    PmergeMe::insertPendElements(std::vector<int> &pend)
{
    // std::cout << "------------ insertion --------------" << std::endl;
    // std::cout << "#pend" << std::endl;
    // printvector(pend);
    // std::cout << "# _main: " << std::endl;
    // this->printdeque(_main);
    for (size_t i = 0; i < pend.size(); i++)
    {
        std::deque<int>::iterator pair;
        // std::cout << "" << std::endl;
        if (_map[pend.at(i)])
        {
            pair = std::find(_main.begin(), _main.end(), _map[pend.at(i)]);
        }
        else
        {
            pair = _main.end();
        }
        std::deque<int>::iterator insertionIterator;
        insertionIterator = std::lower_bound(_main.begin(), pair, pend.at(i));
        
        // std::cout << "------------ before insert --------------" << std::endl;
        // printdeque(_main);
        _main.insert(insertionIterator, pend.at(i));
        // std::cout << "------------ after insert --------------" << std::endl;
        // printdeque(_main);
    }
    // std::cout << "------------- finishing of insertion -------------------" << std::endl;
}
PmergeMe::~PmergeMe()
{
    _mysequence.clear();
}