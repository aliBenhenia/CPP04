#include "Brain.hpp"

Brain :: Brain()
{
    std :: cout << "Brain default constructor" << std :: endl;
}

Brain :: Brain(const Brain &obj)
{
    int i = 0;
    while (i < 100)
    {
        ideas[i] = obj.ideas[i];
        i++;
    }
    
    std :: cout << "Brain copy constructor" << std :: endl;
}

Brain &Brain :: operator = (const Brain &obj)
{
    int i = 0;
    while (i < 100)
    {
        ideas[i] = obj.ideas[i];
        i++;
    }
    std :: cout << "Brain assignment operator" << std :: endl;
    return (*this);
}

Brain :: ~Brain()
{
    std :: cout << "Brain destructor" << std :: endl;
}
