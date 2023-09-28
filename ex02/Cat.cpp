/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:26:44 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/28 12:23:37 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat :: Cat() 
{
    brain_obj = new Brain;
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
    delete brain_obj;
    std :: cout << "cat destructor constructor called\n";
}

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


