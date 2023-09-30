/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:26:44 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/30 12:52:18 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat :: Cat() 
{
    type = "Cat";
    std :: cout << "cat default constructor called\n";
}
Cat :: Cat(const Cat &obj) 
{
    this->type =  obj.type; 
    std :: cout << "cat copy constructor called\n";
}
Cat &Cat :: operator=(const Cat &obj)
{
    this->type =  obj.type; 
    std :: cout << "cat assignement constructor called\n";
    return (*this);
}

void Cat :: makeSound()const
{
    std :: cout <<  "Cat MAKES SOUND\n";
}
std :: string Cat :: getType() const 
{
    return type;
}

Cat :: ~Cat() 
{
    std :: cout << "cat destructor constructor called\n";
}





