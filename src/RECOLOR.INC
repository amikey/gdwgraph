const	
// Table for converting VGA Colors 256-palette (mode 13h) to TColor for Delphi
// please do not forget, TColor is BGR formatted (instead of RGB)
	VGAColors: array[0..255] of Uint32 {=TColor!} =	(
{ 		clBlack, clBlue, clGreen, clAqua, clRed, clPurple, clOlive, clSilver,	// 1 (0-7)
		clGray, clSkyBlue, clLime, clTeal, clMaroon, clFuchsia, clYellow, clWhite, // 2 (8-15)
		clBlack, $696969, $696969, $808080, $A9A9A9, $A9A9A9, $C0C0C0, $C0C0C0,	// 3 (16..23)
		$D3D3D3, $D3D3D3, $DCDCDC, $E7E7E7, $EFEFEF, $F5F5F5, $FAFAFA, $FFFFFF, // 4 (24..31)
		$FF0000, $EE687B, $DB7093, $EE82EE, $FF00FF, $D670DA, $9314FF, $3C14DC, // 5 (32-39)
		$0000FF, $0045FF, $008CFF, $00D7FF, $00FFFF, $45EEFF, $2FFFAD, $00FF7F,	// 6 (40-47)
		$00FF00, $7FFF00, $9AFA00, $AACD66, $D4FF7F, $D0E040, $FF901E, $FF0000, // 7 (48-55)
		$DB7093, $DB7093, $D8BFD8, $EE82EE, $DDA0DD, $D670DA, $FE92FE, $B469FF,	// 8 (56-63)
		$7280FA, $7AA0FF, $90B0FF,  }


		$000000, $AA0000, $00AA00, $AAAA00, $0000AA, $AA00AA, $0055AA, $AAAAAA, // 1 (0-7)
		$555555, $FF5555, $55FF55, $FFFF55, $5555FF, $FF55FF, $55FFFF, $FFFFFF, // 2 (8-15)
		$000000, $101010, $202020, $353535, $454545, $555555, $656565, $757575, // 3 (16-23)
		$8A8A8A, $9A9A9A, $AAAAAA, $BABABA, $CACACA, $DFDFDF, $EFEFEF, $FFFFFF, // 4 (24-31)
		$FF0000, $FF0041, $FF0082, $FF00BE, $FF00FF, $BE00FF, $8200FF, $4100FF, // 5 (32-39)
		$0000FF, $0041FF, $0082FF, $00BEFF, $00FFFF, $00FFBE, $00FF82, $00FF41, // 6 (40-47)
		$00FF00, $41FF00, $82FF00, $BEFF00, $FFFF00, $FFBE00, $FF8200, $FF4100, // 7 (48-55)
		$FF8282, $FF829E, $FF82BE, $FF82DF, $FF82FF, $DF82FF, $BE82FF, $9E82FF, // 8 (56-63)
		$8282FF, $829EFF, $82BEFF, $82DFFF, $82FFFF, $82FFDF, $82FFBE, $82FF9E, // 9 (64-71)
		$82FF82, $9EFF82, $BEFF82, $DFFF82, $FFFF82, $FFDF82, $FFBE82, $FF9E82, // 10 (72-79)
		$FFBABA, $FFBACA, $FFBADF, $FFBAEF, $FFBAFF, $EFBAFF, $DFBAFF, $CABAFF, // 11 (80-87)
		$BABAFF, $BACAFF, $BADFFF, $BAEFFF, $BAFFFF, $BAFFEF, $BAFFDF, $BAFFCA, // 12 (88-95)
		$BAFFBA, $CAFFBA, $DFFFBA, $EFFFBA, $FFFFBA, $FFEFBA, $FFDFBA, $FFCABA, // 13 (96-103)
		$710000, $71001C, $710039, $710055, $710071, $550071, $390071, $1C0071, // 14 (104-111)
		$000071, $001C71, $003971, $005571, $007171, $007155, $007139, $00711C, // 15 (112-119)
		$007100, $1C7100, $397100, $557100, $717100, $715500, $713900, $711C00, // 16 (120-127)
		$713939, $713945, $713955, $713961, $713971, $613971, $553971, $453971, // 17 (128-135)
		$393971, $394571, $395571, $396171, $397171, $397161, $397155, $397145, // 18 (136-143)
		$397139, $457139, $557139, $617139, $717139, $716139, $715539, $714539, // 19 (144-151)
		$715151, $715159, $715161, $715169, $715171, $695171, $615171, $595171, // 20 (152-159)
		$515171, $515971, $516171, $516971, $517171, $517169, $517161, $517159, // 21 (160-167)
		$517151, $597151, $617151, $697151, $717151, $716951, $716151, $715951, // 22 (168-175)
		$410000, $410010, $410020, $410031, $410041, $310041, $200041, $100041, // 23 (176-183)
		$000041, $001041, $002041, $003141, $004141, $004131, $004120, $004110, // 24 (184-191)
		$004100, $104100, $204100, $314100, $414100, $413100, $412000, $411000, // 25 (192-199)
		$412020, $412028, $412031, $412039, $412041, $392041, $312041, $282041, // 26 (200-207)
		$202041, $202841, $203141, $203941, $204141, $204139, $204131, $204128, // 27 (208-215)
		$204120, $284120, $314120, $394120, $414120, $413920, $413120, $412820, // 28 (216-223)
		$412D2D, $412D31, $412D35, $412D3D, $412D41, $3D2D41, $352D41, $312D41, // 29 (224-231)
		$2D2D41, $2D3141, $2D3541, $2D3D41, $2D4141, $2D413D, $2D4135, $2D4131, // 30 (232-239)
		$2D412D, $31412D, $35412D, $3D412D, $41412D, $413D2D, $41352D, $41312D, // 31 (240-247)
		$000000, $000000, $000000, $000000, $000000, $000000, $000000, $000000  // 32 (248-255)
	);
