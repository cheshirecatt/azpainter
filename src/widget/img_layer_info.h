/*$
 Copyright (C) 2013-2019 Azel.

 This file is part of AzPainter.

 AzPainter is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 AzPainter is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
$*/

/***********************************************
 * レイヤ一覧表示部分で使うイメージのパターン
 ***********************************************/

//表示状態ボックス (2bit 4色)

static const unsigned char g_img_visible_2bit[]={
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x50,0x55,0x15,0x50,0x55,0x55,0x01,0x44,0x55,
0x45,0x90,0xaa,0xaa,0x01,0x14,0x55,0x51,0x90,0xaa,0xaa,0x01,0x54,0x54,0x54,0x90,
0xaa,0xaa,0x01,0x54,0x11,0x55,0x90,0xaa,0xaa,0x01,0x54,0x45,0x55,0x90,0xaa,0xaa,
0x01,0x54,0x11,0x55,0x90,0xaa,0xaa,0x01,0x54,0x54,0x54,0x90,0xaa,0xaa,0x01,0x14,
0x55,0x51,0x90,0xaa,0xaa,0x01,0x44,0x55,0x45,0x90,0xaa,0xaa,0x01,0x50,0x55,0x15,
0x50,0x55,0x55,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00 };

//各フラグボックス (1bit : [12x12] x 5)

static const unsigned char g_img_flags[]={
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0x00,0x04,0xfe,0xe7,0x1f,0x00,0x00,
0x90,0x00,0x0a,0xfe,0xe7,0x1f,0x00,0x02,0x90,0x00,0x11,0x0e,0xe7,0x1c,0x00,0x03,
0xfc,0x83,0x38,0x06,0x66,0x18,0x80,0x03,0x04,0x42,0x7c,0x06,0x66,0x18,0xc2,0x01,
0xf4,0xc2,0xfe,0x06,0xe6,0x1c,0xe6,0x00,0x64,0x42,0x7f,0x06,0xe6,0x1f,0x7e,0x00,
0x64,0x42,0x3e,0x0e,0xe7,0x03,0x3c,0x00,0x04,0x42,0x1c,0xfe,0x07,0x78,0x18,0x00,
0xfc,0x63,0x08,0xfe,0x07,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 };

//フォルダ矢印

static const unsigned char g_img_arrow_right[9] =
	{ 0x01,0x03,0x07,0x0f,0x1f,0x0f,0x07,0x03,0x01 };
static const unsigned char g_img_arrow_down[10] =
	{ 0xff,0x01,0xfe,0x00,0x7c,0x00,0x38,0x00,0x10,0x00 };

//フォルダアイコン

static const unsigned char g_img_folder_icon[]={
0x3f,0x00,0x3f,0x00,0x00,0x00,0xff,0x03,0xff,0x03,0xff,0x03,0xff,0x03,0xff,0x03,0xff,0x03 };

//合成モード用アルファベット ([6x7] x 26)

static const unsigned char g_img_alphabet[]={
0xc4,0xe3,0x1c,0xdf,0xe7,0x44,0x8e,0x17,0x05,0x51,0xe4,0x3c,0xce,0xe3,0x7c,0x51,
0x14,0x45,0xd1,0x07,0x44,0x14,0x25,0x41,0x10,0x45,0x04,0x92,0x04,0xdb,0x14,0x45,
0x51,0x14,0x11,0x51,0x14,0x45,0x11,0x04,0x4a,0x14,0x45,0x41,0x10,0x44,0x04,0x52,
0x04,0xdb,0x14,0x45,0x51,0x14,0x10,0x51,0x54,0x29,0x11,0x02,0xca,0x13,0x44,0xdf,
0xd3,0x7d,0x04,0x32,0x04,0x5b,0x15,0x3d,0xd1,0xe3,0x10,0x91,0x52,0x11,0x0a,0x01,
0x5f,0x14,0x44,0x41,0x10,0x45,0x44,0x52,0x04,0x55,0x16,0x05,0x55,0x02,0x11,0x91,
0xf2,0x29,0x84,0x00,0x51,0x14,0x25,0x41,0x10,0x45,0x44,0x92,0x04,0x51,0x16,0x05,
0x59,0x14,0x11,0x11,0xe1,0x44,0x44,0x00,0xd1,0xe3,0x1c,0x5f,0xe0,0x45,0x8e,0x11,
0x7d,0x51,0xe4,0x04,0x5e,0xe4,0x10,0x0e,0xe1,0x44,0xc4,0x07 };

//カラータイプ - GRAY ([8x8])

static const unsigned char g_img_coltype_gray[]={
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xff,0x00,0x33,0x66,0x98,0xcb,0xff,0x00,0xff,0x00,0x33,0x66,0x98,0xcb,0xff,0x00,
0xff,0x00,0x33,0x66,0x98,0xcb,0xff,0x00,0xff,0x00,0x33,0x66,0x98,0xcb,0xff,0x00,
0xff,0x00,0x33,0x66,0x98,0xcb,0xff,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00 };

//カラータイプ - 16bit (2bit)

static const unsigned char g_img_coltype_16bit[]={
0x55,0x55,0x01,0x00,0xa1,0x2a,0xa1,0x2a,0xa1,0x2a,0xa1,0x2a,0xa1,0x2a,0x01,0x00 };

//カラータイプ - 1bit (2bit)

static const unsigned char g_img_coltype_1bit[]={
0x40,0x55,0x04,0x00,0x84,0x2a,0x84,0x2a,0x80,0x2a,0xa1,0x2a,0xa1,0x2a,0x01,0x00 };
