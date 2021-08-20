#include "Box.h"
#include<iostream>
// Implement setters and getters
       void Box::setlength(int l)
       {
         if (l > 0)
              length = l;
         else
              length = 0;
       }
       void Box::setwidth(int w)
       {
         if (w > 0)
             width = w;
          else
            width = 0;
       }
       void Box::setheight(int h)
       {
         if (h > 0)
             height = h;
         else
             height = 0;
       }

       int Box::getlength()
       {
         return length;
       }
       int Box::getwidth()
       {
         return width;
       }
       int Box::getheight()
       {
         return height;
       }

// Implemenet the calcVolume() unction
int Box::calcVolume() 
{
  return length * width * height;
}
