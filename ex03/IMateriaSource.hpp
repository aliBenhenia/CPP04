/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 13:57:27 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/29 14:12:03 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"

class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {}
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource{
    private :
        AMateria *data[4];
        int numLearnedMaterias;
    public :
    MateriaSource();
    MateriaSource(const MateriaSource &obj);
    MateriaSource &operator =(const MateriaSource &obj);
    void learnMateria(AMateria*m);
    AMateria* createMateria(std::string const & type);
    ~MateriaSource();
};