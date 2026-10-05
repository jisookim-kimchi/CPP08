/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokim2 <jisokim2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 14:16:42 by jisokim2          #+#    #+#             */
/*   Updated: 2026/10/05 14:16:42 by jisokim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <vector>
#include <iterator>
#include <iostream>
int main()
{

    std::vector<int> v;
    v.reserve(100);
    std::vector<int>::iterator it;
    for (int i = 0; i < 100; i++)
    {
        v.push_back(i);
    }
    for (it = v.begin(); it != v.end(); it++)
    {
        std::cout << "*it : " << *it << std::endl;
    }
    Span span(100);

    span.longestSpan();
    span.shortestSpan();

    return 0;
}
