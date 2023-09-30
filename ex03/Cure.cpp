/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:40:05 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/30 22:46:20 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure :: Cure() : AMateria("cure")
{
    std :: cout << "Cure default constructor" <<  std :: endl;
}
Cure :: Cure(const Cure &obj)
{
    type = obj.type;
    std :: cout << "Cure default constructor" <<  std :: endl;
}
Cure &Cure :: operator=(const Cure &obj)
{
    type = obj.type;
    return (*this);
}
AMateria *Cure :: clone()const
{
    Cure *obj = new Cure(*this);
    return (obj);
}
void Cure :: use(ICharacter& target)
{
   std::cout <<  "* heals " << target.getName() << "'s wounds *"<< std :: endl;
}
Cure :: ~Cure()
{
    std :: cout << "Cure destructor " <<  std :: endl;
}