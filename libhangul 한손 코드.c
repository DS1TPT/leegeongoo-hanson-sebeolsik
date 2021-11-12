
///// hangulkeyboard.c에 들어갈 부분 /////

static const HangulCombination hangul_galmadeuli_3leegeongoo_onehand_right = {
    countof(hangul_galmadeuli_table_3leegeongoo_onehand),
    countof(hangul_galmadeuli_table_3leegeongoo_onehand),
    (HangulCombinationItem*)hangul_galmadeuli_table_3leegeongoo_onehand,
    true
};

static const HangulCombination hangul_galmadeuli_3leegeongoo_onehand_left = {
    countof(hangul_galmadeuli_table_3leegeongoo_onehand),
    countof(hangul_galmadeuli_table_3leegeongoo_onehand),
    (HangulCombinationItem*)hangul_galmadeuli_table_3leegeongoo_onehand,
    true
};


static const HangulKeyboard hangul_keyboard_3leegeongoo_onehand_right = {
    (char*)"3leegeongoo-onehand-right",
    (char*)N_("Sebeolsik Leegeongoo One Hand Right"),
    { (ucschar*)hangul_keyboard_table_3leegeongoo_onehand_right, NULL, NULL, NULL },
    { 
        (HangulCombination*)&hangul_combination_table_3leegeongoo_onehand, 
        NULL, 
        (HangulCombination*)&hangul_galmadeuli_table_3leegeongoo_onehand, NULL },
    HANGUL_KEYBOARD_TYPE_JASO,
    true,
    0x0000,
    {true, false, false, true, false},
    {(char*)&sebeol_3leegeongoo_onehand_right_moeum_key, NULL, NULL, NULL},
    {(ucschar*)&sebeol_3_moeum_value, NULL, NULL, NULL},
    {NULL, NULL}
};

static const HangulKeyboard hangul_keyboard_3leegeongoo_onehand_left = {
    (char*)"3leegeongoo-onehand-right",
    (char*)N_("Sebeolsik Leegeongoo One Hand Right"),
    { (ucschar*)hangul_keyboard_table_3leegeongoo_onehand_left, NULL, NULL, NULL },
    { 
        (HangulCombination*)&hangul_combination_table_3leegeongoo_onehand, 
        NULL, 
        (HangulCombination*)&hangul_galmadeuli_table_3leegeongoo_onehand, NULL },
    HANGUL_KEYBOARD_TYPE_JASO,
    true,
    0x0000,
    {true, false, false, true, false},
    {(char*)&sebeol_3leegeongoo_onehand_left_moeum_key, NULL, NULL, NULL},
    {(ucschar*)&sebeol_3_moeum_value, NULL, NULL, NULL},
    {NULL, NULL}
};


// ㅗ, ㅜ // 이건구 한 손 오른손
const char sebeol_3leegeongoo_onehand_right_moeum_key[] = {'R', 'E', 0x00};
// ㅗ, ㅜ // 이건구 한 손 왼손
const char sebeol_3leegeongoo_onehand_left_moeum_key[] = {'U', 'I', 0x00};


///// hangulkeyboard.h에 들어갈 부분 /////

