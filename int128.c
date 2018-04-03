//
// Created by Zhukov on 2018/4/3.
//


#include "int128.h"

//ULINT赋值给Int128
struct Int128 AssignmentFromULINT(unsigned long long x)
{
    struct Int128 res;
    res.HO = 0;
    res.LO = x;
    return res;
}

//LINT赋值给Int128
struct Int128 AssignmentFromLINT(long long x)
{
    struct Int128 res;
    if (x>=0)
    {
        res.HO = 0;
        res.LO = (unsigned long)x;
    }
    else
    {
        res.HO = 0xFFFFFFFFFFFFFFFF;
        res.LO = (unsigned long)x;
    }

    return res;
}

/*
 * Int128比较
 * x>y => 1
 * x=y => 0
 * x<y => -1
 */
int CompareInt128(struct Int128 x, struct Int128 y)
{
    if (x.HO == 0)
    {
        if (y.HO == 0)
        {
            if (x.LO > y.LO)
            {
                return 1;
            }
            else if (x.LO == y.LO)
            {
                return 0;
            }
            else
            {
                return -1;
            }
        }
        else
        {
            return 1;
        }
    }
    else
    {
        if (y.HO == 0)
        {
            return -1;
        }
        else
        {
            if (x.LO > y.LO)
            {
                return 1;
            }
            else if (x.LO == y.LO)
            {
                return 0;
            }
            else
            {
                return -1;
            }
        }
    }
}