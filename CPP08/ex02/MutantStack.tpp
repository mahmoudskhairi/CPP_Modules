/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 23:51:47 by mskhairi          #+#    #+#             */
/*   Updated: 2025/05/05 15:46:33 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(){
    if(PRINTINGMODE)
        std::cout << "Defualt constructor called!" << std::endl;
}
template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> &other){
    if(PRINTINGMODE)
        std::cout << "Copy constructor called!" << std::endl;
    (void)other;
}
template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> &other){
    if(PRINTINGMODE)
        std::cout << "Copy assignment operator called!" << std::endl;
    (void)other;
}
template <typename T>
MutantStack<T>::~MutantStack(){
    if(PRINTINGMODE)
        std::cout << "Destructor called!" << std::endl;
}
template <typename T>
typename MutantStack<T>::iterator    MutantStack<T>::begin(){
    return(this->c.begin());
}
template <typename T>
typename MutantStack<T>::iterator    MutantStack<T>::end(){
    return(this->c.end());
}