#include "Arduino.h"
#include "MLController.h"
unsigned char MLTensorFlowLite_CONV1[] = {
  0x1c, 0x00, 0x00, 0x00, 0x54, 0x46, 0x4c, 0x33, 0x00, 0x00, 0x12, 0x00,
  0x1c, 0x00, 0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00,
  0x00, 0x00, 0x04, 0x00, 0x12, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
  0x48, 0x00, 0x00, 0x00, 0x78, 0x05, 0x00, 0x00, 0x88, 0x05, 0x00, 0x00,
  0x90, 0x11, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x13, 0x00, 0x00, 0x00, 0x6d, 0x69, 0x6e, 0x5f, 0x72, 0x75, 0x6e, 0x74,
  0x69, 0x6d, 0x65, 0x5f, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x00,
  0x12, 0x00, 0x00, 0x00, 0x2c, 0x05, 0x00, 0x00, 0x24, 0x05, 0x00, 0x00,
  0xf4, 0x04, 0x00, 0x00, 0xe0, 0x04, 0x00, 0x00, 0xc8, 0x04, 0x00, 0x00,
  0xb4, 0x04, 0x00, 0x00, 0x94, 0x04, 0x00, 0x00, 0xc4, 0x03, 0x00, 0x00,
  0xb4, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00,
  0x4c, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,
  0x34, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x8e, 0xfa, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x31, 0x2e, 0x31, 0x34, 0x2e, 0x30, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe8, 0xf0, 0xff, 0xff,
  0xec, 0xf0, 0xff, 0xff, 0xf0, 0xf0, 0xff, 0xff, 0xf4, 0xf0, 0xff, 0xff,
  0xf8, 0xf0, 0xff, 0xff, 0xfc, 0xf0, 0xff, 0xff, 0x00, 0xf1, 0xff, 0xff,
  0xc6, 0xfa, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00,
  0x79, 0x07, 0x81, 0x5e, 0x09, 0x8c, 0xaf, 0x19, 0xd9, 0x89, 0x2e, 0xa3,
  0xb9, 0xaf, 0x81, 0x54, 0x8c, 0x33, 0xc8, 0xf6, 0x98, 0x92, 0xa3, 0x81,
  0xbc, 0x01, 0x46, 0x7f, 0xc4, 0x84, 0x88, 0x2e, 0x2f, 0x06, 0x7b, 0x63,
  0xe1, 0x45, 0xec, 0x81, 0xb8, 0xd7, 0xb9, 0xdd, 0x92, 0xc8, 0x84, 0x7d,
  0x7f, 0xf2, 0x27, 0x4e, 0x03, 0xa3, 0x05, 0x04, 0x2b, 0x0f, 0x65, 0x0f,
  0xe0, 0x53, 0x81, 0x88, 0xc5, 0x22, 0xa5, 0x8d, 0x7f, 0x3d, 0xbf, 0x5d,
  0x1a, 0xfb, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00,
  0xfe, 0xdc, 0xe3, 0xf6, 0x19, 0x4e, 0xc0, 0xfd, 0x00, 0xe2, 0x08, 0x07,
  0x02, 0x26, 0xe8, 0xe8, 0x09, 0xfd, 0xf9, 0xf0, 0xe6, 0x48, 0xcf, 0x18,
  0xf2, 0x12, 0xf8, 0x09, 0xf7, 0x46, 0xd3, 0xe7, 0x03, 0x19, 0x19, 0xf6,
  0x19, 0x27, 0xda, 0xec, 0x04, 0xdd, 0xf7, 0xeb, 0x21, 0x2b, 0xd8, 0xff,
  0x0a, 0xea, 0xe4, 0xf9, 0x0c, 0x57, 0xdd, 0x1a, 0xfc, 0xff, 0x0c, 0xe8,
  0xf8, 0x38, 0xf9, 0x30, 0xeb, 0xf3, 0xff, 0xe6, 0x1e, 0x5a, 0xe1, 0x09,
  0x01, 0x08, 0xdb, 0xe9, 0xdc, 0x2f, 0xf5, 0xf7, 0x0c, 0x18, 0x0d, 0x12,
  0x04, 0x6a, 0xe6, 0xfd, 0x16, 0x18, 0xf7, 0xf1, 0xe8, 0x42, 0xdf, 0xfc,
  0x18, 0x05, 0xe5, 0xf0, 0x10, 0x61, 0xee, 0x2d, 0xf9, 0xe5, 0x0b, 0x10,
  0xec, 0x3c, 0xfa, 0x28, 0x13, 0xf8, 0x09, 0xda, 0x26, 0x49, 0xcc, 0x09,
  0x19, 0x26, 0xea, 0xfb, 0xf4, 0x28, 0xd1, 0xef, 0x22, 0xe8, 0x22, 0x08,
  0x15, 0x42, 0x0d, 0x04, 0xfb, 0xf7, 0x14, 0x0a, 0xfe, 0x6c, 0xf7, 0x10,
  0xeb, 0x1a, 0x13, 0xed, 0x17, 0x59, 0xc3, 0x18, 0x22, 0x0f, 0x1f, 0x02,
  0xef, 0x63, 0xff, 0xfa, 0xe3, 0xf7, 0xe1, 0xfa, 0x05, 0x49, 0xeb, 0x25,
  0xf3, 0xdc, 0xf7, 0xcf, 0xfd, 0x4a, 0xe4, 0x2a, 0x0f, 0xf8, 0x1f, 0xe6,
  0xed, 0x5f, 0xfe, 0xfc, 0xe1, 0xe9, 0xf1, 0x0e, 0x1e, 0x01, 0x05, 0x97,
  0xfe, 0xfc, 0x0a, 0x0a, 0xee, 0xf3, 0x0a, 0xf9, 0x24, 0x01, 0xfe, 0x01,
  0xda, 0x02, 0x06, 0xf7, 0xe8, 0x12, 0xfd, 0x15, 0xe5, 0x0e, 0xfa, 0x0d,
  0x10, 0xfc, 0x0b, 0x06, 0x11, 0xc5, 0x33, 0xf0, 0x1b, 0xec, 0x05, 0x20,
  0x13, 0xc7, 0x06, 0xbf, 0x15, 0x04, 0x19, 0x14, 0x06, 0xd2, 0x0f, 0xea,
  0xe6, 0x15, 0xf4, 0x31, 0xec, 0xb6, 0x0c, 0xeb, 0x0c, 0xe4, 0x1f, 0x10,
  0x0d, 0xcf, 0x06, 0xac, 0x1d, 0x16, 0xe7, 0x13, 0x16, 0xa9, 0x17, 0xb0,
  0x14, 0xfd, 0x23, 0x0b, 0x16, 0xcd, 0x02, 0xc8, 0x09, 0x07, 0x1b, 0x0e,
  0x12, 0xab, 0x07, 0xe6, 0xe1, 0x05, 0x12, 0x21, 0x00, 0xbd, 0x16, 0xbd,
  0xe4, 0x0d, 0x18, 0x24, 0x16, 0xae, 0x01, 0xe1, 0xed, 0x02, 0xfe, 0x28,
  0x18, 0xad, 0x0d, 0xde, 0x20, 0x06, 0x01, 0x18, 0x0f, 0xb4, 0x30, 0xf8,
  0x0a, 0xeb, 0xfd, 0xf5, 0x27, 0xd1, 0xf4, 0xbc, 0x10, 0x22, 0x1d, 0x23,
  0xe7, 0xb6, 0x1a, 0xcd, 0x12, 0xf7, 0x07, 0x13, 0xff, 0xf1, 0x18, 0xf2,
  0x20, 0xe7, 0x21, 0x0b, 0x06, 0xdd, 0x1d, 0xd6, 0xf1, 0x0a, 0x15, 0x18,
  0x0a, 0xe9, 0x2f, 0xec, 0x0e, 0xe8, 0xe6, 0xfe, 0x21, 0xbb, 0x1c, 0xd2,
  0xed, 0xee, 0x03, 0xf7, 0x1a, 0xb8, 0x28, 0xe7, 0x26, 0x14, 0xe2, 0x15,
  0xeb, 0xa5, 0x17, 0xdf, 0x15, 0xdc, 0x05, 0xe7, 0xdf, 0xdd, 0xf9, 0x7f,
  0xfa, 0xdd, 0xfe, 0xf6, 0x08, 0x1b, 0x15, 0xf2, 0xf6, 0xf2, 0xef, 0x18,
  0x16, 0xbc, 0x3a, 0xd5, 0x06, 0x0d, 0x02, 0x1e, 0xe7, 0xd2, 0x0b, 0xdc,
  0xf4, 0xe2, 0x20, 0x1a, 0xe2, 0xce, 0x25, 0xb6, 0x02, 0xfb, 0xdd, 0x14,
  0x01, 0xe5, 0x27, 0xa5, 0x1c, 0x03, 0xed, 0xf5, 0x24, 0x1c, 0x1e, 0xc0,
  0xfc, 0x09, 0xdd, 0x21, 0xeb, 0x09, 0x27, 0xb8, 0x1b, 0x12, 0x26, 0x06,
  0x11, 0xe7, 0xeb, 0xcc, 0xed, 0xf0, 0x0e, 0x1f, 0x24, 0xe9, 0x26, 0xed,
  0x03, 0x21, 0xf3, 0xf7, 0xef, 0x15, 0x16, 0xdd, 0x0c, 0xf2, 0x23, 0xfc,
  0xe9, 0xf7, 0x2a, 0xc9, 0xed, 0x0a, 0x08, 0x0d, 0x0e, 0xf6, 0x21, 0xf2,
  0xe5, 0xf4, 0x0d, 0x2b, 0x13, 0x12, 0x27, 0xb4, 0xee, 0x09, 0x02, 0x18,
  0x11, 0x07, 0x2d, 0xb5, 0xea, 0x18, 0x10, 0x33, 0xf3, 0x08, 0xf5, 0xe5,
  0xf6, 0x03, 0xff, 0xf8, 0xf0, 0xf1, 0xf8, 0xd3, 0xe9, 0xe5, 0x1a, 0xf5,
  0x24, 0xfe, 0x27, 0xc6, 0x0e, 0x06, 0xdf, 0x2e, 0xf3, 0x06, 0x00, 0xac,
  0x20, 0x0b, 0x19, 0xfa, 0xfc, 0xe2, 0xfe, 0xb7, 0xf6, 0xe5, 0xdb, 0x02,
  0x22, 0xc3, 0x0e, 0xa7, 0x18, 0xf5, 0xe6, 0xff, 0xda, 0xe3, 0x30, 0xbc,
  0xdf, 0xf5, 0xf3, 0x1d, 0xf3, 0xe7, 0x39, 0x98, 0x11, 0xf7, 0x20, 0x03,
  0x14, 0xb0, 0x10, 0xc5, 0xf1, 0xf5, 0x1f, 0x03, 0x26, 0xd7, 0xfd, 0xc6,
  0x0e, 0x21, 0x11, 0x09, 0xfa, 0xc1, 0xe1, 0xf1, 0x0c, 0x12, 0xe5, 0x0b,
  0xf4, 0xd5, 0x0c, 0x2e, 0x0f, 0x0d, 0x0a, 0xf7, 0x10, 0xeb, 0xd9, 0x4e,
  0xde, 0x18, 0xf4, 0xfb, 0x23, 0xf6, 0x02, 0x2b, 0x1d, 0x24, 0x0f, 0x07,
  0xf4, 0x0c, 0x04, 0x25, 0xf9, 0xe1, 0xef, 0xdc, 0x25, 0xf6, 0x06, 0x5e,
  0xec, 0xea, 0x05, 0xfd, 0xeb, 0x04, 0x08, 0x2b, 0xf4, 0x13, 0x15, 0xfc,
  0x1e, 0x22, 0x09, 0x63, 0xf1, 0xed, 0xf1, 0xfa, 0x05, 0xea, 0xe9, 0x54,
  0xe3, 0xef, 0x1b, 0xef, 0x14, 0xdd, 0xfc, 0x31, 0xdc, 0x06, 0x25, 0x17,
  0xdb, 0xf1, 0x04, 0x3e, 0x12, 0xde, 0x12, 0xf1, 0xf1, 0x08, 0xfe, 0x23,
  0xf1, 0xf6, 0x17, 0x09, 0x1f, 0x00, 0xdb, 0x1c, 0xe2, 0x04, 0x08, 0xed,
  0x09, 0xdb, 0xdb, 0x3a, 0xec, 0x0c, 0x1f, 0xf2, 0xe2, 0xbe, 0xd7, 0x58,
  0xe1, 0xf8, 0x19, 0xfb, 0x05, 0xba, 0xdb, 0x3e, 0xf4, 0x02, 0xe3, 0xe4,
  0x18, 0xc9, 0x0f, 0x44, 0xfd, 0xe8, 0x11, 0xea, 0xec, 0xc9, 0x0c, 0x4b,
  0xf0, 0xec, 0xf5, 0xd3, 0xfa, 0xfa, 0xd7, 0x50, 0xdf, 0xe6, 0xea, 0xe5,
  0x0b, 0x09, 0xf3, 0x43, 0x11, 0xe1, 0x23, 0xf6, 0x0c, 0x12, 0xec, 0x43,
  0x17, 0x14, 0xeb, 0x02, 0x16, 0xe8, 0x06, 0x4d, 0x1e, 0xf0, 0x18, 0x08,
  0x1d, 0xfd, 0xfc, 0x58, 0x24, 0x03, 0x23, 0x13, 0xfd, 0x1e, 0xf9, 0xe6,
  0x26, 0xfe, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00,
  0xe7, 0x0e, 0xec, 0xee, 0xdd, 0x0f, 0x23, 0xc4, 0xf0, 0x00, 0xf4, 0xed,
  0x04, 0xfc, 0xf2, 0x91, 0x11, 0x0c, 0xd8, 0xe9, 0x24, 0xce, 0x23, 0x85,
  0x0e, 0xfa, 0x06, 0x0c, 0xf1, 0xbd, 0xf4, 0xcf, 0xf0, 0xfa, 0x08, 0xf0,
  0xf5, 0xec, 0x02, 0xb4, 0xe3, 0x03, 0x00, 0x13, 0xea, 0xf7, 0x26, 0x9a,
  0x1b, 0xe6, 0x14, 0xf7, 0x29, 0xdc, 0x04, 0x8e, 0xea, 0xeb, 0xe8, 0x13,
  0x24, 0xf6, 0x0f, 0xbb, 0x04, 0x28, 0x2a, 0xe7, 0x2b, 0xed, 0x25, 0xcd,
  0x0c, 0xeb, 0xe9, 0xf2, 0xec, 0xc0, 0x25, 0xbe, 0x2a, 0xe4, 0xda, 0x05,
  0xe6, 0xf6, 0x1b, 0xd1, 0xf5, 0x07, 0x0d, 0x25, 0xd9, 0xbf, 0x1e, 0xca,
  0x26, 0xfb, 0x11, 0xec, 0xe7, 0xf0, 0xea, 0xa5, 0x1e, 0x10, 0x03, 0xfa,
  0x09, 0xd2, 0x06, 0xdd, 0x2b, 0x2a, 0xd6, 0xee, 0xf0, 0xd1, 0x2f, 0xaa,
  0xe9, 0xe1, 0xee, 0xf1, 0xdf, 0xe9, 0x06, 0xb6, 0x18, 0x18, 0xec, 0xf6,
  0xd7, 0x05, 0xfe, 0xb8, 0xdc, 0xf5, 0x06, 0xfc, 0xf3, 0xc1, 0x21, 0xd2,
  0x00, 0xf4, 0x1c, 0x11, 0xef, 0xbf, 0x33, 0x89, 0xe2, 0x1a, 0x15, 0x09,
  0xec, 0xf5, 0x02, 0xc2, 0xfa, 0x1b, 0xfb, 0x03, 0xe3, 0xc7, 0x24, 0xaf,
  0xee, 0x24, 0xe6, 0x0d, 0xe2, 0xda, 0x28, 0xbc, 0xd9, 0xda, 0xea, 0x0b,
  0x18, 0xcb, 0x1e, 0x81, 0xd5, 0xe3, 0xf3, 0x10, 0xd8, 0xde, 0x20, 0xb2,
  0xf2, 0xfe, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x4c, 0xfc, 0xff, 0xff, 0xdf, 0x0d, 0x00, 0x00, 0x55, 0x05, 0x00, 0x00,
  0x63, 0xf4, 0xff, 0xff, 0x0e, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0xcf, 0xfd, 0xff, 0xff, 0x1e, 0xff, 0xff, 0xff,
  0x04, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
  0xc0, 0x00, 0x00, 0x00, 0x32, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0xfd, 0xff, 0xff, 0xff, 0x42, 0xff, 0xff, 0xff,
  0x04, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb9, 0xfe, 0xff, 0xff,
  0x00, 0x00, 0x00, 0x00, 0x60, 0x07, 0x00, 0x00, 0xd3, 0xe9, 0xff, 0xff,
  0xcb, 0x1b, 0x00, 0x00, 0xac, 0xf5, 0xff, 0xff, 0xb0, 0xf5, 0xff, 0xff,
  0x0f, 0x00, 0x00, 0x00, 0x4d, 0x4c, 0x49, 0x52, 0x20, 0x43, 0x6f, 0x6e,
  0x76, 0x65, 0x72, 0x74, 0x65, 0x64, 0x2e, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x18, 0x00, 0x14, 0x00,
  0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0xc0, 0x01, 0x00, 0x00,
  0xc8, 0x01, 0x00, 0x00, 0xcc, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x78, 0x01, 0x00, 0x00, 0x18, 0x01, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00,
  0x9c, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x0e, 0xff, 0xff, 0xff, 0x1c, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x09, 0x1c, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x01, 0x00, 0x00, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00,
  0x46, 0xff, 0xff, 0xff, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08,
  0x10, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x74, 0xf6, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0xaa, 0xff, 0xff, 0xff, 0x0c, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x0d, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x9a, 0xff, 0xff, 0xff, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08,
  0x10, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0xc8, 0xf6, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x0c, 0x00,
  0x08, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x0b, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x18, 0x00, 0x14, 0x00,
  0x10, 0x00, 0x0c, 0x00, 0x0b, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00,
  0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x28, 0x00, 0x00, 0x00,
  0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x10, 0x00,
  0x00, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x07, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x0e, 0x00, 0x14, 0x00, 0x00, 0x00, 0x10, 0x00, 0x0c, 0x00,
  0x0b, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x34, 0x0c, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x94, 0xf7, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x78, 0x09, 0x00, 0x00, 0x80, 0x08, 0x00, 0x00, 0x20, 0x08, 0x00, 0x00,
  0xc8, 0x07, 0x00, 0x00, 0x48, 0x07, 0x00, 0x00, 0xcc, 0x06, 0x00, 0x00,
  0x48, 0x06, 0x00, 0x00, 0xc4, 0x05, 0x00, 0x00, 0xb0, 0x04, 0x00, 0x00,
  0x04, 0x04, 0x00, 0x00, 0xd0, 0x02, 0x00, 0x00, 0x3c, 0x02, 0x00, 0x00,
  0x88, 0x01, 0x00, 0x00, 0x1c, 0x01, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0xdc, 0xf6, 0xff, 0xff, 0x18, 0x00, 0x00, 0x00,
  0x20, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x09, 0x44, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0xff, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0xcc, 0xf7, 0xff, 0xff,
  0x08, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x80, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x80, 0x3b, 0x0f, 0x00, 0x00, 0x00, 0x49, 0x64, 0x65, 0x6e,
  0x74, 0x69, 0x74, 0x79, 0x5f, 0x31, 0x5f, 0x69, 0x6e, 0x74, 0x38, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x44, 0xf7, 0xff, 0xff, 0x18, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x54, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09,
  0x84, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
  0x04, 0x00, 0x00, 0x00, 0x2c, 0xf7, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x3b, 0x17, 0xac, 0x3c, 0x01, 0x00, 0x00, 0x00,
  0x1e, 0xd3, 0x18, 0x40, 0x01, 0x00, 0x00, 0x00, 0x29, 0x03, 0x3e, 0xc0,
  0x34, 0x00, 0x00, 0x00, 0x77, 0x65, 0x61, 0x74, 0x68, 0x65, 0x72, 0x5f,
  0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x2f, 0x74, 0x79, 0x70, 0x65, 0x2f, 0x4d,
  0x61, 0x74, 0x4d, 0x75, 0x6c, 0x3b, 0x77, 0x65, 0x61, 0x74, 0x68, 0x65,
  0x72, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x2f, 0x74, 0x79, 0x70, 0x65,
  0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0xec, 0xf7, 0xff, 0xff, 0x18, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x3c, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09,
  0x44, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
  0x01, 0x00, 0x00, 0x00, 0xdc, 0xf8, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3b,
  0x0d, 0x00, 0x00, 0x00, 0x49, 0x64, 0x65, 0x6e, 0x74, 0x69, 0x74, 0x79,
  0x5f, 0x69, 0x6e, 0x74, 0x38, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x54, 0xf8, 0xff, 0xff,
  0x18, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00,
  0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x8c, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
  0x3c, 0xf8, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x20, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x6d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x3f, 0x63, 0x92, 0x3c, 0x01, 0x00, 0x00, 0x00,
  0xb5, 0x1a, 0xa3, 0x3e, 0x01, 0x00, 0x00, 0x00, 0x31, 0x9f, 0x87, 0xc0,
  0x38, 0x00, 0x00, 0x00, 0x77, 0x65, 0x61, 0x74, 0x68, 0x65, 0x72, 0x5f,
  0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x2f, 0x70, 0x72, 0x65, 0x63, 0x69, 0x70,
  0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x3b, 0x77, 0x65, 0x61, 0x74,
  0x68, 0x65, 0x72, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x2f, 0x70, 0x72,
  0x65, 0x63, 0x69, 0x70, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x04, 0xf9, 0xff, 0xff, 0x18, 0x00, 0x00, 0x00,
  0x20, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x09, 0x6c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0xec, 0xf8, 0xff, 0xff,
  0x10, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x3c, 0xba, 0x85, 0x3b,
  0x01, 0x00, 0x00, 0x00, 0x82, 0x34, 0x85, 0x3f, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x77, 0x65, 0x61, 0x74,
  0x68, 0x65, 0x72, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x2f, 0x66, 0x6c,
  0x61, 0x74, 0x74, 0x65, 0x6e, 0x2f, 0x52, 0x65, 0x73, 0x68, 0x61, 0x70,
  0x65, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0xc0, 0x00, 0x00, 0x00, 0x94, 0xf9, 0xff, 0xff, 0x18, 0x00, 0x00, 0x00,
  0x28, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x09, 0x04, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x84, 0xf9, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3c, 0xba, 0x85, 0x3b,
  0x01, 0x00, 0x00, 0x00, 0x82, 0x34, 0x85, 0x3f, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xab, 0x00, 0x00, 0x00, 0x77, 0x65, 0x61, 0x74,
  0x68, 0x65, 0x72, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x2f, 0x63, 0x6f,
  0x6e, 0x76, 0x31, 0x64, 0x2f, 0x52, 0x65, 0x6c, 0x75, 0x3b, 0x77, 0x65,
  0x61, 0x74, 0x68, 0x65, 0x72, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x2f,
  0x63, 0x6f, 0x6e, 0x76, 0x31, 0x64, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41,
  0x64, 0x64, 0x3b, 0x77, 0x65, 0x61, 0x74, 0x68, 0x65, 0x72, 0x5f, 0x6d,
  0x6f, 0x64, 0x65, 0x6c, 0x2f, 0x63, 0x6f, 0x6e, 0x76, 0x31, 0x64, 0x2f,
  0x63, 0x6f, 0x6e, 0x76, 0x31, 0x64, 0x2f, 0x53, 0x71, 0x75, 0x65, 0x65,
  0x7a, 0x65, 0x3b, 0x77, 0x65, 0x61, 0x74, 0x68, 0x65, 0x72, 0x5f, 0x6d,
  0x6f, 0x64, 0x65, 0x6c, 0x2f, 0x63, 0x6f, 0x6e, 0x76, 0x31, 0x64, 0x2f,
  0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64,
  0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x2f, 0x72,
  0x65, 0x73, 0x6f, 0x75, 0x72, 0x63, 0x65, 0x3b, 0x77, 0x65, 0x61, 0x74,
  0x68, 0x65, 0x72, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x2f, 0x63, 0x6f,
  0x6e, 0x76, 0x31, 0x64, 0x2f, 0x63, 0x6f, 0x6e, 0x76, 0x31, 0x64, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xc4, 0xfa, 0xff, 0xff,
  0x18, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00,
  0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x7c, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xb4, 0xfa, 0xff, 0xff,
  0x10, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xac, 0x41, 0x85, 0x3b,
  0x01, 0x00, 0x00, 0x00, 0x6a, 0xbc, 0x84, 0x3f, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x77, 0x65, 0x61, 0x74,
  0x68, 0x65, 0x72, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x2f, 0x63, 0x6f,
  0x6e, 0x76, 0x31, 0x64, 0x2f, 0x63, 0x6f, 0x6e, 0x76, 0x31, 0x64, 0x2f,
  0x45, 0x78, 0x70, 0x61, 0x6e, 0x64, 0x44, 0x69, 0x6d, 0x73, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x5a, 0xfc, 0xff, 0xff,
  0x14, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x09, 0xe8, 0x00, 0x00, 0x00, 0x44, 0xfb, 0xff, 0xff,
  0x10, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00,
  0x90, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0xfb, 0x71, 0x54, 0x3b, 0x20, 0x10, 0x3f, 0x3b,
  0x7a, 0xca, 0x51, 0x3b, 0x69, 0x97, 0x61, 0x3b, 0x44, 0xef, 0x52, 0x3b,
  0x78, 0x49, 0x6a, 0x3b, 0xfc, 0x2a, 0x79, 0x3b, 0x3f, 0x30, 0x55, 0x3b,
  0x08, 0x00, 0x00, 0x00, 0xcc, 0x7f, 0xc9, 0x3e, 0x60, 0xb8, 0x79, 0x3e,
  0xe8, 0xe1, 0x64, 0x3e, 0x3a, 0xd4, 0xdf, 0x3e, 0x98, 0x99, 0x62, 0x3e,
  0xe5, 0x74, 0xe8, 0x3e, 0x43, 0xfc, 0xc4, 0x3e, 0xdf, 0x85, 0xd3, 0x3e,
  0x08, 0x00, 0x00, 0x00, 0x17, 0xc9, 0xd2, 0xbe, 0x00, 0x92, 0xbd, 0xbe,
  0xe5, 0x26, 0xd0, 0xbe, 0xcc, 0x5c, 0xda, 0xbe, 0x65, 0x49, 0xd1, 0xbe,
  0x64, 0x5b, 0xe3, 0xbe, 0xa6, 0x38, 0xf7, 0xbe, 0x0c, 0x7c, 0xc8, 0xbe,
  0x1b, 0x00, 0x00, 0x00, 0x77, 0x65, 0x61, 0x74, 0x68, 0x65, 0x72, 0x5f,
  0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x2f, 0x63, 0x6f, 0x6e, 0x76, 0x31, 0x64,
  0x2f, 0x63, 0x6f, 0x6e, 0x76, 0x31, 0x64, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x6a, 0xfd, 0xff, 0xff, 0x14, 0x00, 0x00, 0x00,
  0x4c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09,
  0x60, 0x00, 0x00, 0x00, 0x54, 0xfc, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1a, 0xc5, 0x94, 0x3b,
  0x01, 0x00, 0x00, 0x00, 0x90, 0x9b, 0x13, 0x3f, 0x01, 0x00, 0x00, 0x00,
  0x69, 0x7c, 0xf3, 0xbe, 0x19, 0x00, 0x00, 0x00, 0x77, 0x65, 0x61, 0x74,
  0x68, 0x65, 0x72, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x2f, 0x74, 0x79,
  0x70, 0x65, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00,
  0xea, 0xfd, 0xff, 0xff, 0x14, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x60, 0x00, 0x00, 0x00,
  0xd4, 0xfc, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x20, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0xd4, 0xaa, 0x83, 0x3b, 0x01, 0x00, 0x00, 0x00,
  0x39, 0x79, 0x53, 0x3e, 0x01, 0x00, 0x00, 0x00, 0x7e, 0xa3, 0x02, 0xbf,
  0x1b, 0x00, 0x00, 0x00, 0x77, 0x65, 0x61, 0x74, 0x68, 0x65, 0x72, 0x5f,
  0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x2f, 0x70, 0x72, 0x65, 0x63, 0x69, 0x70,
  0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x6a, 0xfe, 0xff, 0xff,
  0x14, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x02, 0x5c, 0x00, 0x00, 0x00, 0x5c, 0xfe, 0xff, 0xff,
  0x08, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x41, 0x6d, 0x9b, 0x37, 0x32, 0x00, 0x00, 0x00, 0x77, 0x65, 0x61, 0x74,
  0x68, 0x65, 0x72, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x2f, 0x74, 0x79,
  0x70, 0x65, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52,
  0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f,
  0x70, 0x2f, 0x72, 0x65, 0x73, 0x6f, 0x75, 0x72, 0x63, 0x65, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xe2, 0xfe, 0xff, 0xff,
  0x14, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x02, 0x60, 0x00, 0x00, 0x00, 0xd4, 0xfe, 0xff, 0xff,
  0x08, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x12, 0x8f, 0x89, 0x37, 0x34, 0x00, 0x00, 0x00, 0x77, 0x65, 0x61, 0x74,
  0x68, 0x65, 0x72, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x2f, 0x70, 0x72,
  0x65, 0x63, 0x69, 0x70, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64,
  0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c,
  0x65, 0x4f, 0x70, 0x2f, 0x72, 0x65, 0x73, 0x6f, 0x75, 0x72, 0x63, 0x65,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x5e, 0xff, 0xff, 0xff, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x28, 0x00, 0x00, 0x00,
  0xb0, 0xff, 0xff, 0xff, 0x1b, 0x00, 0x00, 0x00, 0x77, 0x65, 0x61, 0x74,
  0x68, 0x65, 0x72, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x2f, 0x66, 0x6c,
  0x61, 0x74, 0x74, 0x65, 0x6e, 0x2f, 0x43, 0x6f, 0x6e, 0x73, 0x74, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x13, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00,
  0x0e, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x04, 0x00, 0x04, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x77, 0x65, 0x61, 0x74,
  0x68, 0x65, 0x72, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x2f, 0x63, 0x6f,
  0x6e, 0x76, 0x31, 0x64, 0x2f, 0x63, 0x6f, 0x6e, 0x76, 0x31, 0x64, 0x2f,
  0x45, 0x78, 0x70, 0x61, 0x6e, 0x64, 0x44, 0x69, 0x6d, 0x73, 0x2f, 0x64,
  0x69, 0x6d, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x18, 0x00, 0x14, 0x00,
  0x13, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00,
  0x20, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x02, 0xc4, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x0c, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x6e, 0x2b, 0x5d, 0x37, 0xc8, 0xe8, 0x46, 0x37, 0x05, 0x68, 0x5a, 0x37,
  0x11, 0xdb, 0x6a, 0x37, 0xd6, 0x98, 0x5b, 0x37, 0x8b, 0xe8, 0x73, 0x37,
  0x40, 0xb3, 0x81, 0x37, 0x82, 0xf1, 0x5d, 0x37, 0x34, 0x00, 0x00, 0x00,
  0x77, 0x65, 0x61, 0x74, 0x68, 0x65, 0x72, 0x5f, 0x6d, 0x6f, 0x64, 0x65,
  0x6c, 0x2f, 0x63, 0x6f, 0x6e, 0x76, 0x31, 0x64, 0x2f, 0x42, 0x69, 0x61,
  0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72,
  0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x2f, 0x72, 0x65, 0x73, 0x6f,
  0x75, 0x72, 0x63, 0x65, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x14, 0x00, 0x1c, 0x00, 0x18, 0x00, 0x17, 0x00,
  0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
  0x68, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09,
  0x70, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
  0x18, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x14, 0x00,
  0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x24, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0xac, 0x41, 0x85, 0x3b, 0x01, 0x00, 0x00, 0x00, 0x6a, 0xbc, 0x84, 0x3f,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x69, 0x6e, 0x70, 0x75, 0x74, 0x5f, 0x31, 0x5f, 0x69, 0x6e, 0x74, 0x38,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0xa0, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00,
  0x50, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xa8, 0xff, 0xff, 0xff,
  0x06, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06,
  0x9c, 0xff, 0xff, 0xff, 0x72, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x72,
  0xc4, 0xff, 0xff, 0xff, 0x19, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x19, 0xd4, 0xff, 0xff, 0xff, 0x0e, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0xe4, 0xff, 0xff, 0xff,
  0x09, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09,
  0xd8, 0xff, 0xff, 0xff, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16,
  0x0c, 0x00, 0x10, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x08, 0x00, 0x04, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x03, 0x0c, 0x00, 0x0c, 0x00, 0x0b, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x46, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x46
};
//unsigned int Conv1D_tflite_len_1 = 4720;

