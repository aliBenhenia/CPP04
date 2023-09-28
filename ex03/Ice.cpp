/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:03:14 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/28 19:12:33 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice :: Ice() : AMateria("ice")
{
    std :: cout << "ice default constructor" <<  std :: endl;
}
Ice :: Ice(const Ice obj)
{
    type = obj.type;
    std :: cout << "ice default constructor" <<  std :: endl;
}
Ice &Ice :: operator=(const Ice obj)
{
    type = obj.type;
    return (*this);
}
AMateria *Ice :: clone()const
{
    Ice *obj = new Ice;
    return (obj);
}
void Ice :: use(ICharacter& target)const
{
    
}
Ice :: ~Ice()
{
    std :: cout << "ice destructor " <<  std :: endl;
}