/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:29:09 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/26 19:12:13 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_H
#define CAT_H
#include "Animal.hpp"
class Cat : public Animal{
    public :
        Cat();
        void makeSound()const
        {
            std :: cout << type << " MAKES SOUND\n";
        }
};
#endif