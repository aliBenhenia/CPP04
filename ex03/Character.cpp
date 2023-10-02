/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:11:10 by abenheni          #+#    #+#             */
/*   Updated: 2023/10/01 16:51:57 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"

Character :: Character()
{
    std :: cout << "Character default constructor" <<  std :: endl;
    int i = 0;
    while (i < 4)
    {
       data[i] = NULL; 
       i++;
    }
}
Character :: Character(const Character &obj)
{
    this->name = obj.name;
    int i = 0;
    while (i < 4)
    {
        if (data[i] != NULL)
            data[i] = obj.data[i]->clone();
        else
            data[i] = NULL;
       i++;
    }
    std :: cout << "Character copy constructor" <<  std :: endl;
}

Character :: Character(std::string const &name)
{
    this->name = name;
    int i = 0;
    while (i < 4)
    {
       data[i] = NULL; 
       i++;
    }
    std :: cout << "Character parametized constructor" <<  std :: endl;
}

Character &Character :: operator=(const Character &obj)
{
    this->name = obj.name;
    int i = 0;
    while (i < 4)
    {
        delete data[i];
        i++;
    }
    i = 0;
    while (i < 4)
    {
        if (data[i] != NULL)
            data[i] = obj.data[i]->clone();
        else
            data[i] = NULL;
       i++;
    }
    return (*this);
}
std::string const &Character ::  getName() const 
{
   return (name);
}
void Character :: equip(AMateria* m)
{
    int i = 0;
    while (i < 4)
    {
        if (!data[i])
        {
            data[i] = m->clone();
            break;
        }
        i++;
    }
}
void Character :: unequip(int idx)
{
    if (idx >= 0 && idx < 4)
        data[idx] = NULL;
}
void Character :: use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && data[idx] != NULL)
        data[idx]->use(target);
}
Character :: ~Character()
{
    int i = 0;
    while (i < 4)
    {
       delete data[i]; 
       i++;
    }
    std :: cout << "Character destructor" <<  std :: endl;
}