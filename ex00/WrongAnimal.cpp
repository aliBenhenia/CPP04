/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 11:09:29 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/30 11:20:14 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "WrongAnimal.hpp"

WrongAnimal :: WrongAnimal()
{
    type = "WrongAnimal";
    std :: cout  << "WrongAnimal  default constructor\n";
}
WrongAnimal :: WrongAnimal(const WrongAnimal &obj)
{
    this->type = obj.type;
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
    std :: cout <<  "WrongAnimal make some sound... !" << std :: endl;
}

WrongAnimal :: ~WrongAnimal()
{
    std :: cout  << "WrongAnimal destructor\n";
}