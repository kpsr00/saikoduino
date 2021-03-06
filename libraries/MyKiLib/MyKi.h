/*
  MyKi.h - Library for flashing MyKi lights
  Created by Daniel M. Taub, Feb 24, 2013
  Released under GPLv3
*/

#ifndef MyKi_h
#define MyKi_h

#include <Arduino.h>

class MyKi
{
  public:
    MyKi();
    void rgbwSend(unsigned int r,unsigned int g,unsigned int b,unsigned int w);
    void rgbw8Send(int r,int g,int b,int w);
    void hsiSend(float h,float s,float i);
    void setScale(int scale);
    bool toggle(int state);
  private:
    bool _blackout;
    int _scale;
    unsigned int _r,_g,_b,_w;

    void updateLight();
    void scale();
    void hsi2rgbw(float H, float S, float I);
};

#endif

