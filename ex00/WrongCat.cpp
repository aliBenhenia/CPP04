/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 11:14:35 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/30 11:14:53 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

WrongCat :: WrongCat() 
{
    type = "WrongCat";
    std :: cout << "WrongCat default constructor called\n";
}

WrongCat :: WrongCat(const WrongCat &obj) 
{
    this->type =  obj.type; 
    std :: cout << "WrongCat copy constructor called\n";
}

WrongCat &WrongCat :: operator=(const WrongCat &obj)
{
    this->type =  obj.type; 
    std :: cout << "WrongCat assignement constructor called\n";
    return (*this);
}
void WrongCat :: makeSound()const
{
    std :: cout <<  "WrongCat MAKES SOUND\n";
}
std :: string WrongCat :: getType() const 
{
    return type;
}
WrongCat :: ~WrongCat() 
{
    std :: cout << "WrongCat destructor constructor called\n";
}