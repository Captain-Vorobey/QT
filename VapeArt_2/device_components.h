#ifndef DEVICE_COMPONENTS_H
#define DEVICE_COMPONENTS_H

#include <iostream>
#include <vector>
#include <string>

#include "colours.h"

struct BoxMod
{
    struct AccumulatorСharacteristic
    {
        std::size_t m_min_power;
        std::size_t m_max_power;
        AccumulatorСharacteristic(std::size_t min_power = 0, std::size_t max_power = 0): m_min_power(min_power),
            m_max_power(max_power){}
    };

    std::string m_name;
    AccumulatorСharacteristic accumulatorCharacteristic;
    double m_resistance;
    unsigned int m_weight;
    Colour m_colour;
    int m_cost;

    std::string getName() const noexcept
    {
        return m_name;
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

    Box_mod(std::string name, unsigned int power, double resistance, unsigned int weight, unsigned int colour, unsigned int cost)
    {
        m_name = name;
        m_power = power;
        m_resistance = resistance;
        m_weight = weight;
        m_colour = colour;
        m_cost = cost;
    }

    void showInfoBoxMod()
    {
        std::cout << m_name << " " << m_battery_size << " " << m_power << " " << m_resistance << " " << m_weight << " " << m_colour << " " << m_cost << std::endl;
    }

};

struct Battery
{


};

struct Atomizer
{



};

struct Tank
{



};

#endif // DEVICE_COMPONENTS_H
