#pragma once
#include <iostream>
using namespace std;

class Math
{
public:
    float root;
    float root1;
    float root2;
    Math(float t, float t1, float t2)
    {
        root = t;
        root1 = t1;
        root2 = t2;
    }
    virtual void Print() = 0;
};

class rectangle : public Math
{
public:
    rectangle(float root, float root1) : Math(root, root1, root2)
    {};
    virtual void Print()
    {
        float w;
        w = root * root1;
        cout << "\n\n";
        cout << "Ploshad pramouqolnika so storonami " << root << " and " << root1 << " = " << w << "\n";
        cout << "\n\n";
    }
};

class circle : public Math
{
public:
    circle(float root2) : Math(root, root1, root2)
    {};
    virtual void Print()
    {
        float e;
        e = 3.14 * root2 * root2;
        cout << "\n\n";
        cout << "Ploshad kruqa s radusom " << root2 << " = " << e << "\n";
        cout << "\n\n";
    }
};

class right_triangle : public Math
{
public:
    right_triangle(float root, float root1) : Math(root, root1, root2)
    {};
    virtual void Print()
    {
        cout << "\n\n";
        float o;
        o = root * root1 / 2;
        cout << "Ploshad pramouqolnoqo treuqolnika s katetami " << root << " and " << root1 << " = " << o << "\n";
        cout << "\n\n";
    }
};

class Trapeze : public Math
{
public:
    Trapeze(float root, float root1, float root2) : Math(root, root1, root2)
    {};
    virtual void Print()
    {
        cout << "\n\n";
        float g;
        g = (root + root1) / 2 * root2;
        cout << "Plosad trapetsiyi s osnovaniyami " << root << " and " << root1 << " = " << g << "\n";
        cout << "\n\n";
    }
};