static const ucschar hangul_keyboard_table_3leegeongoo_onehand_right[] = { // 이건구 한 손 세벌식 오른손
    0x0000,     /* 0x00 null                                         */
    0x0000,     /* 0x01 start of heading                             */
    0x0000,     /* 0x02 start of text                                */
    0x0000,     /* 0x03 end of text                                  */
    0x0000,     /* 0x04 end of transmission                          */
    0x0000,     /* 0x05 enquiry                                      */
    0x0000,     /* 0x06 acknowledge                                  */
    0x0000,     /* 0x07 bell                                         */
    0x0000,     /* 0x08 backspace                                    */
    0x0000,     /* 0x09 character tabulation                         */
    0x0000,     /* 0x0A line feed (lf)                               */
    0x0000,     /* 0x0B line tabulation                              */
    0x0000,     /* 0x0C form feed (ff)                               */
    0x0000,     /* 0x0D carriage return (cr)                         */
    0x0000,     /* 0x0E shift out                                    */
    0x0000,     /* 0x0F shift in                                     */
    0x0000,     /* 0x10 data link escape                             */
    0x0000,     /* 0x11 device control one                           */
    0x0000,     /* 0x12 device control two                           */
    0x0000,     /* 0x13 device control three                         */
    0x0000,     /* 0x14 device control four                          */
    0x0000,     /* 0x15 negative acknowledge                         */
    0x0000,     /* 0x16 synchronous idle                             */
    0x0000,     /* 0x17 end of transmission block                    */
    0x0000,     /* 0x18 cancel                                       */
    0x0000,     /* 0x19 end of medium                                */
    0x0000,     /* 0x1A substitute                                   */
    0x0000,     /* 0x1B escape                                       */
    0x0000,     /* 0x1C information separator four                   */
    0x0000,     /* 0x1D information separator three                  */
    0x0000,     /* 0x1E information separator two                    */
    0x0000,     /* 0x1F information separator one                    */
    0x0000,     /* 0x20 space                                        */
    0x2026,     /* 0x21 exclam: …                                    */
    0x0022,     /* 0x22 quotedbl: quotation mark                     */
    0x25cb,     /* 0x23 numbersign: ○                                */
    0x25a1,     /* 0x24 dollar: □                                    */
    0x1163,     /* 0x25 percent: ㅑ                                  */
    0x1168,     /* 0x26 ampersand: ㅖ                                */
    0x0027,     /* 0x27 apostrophe: apostrophe                       */
    0x002a,     /* 0x28 parenleft: left parenthesis                  */
    0xffe6,     /* 0x29 parenright: right parenthesis                */
    0x0026,     /* 0x2A asterisk: &                                  */
    0x002b,     /* 0x2B plus: plus sign                              */
    0x0030,     /* 0x2C comma: 0                                     */
    0x002d,     /* 0x2D minus: minus sign                            */
    0x003b,     /* 0x2E period: ;                                    */
    0x002f,     /* 0x2F slash: slash                                 */
    0x0039,     /* 0x30 0: 9                                         */
    0x2015,     /* 0x31 1: ―                                         */
    0x203b,     /* 0x32 2: ※                                        */
    0x0028,     /* 0x33 3: (                                         */
    0x0029,     /* 0x34 4: )                                         */
    0x1163,     /* 0x35 5: ㅑ                                        */
    0x11ba,     /* 0x36 6: _ㅅ                                       */
    0x11b8,     /* 0x37 7: _ㅂ                                       */
    0x0037,     /* 0x38 8: 7                                         */
    0x0038,     /* 0x39 9: 8                                         */
    0x0023,     /* 0x3A colon: #                                     */
    0x0033,     /* 0x3B semicolon: 3                                 */
    0x00b7,     /* 0x3C less: ·                                      */
    0x003d,     /* 0x3D equal: equals sign                           */
    0x003a,     /* 0x3E greater: :                                   */
    0x003f,     /* 0x3F question: question mark                      */
    0x00d7,     /* 0x40 at: ×                                        */
    0x300e,     /* 0x41 A: 『                                        */
    0x1169,     /* 0x42 B: ㅗ                                        */
    0x1172,     /* 0x43 C: ㅠ                                        */
    0x1100,     /* 0x44 D: ㄱ                                        */
    0x116e,     /* 0x45 E: ㅜ                                        */
    0x110b,     /* 0x46 F: ㅇ                                        */
    0x1161,     /* 0x47 G: ㅏ                                        */
    0x1175,     /* 0x48 H: ㅣ                                        */
    0x0024,     /* 0x49 I: $                                         */
    0x1173,     /* 0x4A J: ㅡ                                        */
    0x0021,     /* 0x4B K: !                                         */
    0x0040,     /* 0x4C L: @                                         */
    0x116e,     /* 0x4D M: ㅜ                                        */
    0x1162,     /* 0x4E N: ㅐ                                        */
    0x0025,     /* 0x4F O: %                                         */
    0x005e,     /* 0x50 P: ^                                         */
    0x300a,     /* 0x51 Q: 《                                        */
    0x1169,     /* 0x52 R: ㅗ                                        */
    0x003c,     /* 0x53 S: <                                         */
    0x1165,     /* 0x54 T: ㅓ                                        */
    0x1166,     /* 0x55 U: ㅔ                                        */
    0x116d,     /* 0x56 V: ㅛ                                        */
    0x300b,     /* 0x57 W: 》                                        */
    0x003e,     /* 0x58 X: >                                         */
    0x1167,     /* 0x59 Y: ㅕ                                        */
    0x300f,     /* 0x5A Z: 』                                        */
    0x005b,     /* 0x5B bracketleft: left bracket                    */
    0x005c,     /* 0x5C backslash: backslash                         */
    0x005d,     /* 0x5D bracketright: right bracket                  */
    0x1174,     /* 0x5E asciicircum: circumflex accent               */
    0x005f,     /* 0x5F underscore: underscore                       */
    0x0060,     /* 0x60 quoteleft: grave accent                      */
    0x300c,     /* 0x61 a: 「                                        */
    0x1106,     /* 0x62 b: ㅁ                                        */
    0x1102,     /* 0x63 c: ㄴ                                        */
    0x1100,     /* 0x64 d: ㄱ                                        */
    0x110c,     /* 0x65 e: ㅈ                                        */
    0x110b,     /* 0x66 f: ㅇ                                        */
    0x1107,     /* 0x67 g: ㅂ                                        */
    0x11ab,     /* 0x68 h: _ㄴ                                       */
    0x0034,     /* 0x69 i: 4                                         */
    0x11bc,     /* 0x6A j: _ㅇ                                       */
    0x0031,     /* 0x6B k: 1                                         */
    0x0032,     /* 0x6C l: 2                                         */
    0x11bb,     /* 0x6D m: _ㅆ                                       */
    0x11b7,     /* 0x6E n: _ㅁ                                       */
    0x0035,     /* 0x6F o: 5                                         */
    0x0036,     /* 0x70 p: 6                                         */
    0x3008,     /* 0x71 q: 〈                                        */
    0x1109,     /* 0x72 r: ㅅ                                        */
    0x002c,     /* 0x73 s: ,                                         */
    0x1105,     /* 0x74 t: ㄹ                                        */
    0x11a8,     /* 0x75 u: _ㄱ                                       */
    0x1103,     /* 0x76 v: ㄷ                                        */
    0x3009,     /* 0x77 w: 〉                                        */
    0x002e,     /* 0x78 x: .                                         */
    0x11af,     /* 0x79 y: _ㄹ                                       */
    0x300d,     /* 0x7A z: 」                                        */
    0x007b,     /* 0x7B braceleft: left brace                        */
    0x007c,     /* 0x7C bar: vertical line(bar)                      */
    0x007d,     /* 0x7D braceright: right brace                      */
    0x007e,     /* 0x7E asciitilde: tilde                            */
    0x0000      /* 0x7F delete                                       */
};



