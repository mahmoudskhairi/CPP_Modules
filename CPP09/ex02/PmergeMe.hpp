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

class PmergeMe
{
private:
std::deque<int> _mysequence;
std::set<int> _tmpsequence;
std::deque<int> _main;
std::vector<int> _pend;
std::map<int, int> _map;
bool _flag;

public:
    PmergeMe();
    void    setInput(size_t ac, char **av);
    void    printdeque(std::deque<int> &deq);
    void    printvector(std::vector<int> &vect) const;
    void    insertPendElements(std::vector<int> &pend);
    void    sortMe();
    void    sequenceState(const std::string &input);
    void    sort(std::deque<int> &sequence);
    ~PmergeMe();
};

#endif