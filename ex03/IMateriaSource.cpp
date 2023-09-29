/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:03:53 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/29 14:16:55 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

MateriaSource :: MateriaSource()
{
	std :: cout << "MateriaSource default constructor" << std :: endl;
}
MateriaSource :: MateriaSource(const MateriaSource &obj)
{
	std :: cout << "MateriaSource copy constructor" << std :: endl;
}
MateriaSource & MateriaSource :: operator=(const MateriaSource &obj)
{
	std :: cout << "MateriaSource assignment constructor" << std :: endl;
}
void MateriaSource :: learnMateria(AMateria* m)
{
	if (numLearnedMaterias < 4)
	{
		data[numLearnedMaterias] = m->clone();
		numLearnedMaterias++;
	}
}
AMateria *AMateria :: createMateria(std::string const & type)
{
	int i = 0;
	while (i < numLearnedMaterias)
	{
		if (data[numLearnedMaterias]->getType() == type)
			return (data[numLearnedMaterias]->clone());
		i++;
	}
	return (NULL);
}
MateriaSource :: ~MateriaSource()
{
	std :: cout << "MateriaSource destructor" << std :: endl;
}