/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:33:29 by abenheni          #+#    #+#             */
/*   Updated: 2023/10/02 19:30:21 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
Dog :: Dog()
{
    type = "Dog";
    std :: cout << "dog defualt constructor called" <<  std :: endl;
}

void Dog ::  makeSound()const
{
    std :: cout << "Dog MAKES SOUND" <<  std :: endl;
}

std :: string Dog ::  getType() const
{
    return type;
}

Dog :: Dog(const Dog &obj)
{
    this->type = obj.type;
    std :: cout << "dog copy constructor called"<<  std :: endl;
}

Dog &Dog :: operator =(const Dog &obj)
{
    this->type = obj.type;
    std :: cout << "dog assignemnt operator called"<<  std :: endl;
    return (*this);
}
Dog :: ~Dog()
{
    std :: cout << "dog destructor called"<<  std :: endl;
}