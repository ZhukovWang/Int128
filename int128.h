//
// Created by Zhukov on 2018/4/3.
//

struct Int128
{
    long long HO;
    unsigned long long LO;
};

struct Int128 AssignmentFromULINT(unsigned long long x);
struct Int128 AssignmentFromLINT(long long x);

int CompareInt128(struct Int128 x, struct Int128 y);