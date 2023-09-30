/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:29:09 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/30 12:52:27 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_H
#define CAT_H
#include "Animal.hpp"
class Cat : public Animal{
    public :
        Cat();
        Cat(const Cat &obj);
        Cat &operator=(const Cat &obj);
        void makeSound()const;
        std :: string getType() const;
        ~Cat();
};

#endif