/******************************************************************************

  Copyright (C), 2020, CANAAN Tech. Co., Ltd.

 ******************************************************************************
  File Name     : isp_gamma_coeff.c
  Version       : Initial Draft
  Author        : 
  Created       : 
  Description   : 
  History       :
  1.Date        : 
    Author      :
    Modification: Created file

******************************************************************************/

int ISP_2K_YUV_GAMMA[256] = 
{
0x4000,
0x2B04,
0x2606,
0x2309,
0x200B,
0x1F0D,
0x1E0F,
0x1D11,
0x1C13,
0x1B14,
0x1A16,
0x1A18,
0x1919,
0x191B,
0x181C,
0x181E,
0x171F,
0x1721,
0x1722,
0x1624,
0x1625,
0x1627,
0x1628,
0x152A,
0x152B,
0x152C,
0x152E,
0x142F,
0x1430,
0x1431,
0x1433,
0x1434,
0x1435,
0x1337,
0x1338,
0x1339,
0x133A,
0x133C,
0x133D,
0x133E,
0x133F,
0x1240,
0x1241,
0x1243,
0x1244,
0x1245,
0x1246,
0x1247,
0x1248,
0x124A,
0x124B,
0x114C,
0x114D,
0x114E,
0x114F,
0x1150,
0x1151,
0x1152,
0x1154,
0x1155,
0x1156,
0x1157,
0x1158,
0x1159,
0x105A,
0x105B,
0x105C,
0x105D,
0x105E,
0x105F,
0x1060,
0x1061,
0x1062,
0x1063,
0x1064,
0x1065,
0x1066,
0x1067,
0x1068,
0x1069,
0x106A,
0xF6C,
0xF6C,
0xF6D,
0xF6E,
0xF6F,
0xF70,
0xF71,
0xF72,
0xF73,
0xF74,
0xF75,
0xF76,
0xF77,
0xF78,
0xF79,
0xF7A,
0xF7B,
0xF7C,
0xF7D,
0xF7E,
0xF7F,
0xF80,
0xF81,
0xF82,
0xE83,
0xE84,
0xE85,
0xE86,
0xE86,
0xE87,
0xE88,
0xE89,
0xE8A,
0xE8B,
0xE8C,
0xE8D,
0xE8E,
0xE8F,
0xE90,
0xE91,
0xE91,
0xE92,
0xE93,
0xE94,
0xE95,
0xE96,
0xE97,
0xE98,
0xE99,
0xE99,
0xE9A,
0xE9B,
0xE9C,
0xE9D,
0xE9E,
0xE9F,
0xEA0,
0xDA1,
0xDA1,
0xDA2,
0xDA3,
0xDA4,
0xDA5,
0xDA6,
0xDA7,
0xDA8,
0xDA8,
0xDA9,
0xDAA,
0xDAB,
0xDAC,
0xDAD,
0xDAE,
0xDAE,
0xDAF,
0xDB0,
0xDB1,
0xDB2,
0xDB3,
0xDB3,
0xDB4,
0xDB5,
0xDB6,
0xDB7,
0xDB8,
0xDB8,
0xDB9,
0xDBA,
0xDBB,
0xDBC,
0xDBD,
0xDBD,
0xDBE,
0xDBF,
0xDC0,
0xDC1,
0xDC2,
0xDC2,
0xDC3,
0xDC4,
0xDC5,
0xDC6,
0xDC7,
0xDC7,
0xDC8,
0xCC9,
0xCCA,
0xCCB,
0xCCB,
0xCCC,
0xCCD,
0xCCE,
0xCCF,
0xCCF,
0xCD0,
0xCD1,
0xCD2,
0xCD3,
0xCD3,
0xCD4,
0xCD5,
0xCD6,
0xCD7,
0xCD7,
0xCD8,
0xCD9,
0xCDA,
0xCDB,
0xCDB,
0xCDC,
0xCDD,
0xCDE,
0xCDF,
0xCDF,
0xCE0,
0xCE1,
0xCE2,
0xCE2,
0xCE3,
0xCE4,
0xCE5,
0xCE6,
0xCE6,
0xCE7,
0xCE8,
0xCE9,
0xCE9,
0xCEA,
0xCEB,
0xCEC,
0xCED,
0xCED,
0xCEE,
0xCEF,
0xCF0,
0xCF0,
0xCF1,
0xCF2,
0xCF3,
0xCF3,
0xCF4,
0xCF5,
0xCF6,
0xCF6,
0xCF7,
0xCF8,
0xCF9,
0xCF9,
0xCFA,
0xCFB,
0xCFC,
0xCFC,
0xCFD,
0xCFE,
0xCFF,
};


