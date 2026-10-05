/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokim2 <jisokim2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 14:16:59 by jisokim2          #+#    #+#             */
/*   Updated: 2026/10/05 14:17:00 by jisokim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

/*
    Assuming T is a container of integers.
    find the first occurrence of value in t and prints its index.
    if value is not found, print "value is not found".
*/

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
    for (typename T::iterator it = container.begin(); it != container.end(); ++it)
    {
        if (*it == value)
            return it; 
    }
    return container.end();
}