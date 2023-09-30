/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:36:18 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/30 12:53:33 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>

class Animal
{
	protected :
		std :: string type ;
	public :
		Animal();
		Animal(const Animal &obj);
		Animal & operator = (const Animal &obj);
		std :: string getType() const;
		virtual void makeSound() const;
		~Animal();
};



#endif