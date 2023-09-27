/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:55:00 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/27 14:27:52 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal :: Animal()
{
    type = "animal";
    std :: cout  << "animal default constructor\n";
}
Animal :: Animal(const Animal &obj)
{
    this->type = obj.type;
    std :: cout << "animal copy constructor \n";
}

Animal &Animal :: operator=(const Animal &obj)
{
    std :: cout << "animal asiignemt constructor \n";
    this->type = obj.type;
    return (*this);
}

std :: string Animal ::  getType()const
{
    return (type);
}

void Animal :: makeSound() const
{
    std :: cout << type << " make some sound... !-------------->" << std :: endl;
}
Animal :: ~Animal()
{
    std :: cout  << "animal destructor\n";
}

WrongAnimal :: WrongAnimal()
{
    type = "WrongAnimal";
    std :: cout  << "WrongAnimal  default constructor\n";
}
WrongAnimal :: WrongAnimal(const WrongAnimal &obj)
{
    std :: cout << "WrongAnimal copy constructor \n";
}

WrongAnimal &WrongAnimal :: operator=(const WrongAnimal &obj)
{
      std :: cout << "WrongAnimal asiignemt constructor \n";
    this->type = obj.type;
    return (*this);
}
std :: string WrongAnimal ::  getType()const
{
    return (type);
}

void WrongAnimal :: makeSound() const
{
    std :: cout << type << " make some sound... !-------------->" << std :: endl;
}

WrongAnimal :: ~WrongAnimal()
{
    std :: cout  << "WrongAnimal destructor\n";
}