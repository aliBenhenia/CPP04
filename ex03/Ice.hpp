/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:56:54 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/28 19:02:44 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H
#include "AMateria.hpp"

class Ice : public AMateria
{
    public :
        Ice();  
        Ice(const Ice obj);  
        Ice &operator =(const Ice obj);
        AMateria* clone() const;
        void use(ICharacter& target);
        ~Ice();
};

#endif