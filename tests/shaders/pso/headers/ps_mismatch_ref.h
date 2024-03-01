static const DWORD ps_mismatch_ref_code_dxbc[] =
{
    0x43425844, 0xb5644ae8, 0xcdb330f9, 0xa5d0d04d, 0xa52c35aa, 0x00000001, 0x000001c0, 0x00000003,
    0x0000002c, 0x000000ac, 0x00000110, 0x4e475349, 0x00000078, 0x00000004, 0x00000008, 0x00000068,
    0x00000000, 0x00000001, 0x00000003, 0x00000000, 0x0000000f, 0x00000074, 0x00000000, 0x00000000,
    0x00000003, 0x00000001, 0x00000707, 0x00000074, 0x00000001, 0x00000000, 0x00000003, 0x00000002,
    0x00000303, 0x00000074, 0x00000002, 0x00000000, 0x00000001, 0x00000003, 0x00000f0f, 0x505f5653,
    0x5449534f, 0x004e4f49, 0x00475241, 0x4e47534f, 0x0000005c, 0x00000003, 0x00000008, 0x00000050,
    0x00000000, 0x00000000, 0x00000003, 0x00000000, 0x0000000f, 0x00000050, 0x00000001, 0x00000000,
    0x00000003, 0x00000001, 0x00000c03, 0x00000050, 0x00000002, 0x00000000, 0x00000001, 0x00000002,
    0x0000000f, 0x545f5653, 0x45475241, 0xabab0054, 0x58454853, 0x000000a8, 0x00000050, 0x0000002a,
    0x0100086a, 0x03001062, 0x00101072, 0x00000001, 0x03001062, 0x00101032, 0x00000002, 0x03000862,
    0x001010f2, 0x00000003, 0x03000065, 0x001020f2, 0x00000000, 0x03000065, 0x00102032, 0x00000001,
    0x03000065, 0x001020f2, 0x00000002, 0x05000036, 0x00102072, 0x00000000, 0x00101246, 0x00000001,
    0x05000036, 0x00102082, 0x00000000, 0x00004001, 0x00000000, 0x05000036, 0x00102032, 0x00000001,
    0x00101046, 0x00000002, 0x05000036, 0x001020f2, 0x00000002, 0x00101e46, 0x00000003, 0x0100003e,
};
#ifdef __GNUC__
#define UNUSED_ARRAY_ATTR __attribute__((unused))
#else
#define UNUSED_ARRAY_ATTR
#endif
UNUSED_ARRAY_ATTR static const D3D12_SHADER_BYTECODE ps_mismatch_ref_dxbc = { ps_mismatch_ref_code_dxbc, sizeof(ps_mismatch_ref_code_dxbc) };
#undef UNUSED_ARRAY_ATTR
static const BYTE ps_mismatch_ref_code_dxil[] =
{
    0x44, 0x58, 0x42, 0x43, 0x78, 0x66, 0x06, 0xf9, 0x29, 0x51, 0x5e, 0xae, 0xec, 0x6a, 0x98, 0x41, 0xd8, 0x4d, 0x7a, 0x41, 0x01, 0x00, 0x00, 0x00, 0xbc, 0x08, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
    0x38, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 0x00, 0x64, 0x01, 0x00, 0x00, 0x7c, 0x02, 0x00, 0x00, 0x98, 0x02, 0x00, 0x00, 0x53, 0x46, 0x49, 0x30, 0x08, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x31, 0x98, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74,
    0x69, 0x6f, 0x6e, 0x00, 0x41, 0x52, 0x47, 0x00, 0x4f, 0x53, 0x47, 0x31, 0x74, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x61, 0x72, 0x67, 0x65,
    0x74, 0x00, 0x00, 0x00, 0x50, 0x53, 0x56, 0x30, 0x10, 0x01, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x04, 0x03, 0x00, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x41, 0x52, 0x47, 0x00, 0x41, 0x52, 0x47, 0x00, 0x41, 0x52, 0x47, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x44, 0x03, 0x03, 0x04, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x43, 0x00, 0x03, 0x02, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x02, 0x42, 0x00, 0x03, 0x02, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x01, 0x03, 0x44, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x44, 0x10, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x42, 0x10, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x02, 0x44, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
    0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x48, 0x41, 0x53, 0x48,
    0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x34, 0x78, 0xca, 0x90, 0xcb, 0xba, 0xe8, 0x60, 0x9a, 0xd5, 0x3f, 0x64, 0x15, 0x1f, 0x97, 0x6d, 0x44, 0x58, 0x49, 0x4c, 0x1c, 0x06, 0x00, 0x00,
    0x60, 0x00, 0x00, 0x00, 0x87, 0x01, 0x00, 0x00, 0x44, 0x58, 0x49, 0x4c, 0x00, 0x01, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x04, 0x06, 0x00, 0x00, 0x42, 0x43, 0xc0, 0xde, 0x21, 0x0c, 0x00, 0x00,
    0x7e, 0x01, 0x00, 0x00, 0x0b, 0x82, 0x20, 0x00, 0x02, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x07, 0x81, 0x23, 0x91, 0x41, 0xc8, 0x04, 0x49, 0x06, 0x10, 0x32, 0x39, 0x92, 0x01, 0x84, 0x0c,
    0x25, 0x05, 0x08, 0x19, 0x1e, 0x04, 0x8b, 0x62, 0x80, 0x14, 0x45, 0x02, 0x42, 0x92, 0x0b, 0x42, 0xa4, 0x10, 0x32, 0x14, 0x38, 0x08, 0x18, 0x4b, 0x0a, 0x32, 0x52, 0x88, 0x48, 0x90, 0x14, 0x20,
    0x43, 0x46, 0x88, 0xa5, 0x00, 0x19, 0x32, 0x42, 0xe4, 0x48, 0x0e, 0x90, 0x91, 0x22, 0xc4, 0x50, 0x41, 0x51, 0x81, 0x8c, 0xe1, 0x83, 0xe5, 0x8a, 0x04, 0x29, 0x46, 0x06, 0x51, 0x18, 0x00, 0x00,
    0x06, 0x00, 0x00, 0x00, 0x1b, 0x8c, 0xe0, 0xff, 0xff, 0xff, 0xff, 0x07, 0x40, 0x02, 0xa8, 0x0d, 0x84, 0xf0, 0xff, 0xff, 0xff, 0xff, 0x03, 0x20, 0x01, 0x00, 0x00, 0x00, 0x49, 0x18, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x13, 0x82, 0x60, 0x42, 0x20, 0x00, 0x00, 0x00, 0x89, 0x20, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x32, 0x22, 0x48, 0x09, 0x20, 0x64, 0x85, 0x04, 0x93, 0x22, 0xa4, 0x84,
    0x04, 0x93, 0x22, 0xe3, 0x84, 0xa1, 0x90, 0x14, 0x12, 0x4c, 0x8a, 0x8c, 0x0b, 0x84, 0xa4, 0x4c, 0x10, 0x40, 0x23, 0x00, 0x25, 0x00, 0x14, 0x66, 0x00, 0xe6, 0x08, 0xc0, 0x60, 0x8e, 0x00, 0x29,
    0xc6, 0x20, 0x84, 0x14, 0x42, 0xa6, 0x18, 0x84, 0x10, 0x52, 0x08, 0xa1, 0x62, 0x00, 0x42, 0x48, 0x19, 0xa4, 0x8a, 0x01, 0x08, 0x21, 0x85, 0x10, 0x1b, 0x08, 0x48, 0x09, 0x02, 0x00, 0x00, 0x00,
    0x13, 0x14, 0x72, 0xc0, 0x87, 0x74, 0x60, 0x87, 0x36, 0x68, 0x87, 0x79, 0x68, 0x03, 0x72, 0xc0, 0x87, 0x0d, 0xaf, 0x50, 0x0e, 0x6d, 0xd0, 0x0e, 0x7a, 0x50, 0x0e, 0x6d, 0x00, 0x0f, 0x7a, 0x30,
    0x07, 0x72, 0xa0, 0x07, 0x73, 0x20, 0x07, 0x6d, 0x90, 0x0e, 0x71, 0xa0, 0x07, 0x73, 0x20, 0x07, 0x6d, 0x90, 0x0e, 0x78, 0xa0, 0x07, 0x73, 0x20, 0x07, 0x6d, 0x90, 0x0e, 0x71, 0x60, 0x07, 0x7a,
    0x30, 0x07, 0x72, 0xd0, 0x06, 0xe9, 0x30, 0x07, 0x72, 0xa0, 0x07, 0x73, 0x20, 0x07, 0x6d, 0x90, 0x0e, 0x76, 0x40, 0x07, 0x7a, 0x60, 0x07, 0x74, 0xd0, 0x06, 0xe6, 0x10, 0x07, 0x76, 0xa0, 0x07,
    0x73, 0x20, 0x07, 0x6d, 0x60, 0x0e, 0x73, 0x20, 0x07, 0x7a, 0x30, 0x07, 0x72, 0xd0, 0x06, 0xe6, 0x60, 0x07, 0x74, 0xa0, 0x07, 0x76, 0x40, 0x07, 0x6d, 0xe0, 0x0e, 0x78, 0xa0, 0x07, 0x71, 0x60,
    0x07, 0x7a, 0x30, 0x07, 0x72, 0xa0, 0x07, 0x76, 0x40, 0x07, 0x43, 0x9e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x3c, 0x06, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x79, 0x10, 0x20, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0xf2, 0x28, 0x40, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xe4,
    0x61, 0x80, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x0b, 0x04, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x32, 0x1e, 0x98, 0x14, 0x19, 0x11, 0x4c, 0x90, 0x8c, 0x09, 0x26, 0x47,
    0xc6, 0x04, 0x43, 0x22, 0x25, 0x30, 0x02, 0x50, 0x0e, 0xc5, 0x50, 0x06, 0x45, 0x50, 0x1e, 0x54, 0x4a, 0xa2, 0x0c, 0x0a, 0x61, 0x04, 0xa0, 0x08, 0x4a, 0xa1, 0x04, 0x0a, 0x84, 0xde, 0x58, 0x12,
    0xc4, 0x00, 0x00, 0x00, 0x04, 0x02, 0x01, 0x40, 0x60, 0x00, 0x00, 0x20, 0x02, 0x42, 0x20, 0x18, 0x80, 0xa0, 0x00, 0x00, 0x79, 0x18, 0x00, 0x00, 0x5b, 0x00, 0x00, 0x00, 0x1a, 0x03, 0x4c, 0x90,
    0x46, 0x02, 0x13, 0xc4, 0x8e, 0x0c, 0x6f, 0xec, 0xed, 0x4d, 0x0c, 0x24, 0xc6, 0xe5, 0xc6, 0x45, 0x66, 0x06, 0x06, 0xc7, 0xe5, 0x06, 0x04, 0xc5, 0x26, 0xa7, 0xac, 0x86, 0xa6, 0x4c, 0x26, 0x07,
    0x26, 0x65, 0x43, 0x10, 0x4c, 0x10, 0x88, 0x62, 0x82, 0x40, 0x18, 0x1b, 0x84, 0x81, 0x98, 0x20, 0x10, 0xc7, 0x06, 0x61, 0x30, 0x28, 0xc0, 0xcd, 0x4d, 0x10, 0x08, 0x64, 0xc3, 0x80, 0x24, 0xc4,
    0x04, 0xe1, 0xa1, 0x36, 0x04, 0xcb, 0x04, 0x41, 0x00, 0x48, 0xb4, 0x85, 0xa5, 0xb9, 0x71, 0x99, 0xb2, 0xfa, 0x82, 0x7a, 0x9b, 0x4b, 0xa3, 0x4b, 0x7b, 0x73, 0x9b, 0x20, 0x14, 0xcc, 0x04, 0xa1,
    0x68, 0x36, 0x04, 0xc4, 0x04, 0xa1, 0x70, 0x26, 0x08, 0xc5, 0xb3, 0x61, 0x21, 0x1e, 0x28, 0x92, 0xa6, 0x61, 0x22, 0x28, 0x80, 0x43, 0x90, 0xd4, 0xd1, 0x04, 0xa1, 0x80, 0x26, 0x08, 0x44, 0xb2,
    0x41, 0xc0, 0x8c, 0x0d, 0xcb, 0x60, 0x41, 0x94, 0x74, 0x0d, 0xd1, 0x40, 0x65, 0x13, 0x04, 0x42, 0xd9, 0x10, 0x0c, 0x1b, 0x04, 0x0c, 0xdb, 0xb0, 0x6c, 0x16, 0x44, 0x71, 0xd7, 0x70, 0x6d, 0x54,
    0x37, 0x41, 0x28, 0xa2, 0x0d, 0xc1, 0x36, 0x41, 0x28, 0xa4, 0x09, 0x02, 0xb1, 0x6c, 0x10, 0x30, 0x31, 0xd8, 0xb0, 0x60, 0xd6, 0x47, 0x81, 0x41, 0x18, 0x0c, 0x13, 0x46, 0x8d, 0xc1, 0x06, 0xa2,
    0xd2, 0x3c, 0x32, 0x60, 0x32, 0x65, 0xf5, 0x45, 0x15, 0x26, 0x77, 0x56, 0x46, 0x37, 0x41, 0x28, 0xa6, 0x0d, 0x0b, 0x61, 0x06, 0xd0, 0x19, 0x48, 0xd4, 0x30, 0x11, 0xd4, 0x18, 0x6c, 0x58, 0x06,
    0x33, 0x80, 0xce, 0x80, 0xa3, 0x86, 0x6b, 0xa0, 0xba, 0x0d, 0xcb, 0x66, 0x06, 0xdf, 0x19, 0x80, 0x01, 0x35, 0x4c, 0x1b, 0x35, 0x06, 0x1b, 0x06, 0x34, 0x48, 0x03, 0x35, 0xd8, 0x30, 0x94, 0xc1,
    0x1a, 0x00, 0x1b, 0x8a, 0xc6, 0x61, 0x03, 0x00, 0xa8, 0xc2, 0xc6, 0x66, 0xd7, 0xe6, 0x92, 0x46, 0x56, 0xe6, 0x46, 0x37, 0x25, 0x08, 0xaa, 0x90, 0xe1, 0xb9, 0xd8, 0x95, 0xc9, 0xcd, 0xa5, 0xbd,
    0xb9, 0x4d, 0x09, 0x88, 0x26, 0x64, 0x78, 0x2e, 0x76, 0x61, 0x6c, 0x76, 0x65, 0x72, 0x53, 0x02, 0xa3, 0x0e, 0x19, 0x9e, 0xcb, 0x1c, 0x5a, 0x18, 0x59, 0x99, 0x5c, 0xd3, 0x1b, 0x59, 0x19, 0xdb,
    0x94, 0x20, 0xa9, 0x43, 0x86, 0xe7, 0x62, 0x97, 0x56, 0x76, 0x97, 0x44, 0x36, 0x45, 0x17, 0x46, 0x57, 0x36, 0x25, 0x58, 0xea, 0x90, 0xe1, 0xb9, 0x94, 0xb9, 0xd1, 0xc9, 0xe5, 0x41, 0xbd, 0xa5,
    0xb9, 0xd1, 0xcd, 0x4d, 0x09, 0xd8, 0x00, 0x00, 0x79, 0x18, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x33, 0x08, 0x80, 0x1c, 0xc4, 0xe1, 0x1c, 0x66, 0x14, 0x01, 0x3d, 0x88, 0x43, 0x38, 0x84, 0xc3,
    0x8c, 0x42, 0x80, 0x07, 0x79, 0x78, 0x07, 0x73, 0x98, 0x71, 0x0c, 0xe6, 0x00, 0x0f, 0xed, 0x10, 0x0e, 0xf4, 0x80, 0x0e, 0x33, 0x0c, 0x42, 0x1e, 0xc2, 0xc1, 0x1d, 0xce, 0xa1, 0x1c, 0x66, 0x30,
    0x05, 0x3d, 0x88, 0x43, 0x38, 0x84, 0x83, 0x1b, 0xcc, 0x03, 0x3d, 0xc8, 0x43, 0x3d, 0x8c, 0x03, 0x3d, 0xcc, 0x78, 0x8c, 0x74, 0x70, 0x07, 0x7b, 0x08, 0x07, 0x79, 0x48, 0x87, 0x70, 0x70, 0x07,
    0x7a, 0x70, 0x03, 0x76, 0x78, 0x87, 0x70, 0x20, 0x87, 0x19, 0xcc, 0x11, 0x0e, 0xec, 0x90, 0x0e, 0xe1, 0x30, 0x0f, 0x6e, 0x30, 0x0f, 0xe3, 0xf0, 0x0e, 0xf0, 0x50, 0x0e, 0x33, 0x10, 0xc4, 0x1d,
    0xde, 0x21, 0x1c, 0xd8, 0x21, 0x1d, 0xc2, 0x61, 0x1e, 0x66, 0x30, 0x89, 0x3b, 0xbc, 0x83, 0x3b, 0xd0, 0x43, 0x39, 0xb4, 0x03, 0x3c, 0xbc, 0x83, 0x3c, 0x84, 0x03, 0x3b, 0xcc, 0xf0, 0x14, 0x76,
    0x60, 0x07, 0x7b, 0x68, 0x07, 0x37, 0x68, 0x87, 0x72, 0x68, 0x07, 0x37, 0x80, 0x87, 0x70, 0x90, 0x87, 0x70, 0x60, 0x07, 0x76, 0x28, 0x07, 0x76, 0xf8, 0x05, 0x76, 0x78, 0x87, 0x77, 0x80, 0x87,
    0x5f, 0x08, 0x87, 0x71, 0x18, 0x87, 0x72, 0x98, 0x87, 0x79, 0x98, 0x81, 0x2c, 0xee, 0xf0, 0x0e, 0xee, 0xe0, 0x0e, 0xf5, 0xc0, 0x0e, 0xec, 0x30, 0x03, 0x62, 0xc8, 0xa1, 0x1c, 0xe4, 0xa1, 0x1c,
    0xcc, 0xa1, 0x1c, 0xe4, 0xa1, 0x1c, 0xdc, 0x61, 0x1c, 0xca, 0x21, 0x1c, 0xc4, 0x81, 0x1d, 0xca, 0x61, 0x06, 0xd6, 0x90, 0x43, 0x39, 0xc8, 0x43, 0x39, 0x98, 0x43, 0x39, 0xc8, 0x43, 0x39, 0xb8,
    0xc3, 0x38, 0x94, 0x43, 0x38, 0x88, 0x03, 0x3b, 0x94, 0xc3, 0x2f, 0xbc, 0x83, 0x3c, 0xfc, 0x82, 0x3b, 0xd4, 0x03, 0x3b, 0xb0, 0xc3, 0x8c, 0xc8, 0x21, 0x07, 0x7c, 0x70, 0x03, 0x72, 0x10, 0x87,
    0x73, 0x70, 0x03, 0x7b, 0x08, 0x07, 0x79, 0x60, 0x87, 0x70, 0xc8, 0x87, 0x77, 0xa8, 0x07, 0x7a, 0x98, 0x81, 0x3c, 0xe4, 0x80, 0x0f, 0x6e, 0x40, 0x0f, 0xe5, 0xd0, 0x0e, 0xf0, 0x00, 0x00, 0x00,
    0x71, 0x20, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x16, 0x30, 0x0d, 0x97, 0xef, 0x3c, 0xfe, 0xe2, 0x00, 0x83, 0xd8, 0x3c, 0xd4, 0xe4, 0x17, 0xb7, 0x6d, 0x02, 0xd3, 0x70, 0xf9, 0xce, 0xe3, 0x2f,
    0x0e, 0x30, 0x88, 0xcd, 0x43, 0x4d, 0x3e, 0x72, 0xdb, 0x36, 0x50, 0x0d, 0x97, 0xef, 0x3c, 0xbe, 0x34, 0x39, 0x11, 0x81, 0x52, 0xd3, 0x43, 0x4d, 0x7e, 0x71, 0xdb, 0x46, 0x50, 0x0d, 0x97, 0xef,
    0x3c, 0xbe, 0x34, 0x39, 0x11, 0x81, 0x52, 0xd3, 0x43, 0x4d, 0x3e, 0x72, 0xdb, 0x06, 0x40, 0x30, 0x00, 0xd2, 0x00, 0x00, 0x61, 0x20, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x13, 0x04, 0x41, 0x2c,
    0x10, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x44, 0x66, 0x00, 0x4a, 0xa1, 0x10, 0x68, 0x8c, 0x00, 0x00, 0x00, 0x00, 0x23, 0x06, 0x09, 0x00, 0x82, 0x60, 0x80, 0x5c, 0x02, 0x34, 0x29, 0xc4,
    0x88, 0x41, 0x02, 0x80, 0x20, 0x18, 0x20, 0xd8, 0x10, 0x51, 0x48, 0x31, 0x62, 0x90, 0x00, 0x20, 0x08, 0x06, 0x48, 0x46, 0x48, 0xd5, 0x62, 0x8c, 0x18, 0x24, 0x00, 0x08, 0x82, 0x01, 0xa2, 0x15,
    0x93, 0xf5, 0x1c, 0x23, 0x06, 0x09, 0x00, 0x82, 0x60, 0x60, 0x70, 0xc6, 0x74, 0x39, 0xc8, 0x88, 0x41, 0x02, 0x80, 0x20, 0x18, 0x18, 0xdd, 0x41, 0x61, 0x4c, 0x32, 0x62, 0x90, 0x00, 0x20, 0x08,
    0x06, 0x86, 0x87, 0x68, 0x19, 0xa4, 0x8c, 0x18, 0x24, 0x00, 0x08, 0x82, 0x81, 0xf1, 0x25, 0x9b, 0xe6, 0x2c, 0x23, 0x06, 0x09, 0x00, 0x82, 0x60, 0x60, 0x80, 0x81, 0xc2, 0x6d, 0x11, 0x33, 0x62,
    0x90, 0x00, 0x20, 0x08, 0x06, 0xca, 0xc7, 0x70, 0xdc, 0x34, 0x8c, 0x18, 0x24, 0x00, 0x08, 0x82, 0x81, 0xf2, 0x31, 0x1c, 0x07, 0x09, 0x23, 0x06, 0x09, 0x00, 0x82, 0x60, 0xa0, 0x7c, 0x0c, 0xc7,
    0x49, 0xc1, 0x88, 0x41, 0x02, 0x80, 0x20, 0x18, 0x28, 0x1f, 0xc3, 0x71, 0x95, 0x32, 0x62, 0x90, 0x00, 0x20, 0x08, 0x06, 0xca, 0xc7, 0x74, 0xdc, 0x54, 0x8c, 0x18, 0x24, 0x00, 0x08, 0x82, 0x81,
    0xf2, 0x31, 0x1d, 0x07, 0x11, 0x23, 0x06, 0x09, 0x00, 0x82, 0x60, 0xc0, 0x78, 0x0c, 0xc6, 0x4d, 0xc9, 0x88, 0x41, 0x02, 0x80, 0x20, 0x18, 0x30, 0x1e, 0x83, 0x71, 0x10, 0x32, 0x62, 0x90, 0x00,
    0x20, 0x08, 0x06, 0x8c, 0xc7, 0x60, 0x9c, 0x74, 0x8c, 0x18, 0x24, 0x00, 0x08, 0x82, 0x01, 0xe3, 0x31, 0x18, 0x57, 0x19, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#ifdef __GNUC__
#define UNUSED_ARRAY_ATTR __attribute__((unused))
#else
#define UNUSED_ARRAY_ATTR
#endif
UNUSED_ARRAY_ATTR static const D3D12_SHADER_BYTECODE ps_mismatch_ref_dxil = { ps_mismatch_ref_code_dxil, sizeof(ps_mismatch_ref_code_dxil) };
#undef UNUSED_ARRAY_ATTR