/* 이건구 한 손 세벌식 공통 조합규칙 */
static const HangulCombinationItem hangul_combination_table_3leegeongoo_onehand[] = {
  //첫 된소리 조합 규칙
  { 0x11001100, 0x1101 }, /* choseong  kiyeok ㄱ + kiyeok ㄱ  = ssangkiyeok ㄲ  */
  { 0x11031100, 0x1104 }, /* choseong  tikeut ㄷ + kiyeok ㄱ  = ssangtikeut ㄸ  */
  { 0x11071100, 0x1108 }, /* choseong  pieup  ㅂ + kiyeok ㄱ  = ssangpieup  ㅃ  */
  { 0x11091100, 0x110a }, /* choseong  sios   ㅅ + kiyeok ㄱ  = ssangsios   ㅆ  */
  { 0x110c1100, 0x110d }, /* choseong  cieuc  ㅈ + kiyeok ㄱ  = ssangcieuc  ㅉ  */

  //첫 거센소리 조합 규칙
  { 0x1100110b, 0x110F }, /* choseong  kiyeok ㄱ + ieung ㅇ = khiyeok ㅋ */
  { 0x1103110b, 0x1110 }, /* choseong  tikeut ㄷ + ieung ㅇ = thieuth ㅌ */
  { 0x1107110b, 0x1111 }, /* choseong  pieup  ㅂ + ieung ㅇ = phieup  ㅍ */
  { 0x110c110b, 0x110e }, /* choseong  cieuc  ㅈ + ieung ㅇ = chieuc  ㅊ */
  { 0x110b110b, 0x1112 }, /* choseong  ieung  ㅇ + ieung ㅇ = hieuh   ㅎ */

  //가 조합 규칙
  { 0x11691161, 0x116a }, /* jungseong o  ㅗ + a  ㅏ = wa   ㅘ */
  { 0x11691162, 0x116b }, /* jungseong o  ㅗ + ae ㅐ = wae  ㅙ */
  { 0x11691175, 0x116c }, /* jungseong o  ㅗ + i  ㅣ = oe   ㅚ */
  { 0x116e1165, 0x116f }, /* jungseong u  ㅜ + eo ㅓ = weo  ㅝ */
  { 0x116e1166, 0x1170 }, /* jungseong u  ㅜ + e  ㅔ = we   ㅞ */
  { 0x116e1175, 0x1171 }, /* jungseong u  ㅜ + i  ㅣ = wi   ㅟ */
  { 0x11631163, 0x1164 }, /* jungseong ya ㅑ + ya ㅑ = yae  ㅒ */

  //끝 치환 규칙
  { 0x11ab11ab, 0x11c0 }, /* jongseong nieun      ㄴ + nieun      ㄴ  = thieuth ㅌ */
  { 0x11af11af, 0x11bf }, /* jongseong rieul      ㄹ + rieul      ㄹ  = khieukh ㅋ */
  { 0x11b711b7, 0x11ae }, /* jongseong mieum      ㅁ + mieum      ㅁ  = tigeut  ㄷ */
  { 0x11b811b8, 0x11c1 }, /* jongseong pieup      ㅂ + pieup      ㅂ  = phieuph ㅍ */
  { 0x11ba11ba, 0x11bd }, /* jongseong sios       ㅅ + sios       ㅅ  = cieuc   ㅈ */
  { 0x11bb11bb, 0x11be }, /* jongseong ssangsios  ㅆ + ssangsios  ㅆ  = chieuch ㅊ */
  { 0x11bc11bc, 0x11c2 }, /* jongseong ieung      ㅇ + ieung      ㅇ  = hieuh   ㅎ */


  //끝 겹받침 조합 규칙
  { 0x11a811a8, 0x11a9 }, /* jongseong kiyeok      ㄱ + kiyeok ㄱ = ssangkiyeok   ㄲ */
  { 0x11a811ba, 0x11aa }, /* jongseong kiyeok      ㄱ + sios   ㅅ = kiyeok-sois   ㄳ */
  { 0x11ab11ba, 0x11ac }, /* jongseong nieun       ㄴ + sios   ㅅ = nieun-cieuc   ㄵ */
  { 0x11ab11bc, 0x11ad }, /* jongseong nieun       ㄴ + ieung  ㅇ = nieun-hieuh   ㄶ */
  { 0x11af11a8, 0x11b0 }, /* jongseong rieul       ㄹ + kiyeok ㄱ = rieul-kiyeok  ㄺ */
  { 0x11af11b7, 0x11b1 }, /* jongseong rieul       ㄹ + mieum  ㅁ = rieul-mieum   ㄻ */
  { 0x11af11b8, 0x11b2 }, /* jongseong rieul       ㄹ + pieup  ㅂ = rieul-pieup   ㄼ */
  { 0x11af11ba, 0x11b3 }, /* jongseong rieul       ㄹ + sios   ㅅ = rieul-sios    ㄽ */
  { 0x11af11ab, 0x11b4 }, /* jongseong rieul       ㄹ + nieun  ㄴ = rieul-thieuth ㄾ */
  { 0x11b211b8, 0x11b5 }, /* jongseong rieul-pieup ㄼ + pieup  ㅂ = rieul-phieuph ㄿ */
  { 0x11af11bc, 0x11b6 }, /* jongseong rieul       ㄹ + ieung  ㅇ = rieul-hieuh   ㅀ */
  { 0x11b811ba, 0x11b9 }, /* jongseong pieup       ㅂ + sios   ㅅ = pieup-sios    ㅄ */
};

