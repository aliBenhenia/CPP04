/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:33:29 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/30 21:51:41 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
Dog :: Dog() : brain_obj(new Brain)
{
    type = "Dog";
    std :: cout << "dog defualt constructor called\n";
}

void Dog ::  makeSound()const
{
    std :: cout << "Dog MAKES SOUND\n";
}

std :: string Dog ::  getType() const
{
    return type;
}

Dog :: Dog(const Dog &obj)
{
    this->type = obj.getType();
    *this->brain_obj = *brain_obj;
    std :: cout << "dog copy constructor called\n";
}

Dog &Dog :: operator =(const Dog &obj)
{
    this->type = obj.getType();
    this->brain_obj = new Brain(*(brain_obj));
    std :: cout << "dog assignemnt operator called\n";
    return (*this);
}
Dog :: ~Dog()
{
    delete brain_obj;
    std :: cout << "dog destructor called\n";
}