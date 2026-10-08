/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisokim2 <jisokim2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 14:16:36 by jisokim2          #+#    #+#             */
/*   Updated: 2026/10/05 14:16:36 by jisokim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>


int main()
{
    MutantStack<int> stack;

    stack.push(100);
    MutantStack<int>::iterator it = stack.begin();
    std::cout << "stack.begin() : " << *stack.begin() << std::endl;
    std::cout << "stack.end() : " << *stack.end() << std::endl;

    for (int i = 0; i < 100; ++i)
    {
        stack.push(i);
    }
    for (it = stack.begin(); it != stack.end(); ++it)
    {
        std::cout << "*it :" << *it << std::endl;
    }
    std::cout <<std::endl;
    MutantStack<int>::reverse_iterator rit;
    stack.push(1);
    for (rit = stack.rbegin(); rit != stack.rend(); ++rit)
    {
        std::cout << "*rit :" << *rit << std::endl;
    }
    std::cout << std::endl;
    while (!stack.empty())
        stack.pop();
    if (stack.empty())
        std::cout << "stack cleand up" << std::endl <<std::endl;
    
    stack.push(0);
    stack.push(1);
    stack.push(2);
    for (it = stack.begin(); it != stack.end(); ++it)
    {
        std::cout << "*it :" << *it << std::endl;
    }
    std::cout << std::endl;
    std::cout << "stack top : " << stack.top() << std::endl << std::endl;

    stack.pop();
    for (MutantStack<int>::const_iterator it = stack.begin(); it != stack.end(); ++it)
    {
        std::cout << "*it : " << *it << std::endl;
    }
    return 0;
}