static const HangulCombinationItem hangul_galmadeuli_table_3leegeongoo_onehand[] = {
  /* choseong -> jungseong */
  { 0x1102, 0x1172 },  /* choseong nieun  ㄴ          jungseong yu ㅠ */
  { 0x1103, 0x116d },  /* choseong tiguet ㄷ          jungseong yo ㅛ */
  { 0x1105, 0x1165 },  /* choseong rieul  ㄹ          jungseong u  ㅓ */
  { 0x1106, 0x1169 },  /* choseong mieum  ㅁ          jungseong o  ㅗ */
  { 0x1107, 0x1161 },  /* choseong pieup  ㅂ          jungseong a  ㅏ */
  { 0x1109, 0x1169 },  /* choseong sios   ㅅ          jungseong o  ㅗ */
  { 0x110c, 0x116e },  /* choseong cieuc  ㅈ          jungseong u  ㅜ */

  /* jongseong -> jungseong */
  { 0x11a8, 0x1166 },  /* jongseong kiyeok    ㄱ    -> jungseong e   ㅔ */
  { 0x11ab, 0x1175 },  /* jongseong nieun     ㄴ    -> jungseong i   ㅣ */
  { 0x11af, 0x1167 },  /* jongseong rieul     ㄹ    -> jungseong yeo ㅕ */
  { 0x11b7, 0x1162 },  /* jongseong mieum     ㅁ    -> jungseong ae  ㅐ */
  { 0x11b8, 0x1168 },  /* jongseong pieup     ㅂ    -> jungseong ye  ㅖ */
  { 0x11ba, 0x1174 },  /* jongseong sios      ㅅ    -> jungseong eui ㅢ */
  { 0x11bb, 0x116e },  /* jongseong ssangsios ㅆ    -> jungseong u   ㅜ */
  { 0x11bc, 0x1173 },  /* jongseong ieung     ㅇ    -> jungseong eu  ㅡ */
};
