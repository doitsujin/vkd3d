static const DWORD ps_color_code_dxbc[] =
{
    0x43425844, 0xd18ead43, 0x8b8264c1, 0x9c0a062d, 0xfc843226, 0x00000001, 0x000000e0, 0x00000003,
    0x0000002c, 0x00000060, 0x00000094, 0x4e475349, 0x0000002c, 0x00000001, 0x00000008, 0x00000020,
    0x00000000, 0x00000001, 0x00000003, 0x00000000, 0x0000000f, 0x505f5653, 0x5449534f, 0x004e4f49,
    0x4e47534f, 0x0000002c, 0x00000001, 0x00000008, 0x00000020, 0x00000000, 0x00000000, 0x00000003,
    0x00000000, 0x0000000f, 0x545f5653, 0x65677261, 0xabab0074, 0x58454853, 0x00000044, 0x00000050,
    0x00000011, 0x0100086a, 0x04000059, 0x00208e46, 0x00000000, 0x00000001, 0x03000065, 0x001020f2,
    0x00000000, 0x06000036, 0x001020f2, 0x00000000, 0x00208e46, 0x00000000, 0x00000000, 0x0100003e,
};
#ifdef __GNUC__
#define UNUSED_ARRAY_ATTR __attribute__((unused))
#else
#define UNUSED_ARRAY_ATTR
#endif
UNUSED_ARRAY_ATTR static const D3D12_SHADER_BYTECODE ps_color_dxbc = { ps_color_code_dxbc, sizeof(ps_color_code_dxbc) };
#undef UNUSED_ARRAY_ATTR
