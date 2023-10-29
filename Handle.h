#pragma once
#include <iostream>
#include <windows.h>
#include <cstdlib>

void setColor(int k);
void setLeft(int k, std::string);
void setCenter(std::string s);
int getCenter(std::string s);

void pause();
void clear();
void error(std::string s);
void sleep(int t);

int grabInt();
char grabChar();