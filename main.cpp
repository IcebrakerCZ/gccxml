//
//  main.cpp
//  Hello World
//
//  Created by Horak, Jan on 9/2/14.
//  Copyright (c) 2014 akamai. All rights reserved.
//

#include <iostream>


class Member
{
public:
    Member()
    {
        if (true);
        {
            std::cout << "Member constructor" << std::endl;
        }
    }

    ~Member()
    {
        std::cout << "Member destructor" << std::endl;
    }
};


class Test
{
public:
    Test()
    {
        std::cout << "Test constructor" << std::endl;
    }

    ~Test()
    {
        std::cout << "Test destructor" << std::endl;
    }


private:
    Member m;
};


int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";

    Test t;
    t.~Test();

    return 0;
}

