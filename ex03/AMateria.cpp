/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:35:05 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/29 12:07:21 by abenheni         ###   ########.fr       */
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
AMateria  :: AMateria(std::string const & type)
{
    this->type = type;
    std :: cout << "AMateria parametized constructor" <<  std :: endl;
}
AMateria & AMateria ::  operator = (const AMateria &obj)
{
    this->type = type;
}
std::string const & AMateria ::  getType() const
{
    return (type);
}
AMateria :: ~AMateria()
{
    std :: cout << "AMateria destructor" <<  std :: endl;
}