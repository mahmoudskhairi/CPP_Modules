#ifndef _PMERGE_ME_HPP
#define _PMERGE_ME_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <list>
#include <cstdlib>
#include <ctime>

class PmergeMe
{
private:
std::set<int> _tmpsequence;
std::deque<int> _deque;
std::vector<int> _vector;
std::map<int, int> _map;
bool _flag;

public:
    PmergeMe();
    void    setInput(size_t ac, char **av);
    void    sequenceState(const std::string &input);
    void    Ford_Johnson();
    size_t  jacobsthal(size_t n);
    void    JacobsthalOrder( std::vector<size_t> order, size_t size);
    // -------- for vector ------- //
    void    insertPendToVector(std::vector<int> &pend);
    void    MergeSortvect(std::vector<int> &sequence);
    void    printvector(std::vector<int> &vect) const;
    // -------- for deque ------- //
    void    insertPendToDeque(std::vector<int> &pend);
    void    MergeSortdeq(std::deque<int> &sequence);
    void    printdeque(std::deque<int> &deq);
    ~PmergeMe();
};

#endif