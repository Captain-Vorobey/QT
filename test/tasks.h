#ifndef TASKS_H
#define TASKS_H

int reverse_digit (int value)
{
    int result = 0;
    for (; value ; value /= 10)
    {
        result *= 10;
        result = result + value % 10;
    }
    return  result;
}

int sum_first_second(int value)
{
    int result = reverse_digit(value);
    int sum = 0;
    int counter = 0;
    for(; result; result /= 10)
    {
        if(counter <= 2)
        {
            sum += result % 10;
            ++counter;
        }
    }
    return sum;
}

#endif // TASKS_H
