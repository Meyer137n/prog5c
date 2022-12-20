#pragma once
#include "matplate.h"
#include "ram.h"
#include "processor.h"
#include "videocard.h"
#include "dop.h"

class computer
{
private:
    matplate mt;
    ram rm;
    processor prc;
    videocard vdc;
    dop dp;
    double price;
    static int count;
    int id;
public:
    computer();
    computer(matplate mt, ram rm,processor prc, videocard vdc, dop dp, double price);
    void set_computer();
    void get_computer();
    int get_id();
    void set_id(int id);
};

