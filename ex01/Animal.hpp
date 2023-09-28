/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:36:18 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/28 14:33:46 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
    protected :
        std :: string type ;
    public :
        Animal();
        Animal(const Animal &obj);
        Animal & operator = (const Animal &obj);
        std :: string getType() const;
        virtual void makeSound() const;
        virtual ~Animal();
};

class WrongAnimal
{
    protected :
        std :: string type;
    public :
        WrongAnimal();
        WrongAnimal(const WrongAnimal &obj);
        WrongAnimal & operator = (const WrongAnimal &obj);
        std :: string getType() const;
        void makeSound() const;
        ~WrongAnimal();
};

#endif