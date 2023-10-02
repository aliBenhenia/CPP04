/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:26:44 by abenheni          #+#    #+#             */
/*   Updated: 2023/10/02 19:38:49 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat :: Cat() 
{
    brain_obj = new Brain;
    type = "Cat";
    std :: cout << "cat default constructor called"<< std :: endl;
}

Cat :: Cat(const Cat &obj) 
{
   this->type =  obj.getType();
    this->brain_obj = new Brain(*obj.brain_obj);
    std :: cout << "cat copy constructor called"<< std :: endl;
}

Cat &Cat :: operator=(const Cat &obj)
{
    this->type =  obj.getType();
    this->brain_obj = new Brain(*obj.brain_obj);
    std :: cout << "cat assignement constructor called"<< std :: endl;
    return (*this);
}

void Cat :: makeSound()const
{
    std :: cout <<  "Cat MAKES SOUND"<< std :: endl;
}
std :: string Cat :: getType() const 
{
    return type;
}
Cat :: ~Cat() 
{
    delete brain_obj;
    std :: cout << "cat destructor constructor called"<< std :: endl;
}



