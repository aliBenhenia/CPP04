/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:10:39 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/29 15:12:55 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICHARACTER
#define ICHARACTER

#include <iostream>
#include <string>
#include "AMateria.hpp"

class AMateria;
class ICharacter
{
    public:
        virtual ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter{
    private :
        std :: string name;
        AMateria *data[4];
    public :
        Character();
        Character(const Character &obj);
        Character(std::string const &name);
        Character &operator =(const Character &obj);
        std::string const & getName() const ;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        ~Character();
};
#endif

