/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 11:14:35 by abenheni          #+#    #+#             */
/*   Updated: 2023/10/02 19:37:36 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

WrongCat :: WrongCat() 
{
    type = "WrongCat";
    std :: cout << "WrongCat default constructor called" << std :: endl;
}

WrongCat :: WrongCat(const WrongCat &obj) 
{
    this->type =  obj.type; 
    std :: cout << "WrongCat copy constructor called"<< std :: endl;
}

WrongCat &WrongCat :: operator=(const WrongCat &obj)
{
    this->type =  obj.type; 
    std :: cout << "WrongCat assignement constructor called "<< std :: endl;
    return (*this);
}
void WrongCat :: makeSound()const
{
    std :: cout <<  "WrongCat MAKES SOUND "<< std :: endl;
}
std :: string WrongCat :: getType() const 
{
    return type;
}
WrongCat :: ~WrongCat() 
{
    std :: cout << "WrongCat destructor constructor called"<< std :: endl;
}