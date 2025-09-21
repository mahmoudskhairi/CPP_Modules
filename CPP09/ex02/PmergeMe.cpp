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

// Jacobsthal sequence generating
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
void    PmergeMe::JacobsthalOrder( std::vector<size_t> &order, size_t size)
{
    if (size == 0) return;
    
    order.push_back(0);  // Always insert first element
    if (size == 1) return;
    
    order.push_back(1);  // Always insert second element
    if (size == 2) return;

    size_t n = 3;
    size_t last = 1;
    for (; n < size; n++)
    {
        size_t j_curr = jacobsthal(n);
        if (j_curr >= size) {
            break;
        }
        for (size_t i = j_curr; i > last; i--)
        {
            order.push_back(i);
        }
        last = j_curr;
    }
    if (order.size() == size) {return;}
    
    std::vector<size_t>::iterator max = std::max_element(order.begin(), order.end());
    size_t next = *max + 1;
    for (size_t i = next; i < size; i++)
    {
        order.push_back(i);
    }
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

void    PmergeMe::insertPendToDeque(std::vector<int> &pend)
{
    std::vector<size_t> order;
    JacobsthalOrder(order, pend.size());
    for (size_t i = 0; i < pend.size(); i++)
    {
        std::deque<int>::iterator pair;
        if (_map[pend.at(order.at(i))])
        {
            pair = std::find(_deque.begin(), _deque.end(), _map[pend.at(order.at(i))]);
        }
        else
        {
            pair = _deque.end();
        }
        std::deque<int>::iterator insertionIterator;
        insertionIterator = std::lower_bound(_deque.begin(), pair, pend.at(order.at(i)));

        _deque.insert(insertionIterator, pend.at(order.at(i)));
    }
}


// MergeSort for vectors
void    PmergeMe::MergeSortvect(std::vector<int> &sequence)
{
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
}

void    PmergeMe::insertPendToVector(std::vector<int> &pend)
{
    std::vector<size_t> order;
    JacobsthalOrder(order, pend.size());
    for (size_t i = 0; i < pend.size(); i++)
    {
        std::vector<int>::iterator pair;
        if (_map[pend.at(order.at(i))])
        {
            pair = std::find(_vector.begin(), _vector.end(), _map[pend.at(order.at(i))]);
        }
        else
        {
            pair = _vector.end();
        }
        std::vector<int>::iterator insertionIterator;
        insertionIterator = std::lower_bound(_vector.begin(), pair, pend.at(order.at(i)));

        _vector.insert(insertionIterator, pend.at(order.at(i)));
}
}

void    PmergeMe::sequenceState(const std::string &input)
{
        std::cout << input;
        if (input == "before: ")
        {
            this->printdeque(_deque);                 
            // this->printvector(_vector);                 
        }
        else if (input == "after: ")
        {
            this->printdeque(_deque);
            // this->printvector(_vector); 
        }

}

PmergeMe::~PmergeMe()
{
    _deque.clear();
    _vector.clear();
    _tmpsequence.clear();
    _map.clear();
}