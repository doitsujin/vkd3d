struct VsOut
{
    float4 position : SV_POSITION;
    float2 arg1 : ARG1;
};

struct PsOut
{
    float4 color0 : SV_TARGET0;
    float2 color1 : SV_TARGET1;
    uint4  color2 : SV_TARGET2;
};

PsOut main(VsOut data)
{
    PsOut result;
    result.color0 = float4(0.0f, 0.0f, 0.0f, 0.0f);
    result.color1 = data.arg1;
    result.color2 = uint4(0, 0, 0, 0);
    return result;
}
