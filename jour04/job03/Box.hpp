#ifndef BOX_HPP
#define BOX_HPP

template <typename T>
class Box
{
private:
    T data;

public:
    Box(T data):data(data){};

    T getData() const { return data; }
};

template <typename T>
class Box<T *>
{
private:
    T *data;

public:
    // Constructeur qui initialise l'élément
    Box(T *data) : data(data) {}

    // Méthode pour accéder à l'élément déréférencé
    T &getData() const
    {
        return *data;
    }

    // Méthode pour définir un nouvel élément
    void setData(T *data)
    {
        data = data;
    }
};

#endif