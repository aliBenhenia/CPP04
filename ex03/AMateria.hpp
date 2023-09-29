/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:28:25 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/29 15:19:50 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA
#define AMATERIA
#include <iostream>
#include <string>
#include "ICharacter.hpp"
class ICharacter;
class AMateria
{
    protected:
        std :: string type;
    public:
    AMateria();
    AMateria (const AMateria &obj);
    AMateria &operator = (const AMateria &obj);
    AMateria(std::string const & type);
    std::string const & getType() const; 
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target) = 0;
    virtual ~AMateria();
};

#endif