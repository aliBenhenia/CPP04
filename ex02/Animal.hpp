/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:36:18 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/30 16:51:42 by abenheni         ###   ########.fr       */
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
        std :: string getType() const ;
        virtual void makeSound() const = 0;
        virtual ~Animal();
};



#endif