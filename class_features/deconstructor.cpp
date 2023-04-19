#include <iostream>


class Value
{
    public:
    Value(int capacity) : mCapacity(capacity)
    {
        p = new int[capacity];
    }
    ~Value()
    {
        delete[] p;
    }
    void setValue(int fill_value)
    {
        for (size_t i = 0; i < mCapacity; i++)
        {
            p[i] = fill_value;
        }
        
    }
    void displayValue()
    {
        for (size_t i = 0; i < mCapacity; i++)
        {
            std::cout << p[i] << ",";
        } 
        std::cout<< std::endl;
    }


    private:
    int *p;
    int mCapacity;
};

void UseValue(int v)
{
    Value value(v);
    value.setValue(v);
    value.displayValue();
};

int main()
{
    for (size_t i = 1; i < 11; i++)
    {
        UseValue(i);
    }
    
    return 0;
}