struct s_VSInput
{
	float3 pos : POSITION;
	float2 tex : TEXCOORD0;
};

struct s_PSInput
{
	float4 pos : SV_POSITION;
	float2 tex : TEXCOORD0;
	float left : FOG;
};

s_PSInput VS(s_VSInput input)
{
	s_PSInput output;
	float4 tmp = float4(input.pos, 1.0f);
	output.pos = tmp;
	output.tex = input.tex;
	if (tmp.z < 0.5f)
		output.left = 0.2f;
	else
		output.left = 0.8f;
	return output;
}