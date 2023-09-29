/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 19:31:16 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/29 19:32:38 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef CHARACTER_H
#define CHARACTER_H
#include "ICharacter.hpp"
#include "AMateria.hpp"
class AMateria;
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