/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 23:52:17 by mskhairi          #+#    #+#             */
/*   Updated: 2025/05/04 00:05:01 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef   MUTANTSTACK_HPP
#define   MUTANTSTACK_HPP
#include <iostream>
#include <stack>
#include <iterator>

template <typename T>
class Mutantstack : public std::stack<T>
{
    private:
    typedef typename std::stack<T>::container_type::iterator iter;
    public:
    Mutantstack();
    Mutantstack(Mutantstack<T> &other);
    Mutantstack<T> &operator=(Mutantstack<T> &other);
    ~Mutantstack();
    typename Mutantstack<T>::iterator    begin();
    typename Mutantstack<T>::iterator    end();
    
};

#include "Mutantstack.tpp"
#endif