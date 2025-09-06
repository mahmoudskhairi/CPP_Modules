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
public:
    PmergeMe();
    void    setInput(size_t ac, char **av);
    void    printdeque(std::deque<int> &deq);
    void    printvector(std::vector<int> &vect);
    void    insertPendElements(std::vector<int> &pend, std::map<int, int> &mymap);
    void    sortMe();
    void    sort(std::deque<int> &sequence);
    ~PmergeMe();
};

#endif