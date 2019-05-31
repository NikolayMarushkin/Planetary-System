#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H
#include <windows.h>
#include <glut.h>
#include <glaux.h>
#pragma comment(lib, "legacy_stdio_definitions.lib")

void Draw();
void Initialization();
void LoadTexture();
void Animation();
void Reshape(int x, int y);
void Timer(int = 0);
#endif