#pragma once
#include<iostream>
#include<string>
using namespace std;


class PrintData {
public:
    void print(int i);
    void print(double f);
    void print(string s="No Data!");    // only header file->default settings
};