/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokim2 <jisokim2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 14:16:47 by jisokim2          #+#    #+#             */
/*   Updated: 2026/10/05 14:16:47 by jisokim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <vector>
#include <algorithm>
#include <iostream>

Span::Span(unsigned int n) : _maxSize(n)
{
}

Span::~Span()
{
}

Span::Span(const Span &other)
{
    *this = other;
}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        _maxSize = other._maxSize;
        _datas = other._datas;
    }
    return *this;
}

int Span::shortestSpan() const
{
    if (_datas.size() <= 1)
        throw std::invalid_argument("Error : Not enough elements to find the shortest span");
    std::vector<int> sorted = _datas;
    std::sort(sorted.begin(), sorted.end());
    int shortest = sorted[1] - sorted[0];
    for (size_t i = 1; i < sorted.size() - 1; i++)
    {
        int diff = sorted[i + 1] - sorted[i];
        if (diff < shortest)
            shortest = diff;
    }
    return shortest;
}

int Span::longestSpan() const
{
    if (_datas.size() <= 1)
        throw std::invalid_argument("Error : Not enough elements to find the longest span");

    int max_ = _datas[0];
    int min_ = _datas[0];
    for (size_t i = 1; i < _datas.size(); i++)
    {
        if (_datas[i] > max_)
            max_ = _datas[i];
        if (_datas[i] < min_)
            min_ = _datas[i];
    }
    return max_ - min_;
}

 void Span::addNumber(int number)
 {
    if (_datas.size() >= _maxSize)
    {
        std::cout << "Warning : Span is already full" << std::endl;
        return;
    }
    std::vector<int>::iterator it;

    for (it = _datas.begin(); it != _datas.end(); ++it)
    {
        if (*it == number)
            std::cout << "Warning : runtime at addNumber ---> already same number in the class" << std::endl;
        else
        ; 
    }
    _datas.push_back(number);
}