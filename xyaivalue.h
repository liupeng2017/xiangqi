﻿#ifndef XYAIVALUE
#define XYAIVALUE

//各子的基本价值（子力价值）
//                             卒， 炮，  车，  马， 象，  士， 将
const int XYAIBasicValues[] = {80, 300, 500, 300, 250, 250, 0};

//各子的机动性价值（每多一步走法所加的分）
//                                卒， 炮，  车，  马， 象，  士， 将
const int XYAIMobilityValues[] = {15,  6,   6,  12,   1,   1,  0};

//各子的控制区域价值（所在的位置的价值）
const int XYAIPositionValues[7][10][9] = {
    { // 卒
        0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,
       -2,  0, -2,  0,  6,  0, -2,  0, -2,
        3,  0,  4,  0,  7,  0,  4,  0,  3,
       10, 18, 22, 35, 40, 35, 22, 18, 10,
       20, 27, 30, 40, 42, 40, 30, 27, 20,
       20, 30, 45, 55, 55, 55, 45, 30, 20,
       20, 30, 50, 65, 70, 65, 50, 30, 20,
        0,  0,  0,  2,  4,  2,  0,  0,  0
    },
    { // 炮
        0,  0,  1,  3,  3,  3,  1,  0,  0,
        0,  1,  2,  2,  2,  2,  2,  1,  0,
        1,  0,  4,  3,  5,  3,  4,  0,  1,
        0,  0,  0,  0,  0,  0,  0,  0,  0,
       -1,  0,  3,  0,  4,  0,  3,  0, -1,
        0,  0,  0,  0,  4,  0,  0,  0,  0,
        0,  3,  3,  2,  4,  2,  3,  3,  0,
        1,  1,  0, -5, -4, -5,  0,  1,  1,
        2,  2,  0, -4, -7, -4,  0,  2,  2,
        4,  4,  0, -5, -6, -5,  0,  4,  4
    },
    { // 车
        -6,  6,  4, 12,  0, 12,  4,  6, -6,
         5,  8,  6, 12,  0, 12,  6,  8,  5,
        -2,  8,  4, 12, 12, 12,  4,  8, -2,
         4,  9,  4, 12, 14, 12,  4,  9,  4,
         8, 12, 12, 14, 15, 14, 12, 12,  8,
         8, 11, 11, 14, 15, 14, 11, 11,  8,
         6, 13, 13, 16, 16, 16, 13, 13,  6,
         6,  8,  7, 14, 16, 14,  7,  8,  6,
         6, 12,  9, 16, 33, 16,  9, 12,  6,
         6,  8,  7, 13, 14, 13,  7,  8,  6
    },
    { // 马
        0, -3,  2,  0,  2,  0,  2, -3,  0,
       -3,  2,  4,  5,-10,  5,  4,  2, -3,
        5,  4,  6,  7,  4,  7,  6,  4,  5,
        4,  6, 10,  7, 10,  7, 10,  6,  4,
        2, 10, 13, 14, 15, 14, 13, 10,  2,
        2, 12, 11, 15, 16, 15, 11, 12,  2,
        5, 20, 12, 19, 12, 19, 12, 20,  5,
        4, 10, 11, 15, 11, 15, 11, 10,  4,
        2,  8, 15,  9,  6,  9, 15,  8,  2,
        2,  2,  2,  8,  2,  8,  2,  2,  2
    },
    { // 象
      0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,
     -2,  0,  0,  0,  3,  0,  0,  0, -2,
      0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0
    },
    { // 士
      0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  3,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0
    },
    { // 将
      0,  0,  0,  1,  5,  1,  0,  0,  0,
      0,  0,  0, -8, -8, -8,  0,  0,  0,
      0,  0,  0, -9, -9, -9,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0
    }
};

#endif // XYAIVALUE

