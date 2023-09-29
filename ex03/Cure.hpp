/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:39:10 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/29 11:53:12 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_H
#include "AMateria.hpp"

class Cure : public AMateria
{
    public :
        Cure();  
        Cure(const Cure &obj);  
        Cure &operator =(const Cure obj);
        AMateria* clone() const;
        void use(ICharacter& target);
        ~Cure();
};

#endif