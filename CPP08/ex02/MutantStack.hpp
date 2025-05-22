/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 23:52:17 by mskhairi          #+#    #+#             */
/*   Updated: 2025/05/22 18:10:02 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef   MUTANTSTACK_HPP
#define   MUTANTSTACK_HPP
#include <iostream>
#include <stack>
#include <iterator>
#include <list>

#ifndef  PRINTINGMODE
#define  PRINTINGMODE 1
#endif
template <typename T>
class MutantStack : public std::stack<T>
{
    private:
    // typedef typename std::stack<T>::container_type::const_iterator ConstIter;
    // typedef typename std::stack<T>::container_type::const_iterator ReverseIter;
    // typedef typename std::stack<T>::container_type::const_iterator ConstReverseIter;
    public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    MutantStack();
    MutantStack(MutantStack &other);
    MutantStack<T> &operator=(MutantStack &other);
    ~MutantStack();
    iterator  begin();
    iterator  end();
    
};

#include "MutantStack.tpp"

#endif