MLController::MLController() {

  static tflite::MicroErrorReporter micro_error_reporter;
  error_reporter = &micro_error_reporter;
  // Map the model into a usable data structure. This doesn't involve any
  // copying or parsing, it's a very lightweight operation.
  model = tflite::GetModel(MLTensorFlowLite_CONV1);
  if (model->version() != TFLITE_SCHEMA_VERSION) {
    Serial.println("Model provided is schema version:");
    Serial.println(model->version());
    Serial.println("not equal to supported version:");
    Serial.println( TFLITE_SCHEMA_VERSION);
    while (1) {}
  }
  static tflite::ops::micro::AllOpsResolver resolver;
  //  static tflite::MicroMutableOpResolver resolver;
  ////  resolver.AddConv2D();
  //Serial.println("Adding Conv2D");
  //  resolver.AddBuiltin(
  //    tflite::BuiltinOperator_CONV_2D,
  //    tflite::ops::micro::Register_CONV_2D()
  //    );
  ////    resolver.AddFullyConnected();
  //    resolver.AddBuiltin(
  //    tflite::BuiltinOperator_FULLY_CONNECTED,
  //    tflite::ops::micro::Register_FULLY_CONNECTED()
  //    );
  //    //resolver.AddAveragePool2D();
  //    resolver.AddBuiltin(
  //    tflite::BuiltinOperator_AVERAGE_POOL_2D,
  //    tflite::ops::micro::Register_AVERAGE_POOL_2D()
  //    );
  ////    resolver.AddSoftmax();
  //    resolver.AddBuiltin(
  //    tflite::BuiltinOperator_SOFTMAX,
  //    tflite::ops::micro::Register_SOFTMAX()
  //    );
  ////    resolver.AddRelu();
  //    resolver.AddBuiltin(
  //    tflite::BuiltinOperator_RELU,
  //    tflite::ops::micro::Register_RELU()
  //    );
  //    //resolver.AddExpandDims();
  ////    resolver.AddBuiltin(
  ////    tflite::BuiltinOperator_EXPAND_DIMS,
  ////    tflite::ops::micro::Register_QUANTIZE()
  ////    );
  //    //resolver.AddReshape();
  //    resolver.AddBuiltin(
  //    tflite::BuiltinOperator_RESHAPE,
  //    tflite::ops::micro::Register_RESHAPE()
  //    );
  //    //resolver.AddLogistic();
  //    resolver.AddBuiltin(
  //    tflite::BuiltinOperator_LOGISTIC,
  //    tflite::ops::micro::Register_LOGISTIC()
  //    );
  // Build an interpreter to run the model with.
  static tflite::MicroInterpreter static_interpreter(model, resolver, tensor_arena, kTensorArenaSize, error_reporter);
  interpreter = &static_interpreter;

  // Allocate memory from the tensor_arena for the model's tensors.
  TfLiteStatus allocate_status = interpreter->AllocateTensors();
  if (allocate_status != kTfLiteOk) {
    error_reporter->Report("AllocateTensors() failed");
    return;
  }
  // Obtain pointers to the model's input and output tensors.
  input = interpreter->input(0);
  output_type = interpreter->output(1);
  output_precip = interpreter->output(0);


  // Check if tensors allocation are correct - Commented to don't fill up serial buffer
  //  Serial.println(input->dims->size);
  //  Serial.println(input->dims->data[1]);
  //  Serial.println(input->dims->data[2]);
  //  Serial.println(input->type);
  //
  //  Serial.println(output_type->dims->size);
  //  Serial.println(output_type->dims->data[1]);
  //  Serial.println(output_type->type);
  //
  //  Serial.println(output_precip->dims->size);
  //  Serial.println(output_precip->dims->data[1]);
  //  Serial.println(output_precip->type);

}
float MLController::invoke() {

  for (byte i = 0; i < 72; i = i + 1) {
    input->data.int8[i] = stack[i] / input->params.scale + input->params.zero_point;
  }

  // Run inference, and report any error
  TfLiteStatus invoke_status = interpreter->Invoke();

  if (invoke_status != kTfLiteOk) {
    error_reporter->Report("Invoke failed");
    return -1;
  }

  // Obtain the quantized output from model's output tensor
  float y_type[4];

  // Dequantize the output from integer to floating-point
  int8_t y_precip_q = output_precip->data.int8[0];
//  Serial.println(y_precip_q);
  float y_precip = (y_precip_q - output_precip->params.zero_point) * output_precip->params.scale;
  return y_precip;
  //  for (byte i = 0; i < 4; i = i + 1) {
  //    y_type[i] = (output_type->data.int8[i] - output_type->params.zero_point) * output_type->params.scale;
  //    Serial.print(y_type[i]);
  //    Serial.print(" ");
  //  }
  //  Serial.print("\n");


}

bool MLController::fillBuffer(float *newData) {
  if (!stack.isFull()) {
    //Initializing stack buffer for neural network input
    stack.push(newData[0] / 60.0);
    stack.push(newData[1] / 100.0);
    stack.push(newData[2] / 1000.0);
    return false;
  }
  else {
    //Just Acquiring new data for measure
    stack.unshift(newData[0] / 60.0);
    stack.unshift(newData[1] / 100.0);
    stack.unshift(newData[2] / 1000.0);
    return true;

  }
}
