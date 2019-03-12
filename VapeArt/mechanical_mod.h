#ifndef MECHANICAL_MOD_H
#define MECHANICAL_MOD_H

#include <iostream>
#include <string>
#include <vector>

struct Mechanical_mod
{
    using size_type = std::size_t;

    std::string m_name;
    size_type m_battery_size;
    unsigned int m_power;
    double m_resistance;
    unsigned int m_weight;
    unsigned int m_colour;
    unsigned int m_cost;
    std::string m_material;

    std::string getName() const noexcept
    {
        return m_name;
    }

    size_type getBattery() const noexcept
    {
        return m_battery_size;
    }

    unsigned int getPower() const noexcept
    {
        return m_power;
    }

    double getResistance() const noexcept
    {
        return m_resistance;
    }

    unsigned int getWeight() const noexcept
    {
        return m_weight;
    }

    unsigned int getColour() const noexcept
    {
        return m_colour;
    }

    unsigned int getCost() const noexcept
    {
        return m_cost;
    }

    std::string getMaterial()
    {
        return m_material;
    }

    Mechanical_mod(std::string name, size_type battery_size, unsigned int power, double resistance, unsigned int weight, unsigned int colour, unsigned int cost, std::string material)
    {
        m_name = name;
        m_battery_size = battery_size;
        m_power = power;
        m_resistance = resistance;
        m_weight = weight;
        m_colour = colour;
        m_cost = cost;
        m_material = material;
    }

    void showInfoMechanicalMod()
    {
        std::cout << m_name << " " << m_battery_size << " " << m_power << " " << m_resistance << " " << m_weight << " " << m_colour << " " << m_cost << " " << m_material << std::endl;
    }

};

#endif // MECHANICAL_MOD_H
