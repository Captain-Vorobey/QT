#ifndef TANK_H
#define TANK_H
#include <vector>
#include <string>

struct Tank
{
    unsigned int m_dimension;
    bool m_base_view;
    unsigned int m_cost;
    unsigned int m_colour;

    template<typename T>
    T getDimension() const noexcept
    {
        return m_dimension;
    }

    bool getBase_view() const noexcept
    {
        return m_base_view;
    }

    unsigned int getCost() const noexcept
    {
        return m_cost;
    }

    unsigned int getColour() const noexcept
    {
        return m_colour;
    }

    Tank(unsigned int dimension, bool base_view, unsigned int cost, unsigned int colour)
    {
        m_dimension = dimension;
        m_base_view = base_view;
        m_cost = cost;
        m_colour = colour;
    }

    void showInfoTank()
    {
        std::cout << m_dimension << " " << m_base_view << " " << m_cost << " " << m_colour << std::endl;
    }
};

#endif // TANK_H
