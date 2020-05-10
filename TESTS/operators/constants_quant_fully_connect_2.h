#include <stdint.h>

const int8_t arr_input_2 [ 128 ] = {  74,  123,  82,  -64,  -88,  117,  -7,  -66,  -80,  117,  121,  62,  -100,  -81,  -54,  63,  15,  -101,  -89,  -64,  -34,  29,  -108,  -64,  -88,  89,  49,  -63,  -10,  70,  90,  65,  -10,  70,  -38,  -65,  -84,  117,  121,  63,  -117,  -76,  -128,  -128,  -128,  -128,  -128,  -75,  -128,  -128,  8,  -128,  -128,  -128,  -113,  -128,  -128,  -67,  -128,  -117,  -128,  -128,  -128,  -33,  -128,  -128,  -51,  -128,  -44,  -81,  -53,  -128,  -128,  -105,  -128,  -128,  -43,  -128,  -128,  -128,  -128,  -10,  -65,  -97,  -51,  -25,  -49,  -61,  -128,  -15,  -128,  -118,  -128,  -56,  -107,  -117,  -66,  -128,  -128,  -9,  -128,  -114,  -128,  -128,  -128,  -5,  -128,  -112,  -128,  -112,  -102,  -113,  -128,  -92,  -16,  -124,  -125,  -128,  -128,  -128,  -63,  -79,  -128,  -111,  -128,  -120,  -128,  -128,  };
const float input_scale_2 = 0.034354351460933685;
const int8_t input_zp_2 = -128;
const int8_t arr_filter_2 [ 1280 ] = {  52,  -90,  -49,  26,  75,  -25,  70,  -78,  69,  60,  -45,  -14,  14,  25,  -91,  65,  -39,  -82,  10,  -78,  -39,  62,  -47,  -103,  58,  -73,  47,  -84,  -53,  -33,  -50,  -6,  -35,  -40,  -59,  20,  30,  34,  -42,  -33,  36,  29,  77,  -63,  -26,  -59,  63,  -64,  45,  -78,  -68,  65,  -25,  68,  -70,  92,  -37,  -77,  -37,  36,  -78,  92,  -46,  74,  51,  -29,  46,  -10,  -89,  -31,  -76,  -48,  1,  23,  11,  45,  -60,  18,  18,  -14,  -25,  -47,  -53,  -45,  -3,  23,  -23,  53,  31,  -69,  53,  1,  33,  45,  52,  -19,  51,  2,  -71,  49,  -34,  63,  -22,  -46,  38,  58,  67,  45,  38,  -19,  -19,  104,  -70,  -39,  6,  52,  35,  -50,  -95,  -70,  65,  57,  76,  -72,  -26,  -37,  22,  -30,  33,  -49,  0,  24,  -52,  55,  -45,  38,  54,  -27,  21,  -42,  73,  -64,  36,  -26,  -18,  5,  16,  -18,  -2,  36,  2,  -40,  53,  -11,  -83,  29,  34,  -54,  33,  10,  -46,  25,  60,  -61,  55,  62,  -45,  -90,  20,  60,  80,  33,  -73,  7,  -56,  -38,  -18,  6,  19,  -30,  -32,  15,  16,  -13,  8,  10,  44,  -18,  -36,  -117,  -67,  12,  -33,  -22,  -73,  71,  73,  75,  -68,  -85,  -100,  47,  51,  80,  -15,  39,  -42,  81,  25,  -19,  -89,  84,  31,  -101,  6,  5,  -65,  -5,  -90,  43,  -48,  -38,  -37,  -25,  31,  74,  36,  -62,  35,  -6,  51,  -38,  28,  -10,  8,  2,  -40,  40,  -22,  25,  57,  61,  25,  -15,  53,  -93,  76,  8,  -13,  -90,  -9,  37,  -94,  30,  58,  2,  -73,  67,  -9,  6,  -66,  69,  28,  35,  -87,  -47,  67,  62,  -71,  50,  44,  77,  57,  -44,  -81,  -71,  -8,  26,  -72,  -68,  17,  -24,  61,  38,  37,  -92,  -49,  14,  -77,  -47,  -28,  -9,  60,  6,  50,  -23,  -7,  16,  -54,  57,  52,  64,  -14,  -59,  -55,  -28,  45,  -15,  0,  -71,  -95,  0,  -78,  72,  36,  -35,  -5,  -47,  56,  72,  -48,  -53,  -6,  49,  46,  13,  -35,  46,  -12,  -35,  39,  -55,  -1,  55,  13,  10,  -21,  0,  54,  -4,  -1,  36,  -26,  -49,  0,  -51,  -14,  -28,  -55,  18,  38,  -72,  59,  -59,  -5,  -64,  41,  26,  -17,  13,  52,  -49,  62,  53,  -85,  20,  -48,  -38,  7,  12,  67,  -36,  -26,  43,  -85,  23,  -43,  -9,  -37,  -23,  -62,  -29,  -32,  24,  -26,  30,  -66,  -41,  3,  -28,  -51,  19,  44,  -18,  -21,  -21,  -100,  34,  28,  19,  19,  56,  -4,  -33,  5,  -48,  9,  -69,  60,  -87,  18,  -5,  -32,  53,  -26,  84,  -31,  14,  -18,  62,  -70,  -29,  -44,  70,  42,  18,  60,  -38,  70,  68,  -28,  -28,  -39,  -3,  13,  44,  40,  30,  37,  30,  -60,  -24,  -28,  52,  -32,  53,  -23,  -89,  -16,  44,  66,  19,  40,  -37,  1,  8,  -5,  7,  48,  64,  -37,  63,  0,  53,  0,  -39,  75,  -19,  11,  -2,  34,  39,  -76,  -48,  55,  -62,  71,  114,  -39,  -65,  -67,  51,  10,  -6,  23,  -42,  -16,  -28,  -21,  -32,  -25,  -31,  45,  -85,  84,  45,  58,  -14,  -81,  31,  -81,  6,  -34,  61,  46,  -71,  -98,  64,  16,  57,  -16,  -48,  58,  -8,  -54,  47,  -33,  2,  -33,  -40,  -4,  -11,  -35,  1,  -54,  -4,  67,  16,  66,  -13,  -38,  -6,  -31,  20,  5,  -45,  -1,  -23,  30,  -2,  6,  -63,  21,  -49,  -56,  74,  -38,  -6,  -69,  56,  -62,  -19,  1,  -58,  -43,  -28,  54,  -27,  22,  59,  13,  65,  71,  -16,  44,  -39,  -36,  16,  65,  42,  -44,  12,  -58,  -6,  -6,  40,  -77,  29,  37,  -36,  25,  -40,  49,  -48,  7,  -17,  0,  -32,  18,  30,  72,  44,  7,  -75,  66,  10,  32,  29,  18,  0,  62,  6,  34,  -26,  -117,  78,  83,  -1,  51,  -22,  -28,  18,  -55,  -42,  67,  2,  -2,  -30,  59,  -23,  -5,  59,  -122,  18,  -12,  79,  77,  -93,  -46,  -65,  69,  -7,  2,  40,  -79,  -20,  -47,  57,  22,  54,  41,  -44,  -59,  -23,  -8,  64,  61,  3,  -82,  -12,  49,  60,  -3,  -68,  46,  48,  38,  -97,  13,  -17,  52,  -64,  14,  -49,  -62,  50,  -5,  60,  -35,  -32,  -38,  61,  -36,  17,  15,  4,  20,  0,  -58,  -65,  -43,  54,  -17,  86,  -54,  -58,  70,  65,  -26,  43,  -12,  25,  -5,  -27,  51,  38,  -30,  91,  -82,  -65,  19,  -13,  34,  -11,  67,  55,  -22,  57,  -72,  54,  -16,  -1,  76,  0,  -72,  21,  50,  -78,  -62,  -77,  -15,  -34,  -27,  -1,  -64,  -43,  2,  -39,  -4,  -18,  44,  11,  -74,  14,  19,  -1,  -66,  -6,  -60,  22,  -81,  -71,  -28,  -75,  69,  68,  -28,  -63,  -61,  58,  34,  -27,  -8,  -4,  -55,  -16,  39,  50,  -70,  62,  -82,  -7,  -46,  -61,  -21,  -10,  -41,  78,  -17,  26,  -29,  -50,  36,  13,  -8,  9,  55,  64,  11,  -34,  -49,  -1,  22,  36,  -38,  -20,  -39,  27,  -34,  36,  19,  35,  24,  14,  -52,  -75,  -23,  6,  -83,  51,  -64,  -45,  -41,  -18,  -38,  -4,  40,  -23,  -31,  -19,  -48,  72,  -118,  -16,  -60,  41,  -20,  87,  -67,  59,  52,  -15,  6,  -64,  -63,  -2,  28,  66,  59,  -1,  -102,  63,  60,  63,  -68,  -4,  4,  75,  -8,  -84,  -47,  9,  -48,  -9,  82,  -76,  -71,  43,  -52,  72,  -36,  -56,  -27,  -36,  -58,  -51,  -83,  33,  -78,  46,  -49,  -12,  57,  7,  13,  9,  -69,  8,  41,  -54,  45,  -57,  -35,  51,  -15,  23,  11,  61,  50,  -53,  64,  20,  -48,  25,  20,  43,  33,  -39,  19,  7,  -67,  -10,  37,  26,  -3,  -88,  -93,  -4,  -9,  -23,  25,  3,  -66,  -64,  -9,  36,  -49,  -83,  20,  16,  -46,  -51,  58,  -35,  -58,  -49,  -21,  -17,  -46,  -64,  -60,  50,  -29,  -22,  68,  -37,  53,  -54,  -106,  57,  69,  -6,  64,  6,  -47,  -34,  8,  39,  70,  -56,  -64,  -19,  -59,  -70,  18,  24,  37,  53,  31,  21,  -5,  -66,  24,  -52,  17,  -26,  -72,  -17,  61,  24,  -15,  57,  -7,  42,  -36,  -8,  -100,  59,  4,  26,  -15,  -50,  -35,  43,  46,  -12,  11,  -35,  -53,  67,  34,  -30,  44,  7,  -39,  47,  4,  -57,  -62,  -60,  -43,  26,  44,  -60,  24,  -127,  14,  50,  55,  -6,  37,  -13,  -71,  -9,  -51,  21,  52,  -3,  11,  57,  54,  -87,  46,  -44,  20,  41,  43,  -4,  34,  -67,  -10,  -56,  19,  19,  -61,  -17,  -4,  4,  -47,  9,  58,  -73,  -126,  -22,  52,  19,  14,  76,  -10,  -76,  -9,  -37,  -37,  56,  21,  -30,  -70,  -66,  31,  65,  45,  -60,  20,  62,  -87,  -23,  -81,  65,  60,  -78,  -41,  52,  -27,  49,  -30,  12,  -65,  -25,  67,  -1,  -1,  -45,  29,  -12,  -48,  10,  36,  4,  22,  59,  41,  -3,  -67,  9,  60,  -47,  -59,  29,  -56,  -4,  -51,  41,  21,  16,  -29,  -79,  -121,  -25,  -60,  22,  53,  58,  3,  -44,  68,  -76,  -41,  22,  49,  -39,  13,  68,  6,  -82,  -75,  110,  -33,  49,  -13,  -20,  33,  9,  14,  -44,  -71,  -57,  40,  54,  -59,  -65,  -22,  -33,  -69,  20,  -59,  -14,  60,  38,  41,  73,  -69,  -17,  41,  -45,  59,  1,  -72,  68,  62,  49,  -62,  -7,  -6,  -62,  77,  9,  79,  55,  -86,  -95,  -82,  -24,  -17,  84,  -47,  -22,  27,  -49,  -39,  4,  -65,  36,  15,  -20,  67,  -43,  -6,  -50,  3,  -6,  -30,  0,  -21,  -45,  -11,  64,  41,  19,  43,  55,  -57,  -9,  -51,  43,  53,  -58,  9,  39,  -38,  -69,  -20,  69,  26,  49,  -126,  84,  -22,  16,  -46,  43,  70,  -33,  -31,  -44,  70,  -19,  1,  29,  -9,  54,  -19,  -62,  -27,  -3,  2,  -69,  -20,  37,  -31,  -8,  7,  56,  -39,  25,  -82,  62,  -48,  -58,  -23,  37,  45,  -25,  -25,  -44,  25,  -78,  25,  -6,  50,  53,  43,  -97,  -57,  51,  -63,  -15,  6,  -56,  1,  57,  7,  -13,  -68,  30,  55,  -46,  43,  27,  -68,  51,  -70,  55,  -82,  -68,  29,  20,  -59,  34,  23,  49,  };
const float filter_scale_2 = 0.0030228409450501204;
const int8_t filter_zp_2 = 0;
const int arr_bias_2 [ 10 ] = {  -113,  152,  227,  111,  63,  271,  -149,  98,  -413,  -181,  };
const float bias_scale_2 = 0.00010384774213889614;
const int8_t bias_zp_2 = 0;
const int8_t ref_output_2 [ 10 ] = {  -40,  -17,  -11,  0,  -56,  -51,  -104,  99,  -27,  -5,  };
const float out_scale_2 = 0.12180647253990173;
const int8_t out_zp_2 = -13;
