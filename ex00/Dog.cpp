/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:33:29 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/27 14:15:29 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
Dog :: Dog()
{
    type = "Dog";
    std :: cout << "dog defualt constructor called\n";
}

void Dog ::  makeSound()const
{
    std :: cout << type  << " MAKES SOUND\n";
}

std :: string Dog ::  getType() const
{
    return type;
}

Dog :: Dog(const Dog &obj)
{
    this->type = obj.type;
    std :: cout << "dog copy constructor called\n";
}

Dog &Dog :: operator =(const Dog &obj)
{
    this->type = obj.type;
    std :: cout << "dog assignemnt operator called\n";
    return (*this);
}
Dog :: ~Dog()
{
    type = "Dog";
    std :: cout << "dog destructor called\n";
}