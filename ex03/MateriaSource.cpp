/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:03:53 by abenheni          #+#    #+#             */
/*   Updated: 2023/10/01 18:36:32 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource :: MateriaSource()
{
	int i = 0;
	while (i < 4)
	{
		data[i] = NULL;
		i++;
	}
	std :: cout << "MateriaSource default constructor" << std :: endl;
}
MateriaSource :: MateriaSource(const MateriaSource &obj)
{
	int i = 0;
    while (i < 4)
    {
        if (data[i] != NULL)
            data[i] = obj.data[i]->clone();
        else
            data[i] = NULL;
       i++;
    }
	std :: cout << "MateriaSource copy constructor" << std :: endl;
}
MateriaSource & MateriaSource :: operator=(const MateriaSource &obj)
{
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
	std :: cout << "MateriaSource assignment constructor" << std :: endl;
	return (*this);
}
void MateriaSource :: learnMateria(AMateria* m)
{
	int i = 0;
	while (i < 4)
	{
		if (data[i] == NULL)
		{
			data[i] = m->clone();
			break;
		}
		i++;
	}
}
AMateria *MateriaSource::createMateria(std::string const &type)
{
	int i = 0;
	while (i < 4)
	{
		if (data[i] != NULL && data[i]->getType() == type)
			return (data[i]->clone());
		i++;
	}
	return (NULL);
}

MateriaSource :: ~MateriaSource()
{
	int i = 0;
	while (i < 4)
	{
		delete data[i];
		i++;
	}
	
	std :: cout << "MateriaSource destructor" << std :: endl;
}