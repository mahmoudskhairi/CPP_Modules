/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 23:52:17 by mskhairi          #+#    #+#             */
/*   Updated: 2025/05/03 23:52:22 by mskhairi         ###   ########.fr       */
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
    std::stack<T>::container_type::iterator iter;
    public:
    Mutantstack();
    Mutantstack(Mutantstack &other);
    Mutantstack &operator=(Mutantstack &other);
    ~Mutantstack();
    typename Mutantstack::iterator    begin();
    typename Mutantstack::iterator    end();
    
};

#include "Mutantstack.tpp"
#endif