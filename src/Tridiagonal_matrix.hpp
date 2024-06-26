#pragma once

#include <iostream>
#include <utility>
#include <vector>
#include <array>

template<typename T>
struct elements{
    T a; //lower diagonal element
    T b; //main diagonal element
    T c; //upper diagonal element
};

template<typename T>
class Tridiagonal_matrix
{
private:
    std::vector<elements<T>> M;
public:
    Tridiagonal_matrix(const std::vector<elements<T>>& v) {
        this->M = v;
    }
    ~Tridiagonal_matrix()= default;
    const T operator()(unsigned long long int i,unsigned long long int j) const{
        T ret = 0;
        if(j == 0)
            return M[i].a;
        if(j==1)
            return M[i].b;
        if(j==2)
            return M[i].c;
        return ret;
    }
    unsigned long long int size() const{
        return M.size();
    }
};