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
            _deque.clear();
            _vector.clear();
            throw std::runtime_error("Error: invalid input!");
        }
        std::set<int>::iterator it = this->_tmpsequence.find(num);
        if (it == this->_tmpsequence.end())
        {
            this->_deque.push_back(num);
            this->_vector.push_back(num);
            this->_tmpsequence.insert(num);
        }
        rest = NULL;
        num = 0;
    }
    printdeque(_deque);
    printvector(_vector);
    std::cout << "------------------" << std::endl;
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
        std::cout << (*it);
        if (it + 1 != vect.end())
        {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}

void    PmergeMe::Ford_Johnson()
{
    this->sequenceState("before: ");
    //sorting of deque sequence.
    std::clock_t start1 = std::clock();
    this->MergeSortdeq(_deque);
    double duration1 = (std::clock() - start1) / (double)CLOCKS_PER_SEC;
    //sortin of vector sequence.
    std::clock_t start2 = std::clock();
    this->MergeSortvect(_vector);
    double duration2 = (std::clock() - start2) / (double)CLOCKS_PER_SEC;
    // Durations to microseconds.
    double microseconds1 = duration1 * 1000000.0;
    double microseconds2 = duration2 * 1000000.0;
    this->sequenceState("after: ");
	std::cout << "Time to process a range of " << _deque.size() << " elements with std::deque : " << microseconds1 << " µs" << std::endl;
    std::cout << "Time to process a range of " << _vector.size() << " elements with std::vector : " << microseconds2 << " µs" << std::endl;
}
// MergeSort for deques
void    PmergeMe::MergeSortdeq(std::deque<int> &sequence)
{
    // std::cout << "------------ sort --------------" << std::endl;
    // loop on _deque and divid it into paires
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
    sequence.clear();
    // std::cout << "#pend" << std::endl;
    // printvector(pend);
    // std::cout << "# _deque: " << std::endl;
    // this->printdeque(_deque);
    // std::cout << "--------------------------------" << std::endl;
    if (main.size() > 2)
    {
        MergeSortdeq(main);
    }
    if (!_deque.size())
    {
        this->_deque = main;
    }
    insertPendToDeque(pend);
}

size_t PmergeMe::jacobsthal(size_t n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return jacobsthal(n - 1) + 2 * jacobsthal(n - 2);
}
void    PmergeMe::JacobsthalOrder( std::vector<size_t> order, size_t size)
{
    if (size == 0)
    {
        return;
    }
    if (size == 1)
    {
        order.push_back(0);
        return;
    }
    order.push_back(0);
    order.push_back(1);
    int last = 1;
    int j_current = 3;
    while (1)
    {
        for (size_t i = j_current - 1; i > last; i--)
        {
            order.push_back(i);
        }
        std::cout << "###" << std::endl;
        for (size_t i = 0; i < order.size(); i++)
        {
            std::cout << order.at(i) << " - ";
        }
        std::cout << std::endl;
    }
}

void    PmergeMe::insertPendToDeque(std::vector<int> &pend)
{
    // std::cout << "------------ insertion --------------" << std::endl;
    // std::cout << "#pend" << std::endl;
    // printvector(pend);
    // std::cout << "# _deque: " << std::endl;
    // this->printdeque(_deque);
    // 0 1 3 2 5 4 7 6  11 10 9 8
    std::vector<size_t> order;
    jacobsthal(order, pend.size());
    int i = 0;
    int index = (i - 1) + 2 * (i - 2); 
    for (size_t i = 0; i < pend.size(); i++)
    {
        std::deque<int>::iterator pair;
        // std::cout << "" << std::endl;
        if (_map[pend.at(i)])
        {
            pair = std::find(_deque.begin(), _deque.end(), _map[pend.at(i)]);
        }
        else
        {
            pair = _deque.end();
        }
        std::deque<int>::iterator insertionIterator;
        insertionIterator = std::lower_bound(_deque.begin(), pair, pend.at(i));
        
        // std::cout << "------------ before insert --------------" << std::endl;
        // printdeque(_deque);
        _deque.insert(insertionIterator, pend.at(i));
        // std::cout << "------------ after insert --------------" << std::endl;
        // printdeque(_deque);
    }
    // std::cout << "------------- finishing of insertion -------------------" << std::endl;
}
// MergeSort for vectors

void    PmergeMe::MergeSortvect(std::vector<int> &sequence)
{
    // std::cout << "------------ sort --------------" << std::endl;
    // loop on _deque and divid it into paires
    // this->printdeque(sequence);
    std::vector<int> vector;
    std::vector<int> pend;
    int last = -1;
    if (sequence.size() % 2)
    {
        last = sequence.size() - 1;
        last = sequence.at(last);
        sequence.pop_back();
    }
    std::vector<int>::iterator it1 = sequence.begin();
    std::vector<int>::iterator it2 = sequence.begin() + 1;
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
            vector.push_back(sequence.at(i));
        }
    }
    if (last >= 0)// must be changed
    {
        pend.push_back(last);
    }
    sequence.clear();
    if (vector.size() > 2)
    {
        MergeSortvect(vector);
    }
    if (!_vector.size())
    {
        this->_vector = vector;
    }
    insertPendToVector(pend);
    // std::cout << "--------------------------------" << std::endl;
}

void    PmergeMe::insertPendToVector(std::vector<int> &pend)
{
    // std::cout << "------------ insertion --------------" << std::endl;
    // std::cout << "#pend" << std::endl;
    // printvector(pend);
    // std::cout << "# _deque: " << std::endl;
    // this->printdeque(_deque);
    for (size_t i = 0; i < pend.size(); i++)
    {
        std::vector<int>::iterator pair;
        // std::cout << "" << std::endl;
        if (_map[pend.at(i)])
        {
            pair = std::find(_vector.begin(), _vector.end(), _map[pend.at(i)]);
        }
        else
        {
            pair = _vector.end();
        }
        std::vector<int>::iterator insertionIterator;
        insertionIterator = std::lower_bound(_vector.begin(), pair, pend.at(i));
        
        // std::cout << "------------ before insert --------------" << std::endl;
        // printdeque(_vector);
        _vector.insert(insertionIterator, pend.at(i));
        // std::cout << "------------ after insert --------------" << std::endl;
        // printdeque(_vector);
    }
    // std::cout << "------------- finishing of insertion -------------------" << std::endl;
}

void    PmergeMe::sequenceState(const std::string &input)
{
        std::cout << input;
        if (input == "before: ")
        {
            // this->printdeque(_deque);                 
            this->printvector(_vector);                 
        }
        else if (input == "after: ")
        {
            this->printvector(_vector); 
            // this->printdeque(_deque);
        }

}

PmergeMe::~PmergeMe()
{
    _deque.clear();
    _vector.clear();
}