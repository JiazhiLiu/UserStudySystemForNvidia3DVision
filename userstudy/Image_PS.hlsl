Texture2DArray g_textureLeftSide : register(t0);
Texture2DArray g_textureRightSide : register(t1);
SamplerState g_sampler : register(s0);

cbuffer g_textureIndex: register(b0)
{
	int4 info;		// x: texture index; y: right view; z: display mode
}


struct s_PSInput
{
	float4 pos : SV_POSITION;
	float2 tex : TEXCOORD0;
	float left : FOG;
};

float4 PS(s_PSInput input) :SV_TARGET
{
	if (input.left < 0.5f) {
		if (abs(info.z - 1) < 0.1) {
			if (info.y < 0.5)
				return g_textureLeftSide.Sample(g_sampler, float3(input.tex.x, input.tex.y / 2, info.x));
			else
				return g_textureLeftSide.Sample(g_sampler, float3(input.tex.x, input.tex.y / 2 + 0.5, info.x));
		}
		else if (abs(info.z - 2) < 0.1) {
			if (info.y < 0.5)
				return g_textureLeftSide.Sample(g_sampler, float3(input.tex.x / 2, input.tex.y, info.x));
			else
				return g_textureLeftSide.Sample(g_sampler, float3(input.tex.x / 2 + 0.5, input.tex.y, info.x));
		}
		else
		    return g_textureLeftSide.Sample(g_sampler, float3(input.tex.x, input.tex.y, info.x));
	}
	else {
		if (abs(info.z - 1) < 0.1) {
			if (info.y < 0.5)
				return g_textureRightSide.Sample(g_sampler, float3(input.tex.x, input.tex.y / 2, info.x));
			else
				return g_textureRightSide.Sample(g_sampler, float3(input.tex.x, input.tex.y / 2 + 0.5, info.x));
		}
		else if (abs(info.z - 2) < 0.1) {
			if (info.y < 0.5)
				return g_textureRightSide.Sample(g_sampler, float3(input.tex.x / 2, input.tex.y, info.x));
			else
				return g_textureRightSide.Sample(g_sampler, float3(input.tex.x / 2 + 0.5, input.tex.y, info.x));
		}
	    else
	        return g_textureRightSide.Sample(g_sampler, float3(input.tex.x, input.tex.y, info.x));
	}


}