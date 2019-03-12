#ifndef BOX_MOD_H
#define BOX_MOD_H
#include <string>
#include <vector>
#include <iostream>

struct Box_mod {

    using size_type = std::size_t;

    std::string m_name;
    size_type m_battery_size;
    unsigned int m_power;
    double m_resistance;
    unsigned int m_weight;
    int m_colour;
    int m_cost;

    std::string getName() const noexcept
    {
        return m_name;
    }

    size_type getBattery() const noexcept
    {
        return m_battery_size;
    }

    unsigned int getPower()
    {
        return m_power;
    }

    double getResistance()
    {
        return m_resistance;
    }

    unsigned int getWeight()
    {
        return m_weight;
    }

    int getColour()
    {
        return m_colour;
    }

    unsigned int getCost()
    {
        return m_cost;
    }

    Box_mod(std::string name, size_type battery_size, unsigned int power, double resistance, unsigned int weight, unsigned int colour, unsigned int cost)
    {
        m_name = name;
        m_battery_size = battery_size;
        m_power = power;
        m_resistance = resistance;
        m_weight = weight;
        m_colour = colour;
        m_cost = cost;
    }

    void showInfoBoxMod()
    {
        std::cout << m_name << " " << m_battery_size << " " << m_power << " " << m_resistance << " " << m_weight << " " << m_colour << " " << m_cost << " " << std::endl;
    }
};

#endif // BOX_MOD_H
