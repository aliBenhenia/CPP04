/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:43:03 by abenheni          #+#    #+#             */
/*   Updated: 2023/10/02 19:41:25 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
    {
            Dog objectDog;
            Cat objectCat;


            Animal* j = &objectDog;
            Animal* i = &objectCat;
            std::cout << j->getType() << " " << std::endl;
            std::cout << i->getType() << " " << std::endl;
            i->makeSound();
            j->makeSound();
    }
    std :: cout << "-------------------------------------------------"<< std :: endl;
    {
            WrongCat objectCat;

            WrongAnimal* i = &objectCat;
            std::cout << i->getType() << " " << std::endl;
            i->makeSound();
    }
    return (0);
}
