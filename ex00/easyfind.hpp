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