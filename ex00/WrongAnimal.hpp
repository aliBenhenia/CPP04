/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 11:10:28 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/30 11:20:10 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H
#include <iostream>
#include <string>
class WrongAnimal
{
    protected :
        std :: string type;
    public :
        WrongAnimal();
        WrongAnimal(const WrongAnimal &obj);
        WrongAnimal & operator = (const WrongAnimal &obj);
        std :: string getType() const;
        void makeSound() const;
        ~WrongAnimal();
};
#endif
