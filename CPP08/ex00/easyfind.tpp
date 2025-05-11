/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskhairi <mskhairi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 23:52:53 by mskhairi          #+#    #+#             */
/*   Updated: 2025/05/11 12:12:38 by mskhairi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
typename T::iterator easyfind(T &container, int number)
{
    typename T::iterator it = std::find(container.begin(), container.end(), number);
    if (it == container.end())
        throw std::runtime_error("your number dosen't exists in the container!");
    return (it);
}