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
    
    Span span(101);
    std::vector<int> v;
    span.setDatas(v);
    v.reserve(100);
    std::vector<int>::const_iterator it;
    for (int i = 0; i < 100; i++)
    {
        v.push_back(i);
    }
    span.addNumbers(v.begin(), v.end());
    span.addNumber(1000);
    span.addNumber(10000);

    for (it = span.getConstDatas().begin(); it != span.getConstDatas().end(); it++)
    {
        std::cout << "*it : " << *it << std::endl;
    }
    
    int longestSpan= span.longestSpan();
    std::cout << "longestSpan : "<< longestSpan << std::endl;

    int ShortestSpan = span.shortestSpan();
    std::cout << "ShortestSpan : " << ShortestSpan << std::endl;

    return 0;
}
