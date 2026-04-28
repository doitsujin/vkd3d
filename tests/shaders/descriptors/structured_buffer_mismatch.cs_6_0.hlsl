Buffer<uint> buf_srv : register(t0);
RWBuffer<uint> buf_uav : register(u0);

[numthreads(32, 1, 1)]
void main(uint thr : SV_GroupIndex)
{
    buf_uav[thr] = buf_srv[thr];
}
