/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 11:13:41 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/30 11:15:07 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_H
#define WRONGCAT_H
#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal{
    public :
         WrongCat();
         WrongCat(const WrongCat &obj);
         WrongCat &operator=(const WrongCat &obj);
         void makeSound()const;
         std :: string getType() const;
         ~WrongCat();
};
#endif