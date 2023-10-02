/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:55:00 by abenheni          #+#    #+#             */
/*   Updated: 2023/10/02 19:33:07 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal :: Animal()
{
    type = "animal";
    std :: cout  << "animal default constructor"<<std :: endl;
}
Animal :: Animal(const Animal &obj)
{
    this->type = obj.type;
    std :: cout << "animal copy constructor "<<std :: endl;
}

Animal &Animal :: operator=(const Animal &obj)
{
    std :: cout << "animal asiignemt constructor "<<std :: endl;
    this->type = obj.type;
    return (*this);
}

std :: string Animal ::  getType()const
{
    return (type);
}

void Animal :: makeSound() const
{
    std :: cout <<  "animal make some sound... !" << std :: endl;
}

Animal :: ~Animal()
{
    std :: cout  << "animal destructor"<<std :: endl;
}

