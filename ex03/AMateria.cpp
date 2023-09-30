/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:35:05 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/30 22:37:33 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria :: AMateria()
{
    std :: cout << "AMateria default constructor" <<  std :: endl;
}

AMateria  :: AMateria(const AMateria &obj)
{
    type = obj.type;
    std :: cout << "AMateria copy constructor" <<  std :: endl;
}
AMateria  :: AMateria(std::string const & type):type(type)
{
    std :: cout << "AMateria parametized constructor" <<  std :: endl;
}
AMateria & AMateria ::  operator = (const AMateria &obj)
{
    this->type = obj.type;
    return (*this);
}
std::string const & AMateria ::  getType() const
{
    return (type);
}
void AMateria :: use(ICharacter& target)
{
     std::cout << "* uses " << type << " on " << target.getName() << " *" << std::endl;
}
AMateria :: ~AMateria()
{
    std :: cout << "AMateria destructor" <<  std :: endl;
}