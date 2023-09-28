/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:31:38 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/28 12:17:57 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H
#include "Animal.hpp"
class Dog : public Animal{
    private :
        Brain *brain_obj;
    public :    
        Dog();
        Dog(const Dog &obj);
        Dog & operator =(const Dog &obj);
        void makeSound()const;
        std :: string  getType() const;
        ~Dog();
};


#endif