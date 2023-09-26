/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:31:38 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/26 19:12:22 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H
#include "Animal.hpp"
class Dog : public Animal{
    public :    
          Dog();
          void makeSound()const
            {
                std :: cout << type  << " MAKES SOUND\n";
            }
};

#endif