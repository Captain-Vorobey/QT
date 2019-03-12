#ifndef DRIPKA_H
#define DRIPKA_H

#include <iostream>
#include <vector>
#include <string>

struct Dripka
{
    using size_type = std::size_t;

    std::string m_name;
    unsigned int m_diameter;
    size_type m_quantityCoil;
    int m_colour;
    std::string m_material;
    unsigned int m_cost;

    std::string getName()
    {
        return m_name;
    }

    unsigned int getDiametr()
    {
        return m_diameter;
    }

    size_type getQuantityCoil()
    {
        return m_quantityCoil;
    }

    int getColour()
    {
        return m_colour;
    }

    std::string getMaterial()
    {
        return m_material;
    }

    unsigned int getCost()
    {
        return  m_cost;
    }

    Dripka(std::string name, unsigned int diameter, size_type quantityCoil, int colour, std::string material, unsigned int cost)
    {
        m_name = name;
        m_diameter = diameter;
        m_quantityCoil = quantityCoil;
        m_colour = colour;
        m_material = material;
        m_cost = cost;
    }

    void showInfoDripka()
    {
        std::cout << m_name << " " << m_diameter << " " << m_quantityCoil << " " << m_colour << " " << m_material << " " << m_cost << std::endl;
    }
};

#endif // DRIPKA_H