int ISP_2K_RGB_GAMMA[256] = 
{
0x4000,
0x2B04,
0x2606,
0x2309,
0x200B,
0x1F0D,
0x1E0F,
0x1D11,
0x1C13,
0x1B14,
0x1A16,
0x1A18,
0x1919,
0x191B,
0x181C,
0x181E,
0x171F,
0x1721,
0x1722,
0x1624,
0x1625,
0x1627,
0x1628,
0x152A,
0x152B,
0x152C,
0x152E,
0x142F,
0x1430,
0x1431,
0x1433,
0x1434,
0x1435,
0x1337,
0x1338,
0x1339,
0x133A,
0x133C,
0x133D,
0x133E,
0x133F,
0x1240,
0x1241,
0x1243,
0x1244,
0x1245,
0x1246,
0x1247,
0x1248,
0x124A,
0x124B,
0x114C,
0x114D,
0x114E,
0x114F,
0x1150,
0x1151,
0x1152,
0x1154,
0x1155,
0x1156,
0x1157,
0x1158,
0x1159,
0x105A,
0x105B,
0x105C,
0x105D,
0x105E,
0x105F,
0x1060,
0x1061,
0x1062,
0x1063,
0x1064,
0x1065,
0x1066,
0x1067,
0x1068,
0x1069,
0x106A,
0xF6C,
0xF6C,
0xF6D,
0xF6E,
0xF6F,
0xF70,
0xF71,
0xF72,
0xF73,
0xF74,
0xF75,
0xF76,
0xF77,
0xF78,
0xF79,
0xF7A,
0xF7B,
0xF7C,
0xF7D,
0xF7E,
0xF7F,
0xF80,
0xF81,
0xF82,
0xE83,
0xE84,
0xE85,
0xE86,
0xE86,
0xE87,
0xE88,
0xE89,
0xE8A,
0xE8B,
0xE8C,
0xE8D,
0xE8E,
0xE8F,
0xE90,
0xE91,
0xE91,
0xE92,
0xE93,
0xE94,
0xE95,
0xE96,
0xE97,
0xE98,
0xE99,
0xE99,
0xE9A,
0xE9B,
0xE9C,
0xE9D,
0xE9E,
0xE9F,
0xEA0,
0xDA1,
0xDA1,
0xDA2,
0xDA3,
0xDA4,
0xDA5,
0xDA6,
0xDA7,
0xDA8,
0xDA8,
0xDA9,
0xDAA,
0xDAB,
0xDAC,
0xDAD,
0xDAE,
0xDAE,
0xDAF,
0xDB0,
0xDB1,
0xDB2,
0xDB3,
0xDB3,
0xDB4,
0xDB5,
0xDB6,
0xDB7,
0xDB8,
0xDB8,
0xDB9,
0xDBA,
0xDBB,
0xDBC,
0xDBD,
0xDBD,
0xDBE,
0xDBF,
0xDC0,
0xDC1,
0xDC2,
0xDC2,
0xDC3,
0xDC4,
0xDC5,
0xDC6,
0xDC7,
0xDC7,
0xDC8,
0xCC9,
0xCCA,
0xCCB,
0xCCB,
0xCCC,
0xCCD,
0xCCE,
0xCCF,
0xCCF,
0xCD0,
0xCD1,
0xCD2,
0xCD3,
0xCD3,
0xCD4,
0xCD5,
0xCD6,
0xCD7,
0xCD7,
0xCD8,
0xCD9,
0xCDA,
0xCDB,
0xCDB,
0xCDC,
0xCDD,
0xCDE,
0xCDF,
0xCDF,
0xCE0,
0xCE1,
0xCE2,
0xCE2,
0xCE3,
0xCE4,
0xCE5,
0xCE6,
0xCE6,
0xCE7,
0xCE8,
0xCE9,
0xCE9,
0xCEA,
0xCEB,
0xCEC,
0xCED,
0xCED,
0xCEE,
0xCEF,
0xCF0,
0xCF0,
0xCF1,
0xCF2,
0xCF3,
0xCF3,
0xCF4,
0xCF5,
0xCF6,
0xCF6,
0xCF7,
0xCF8,
0xCF9,
0xCF9,
0xCFA,
0xCFB,
0xCFC,
0xCFC,
0xCFD,
0xCFE,
0xCFF,
};


