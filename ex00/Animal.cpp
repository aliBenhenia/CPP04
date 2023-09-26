/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:55:00 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/26 19:10:27 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal :: Animal()
{
    type = "animal";
}

std :: string Animal ::  getType()const
{
    return (type);
}
void Animal :: makeSound() const
{
    std :: cout << type << " make some sound... !-------------->" << std :: endl;
}