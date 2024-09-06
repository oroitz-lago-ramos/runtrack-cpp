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

#endif