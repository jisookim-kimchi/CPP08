/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokim2 <jisokim2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 14:16:50 by jisokim2          #+#    #+#             */
/*   Updated: 2026/10/05 14:16:50 by jisokim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>
#include <stdexcept>

class Span
{
private:
    unsigned int    _maxSize;       //size;
    std::vector<int> _datas;
public:
    void addNumber(int number);     //add number to span.  It will be used in order to fill it Any attempt to add a new element if there
                                    // are already N elements stored should throw an exception.

    template<typename T>            //add numbers from begin to end.
    void addNumbers(T begin, T end);

    explicit Span(unsigned int n);
    ~Span();
    Span(const Span& other);
    Span &operator=(const Span& other);
    
    int shortestSpan() const;   //shortest distance between 2 numbers.
    int longestSpan() const;    //longest distance between 2 numbers.
};

template <typename T>
void Span::addNumbers(T begin, T end)
{
    for (T it = begin; it != end; it++)
    {
        if (_datas.size() >= _maxSize)
            throw std::runtime_error("Span is full");
        _datas.push_back(*it);
    }
}