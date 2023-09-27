/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:31:38 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/27 14:15:08 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H
#include "Animal.hpp"
class Dog : public Animal{
    public :    
        Dog();
        Dog(const Dog &obj);
        Dog & operator =(const Dog &obj);
        void makeSound()const;
        std :: string  getType() const;
        ~Dog();
};


#endif