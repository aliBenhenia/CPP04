/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:43:03 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/28 14:33:33 by abenheni         ###   ########.fr       */
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
        animals[i] = new Animal;
        i++;
    }
    i = 0;
    while (i < size)
    {
        delete animals[i];
        i++;
    }
    system ("leaks fixed");
    return (0);
}
