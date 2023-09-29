/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 19:40:48 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/29 19:41:18 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "IMateriaSource.hpp"
class MateriaSource : public IMateriaSource{
    private :
        AMateria *data[4];
    public :
    MateriaSource();
    MateriaSource(const MateriaSource &obj);
    MateriaSource &operator =(const MateriaSource &obj);
    void learnMateria(AMateria*m);
    AMateria* createMateria(std::string const & type);
    ~MateriaSource();
};