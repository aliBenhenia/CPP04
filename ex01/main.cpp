/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:43:03 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/30 16:48:43 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    int i = 0;
    int size = 6;
    Animal *animals[size];
    while (i < size / 2)
    {
        animals[i] = new Dog;
        i++;
    }
    i = size / 2;
    while (i < size)
    {
        animals[i] = new Cat;
        i++;
    }
    i = 0;
    while (i < size)
    {
        delete animals[i];
        i++;
    }
    return (0);
}
