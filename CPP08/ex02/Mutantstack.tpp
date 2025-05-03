/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 23:51:47 by mskhairi          #+#    #+#             */
/*   Updated: 2025/05/04 00:04:45 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
Mutantstack<T>::Mutantstack(){

}
template <typename T>
Mutantstack<T>::Mutantstack(Mutantstack<T> &other){
(void)other;
}
template <typename T>
Mutantstack<T> &Mutantstack<T>::operator=(Mutantstack<T> &other){
    
    (void)other;
}
template <typename T>
Mutantstack<T>::~Mutantstack(){

}
template <typename T>
typename Mutantstack<T>::iterator    Mutantstack<T>::begin(){
    return(this->c.begin());
}
template <typename T>
typename Mutantstack<T>::iterator    Mutantstack<T>::end(){
    return(this->c.end());
}