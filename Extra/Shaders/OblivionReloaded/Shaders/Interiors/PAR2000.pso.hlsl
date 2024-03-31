//
// Generated by Microsoft (R) D3DX9 Shader Compiler 9.08.299.0000
//
// Parameters:

float4 AmbientColor : register(c1);
float4 PSLightColor[4] : register(c2);
float4 Toggles : register(c7);
float4 TESR_ParallaxData : register(c8);

sampler2D BaseMap : register(s0);
sampler2D NormalMap : register(s1);

// Registers:
//
//   Name         Reg   Size
//   ------------ ----- ----
//   AmbientColor const_1       1
//   PSLightColor[0] const_2        1
//   Toggles      const_7       1
//   BaseMap      texture_0       1
//   NormalMap    texture_1       1
//


// Structures:

struct VS_INPUT {
    float2 BaseUV : TEXCOORD0;
    float3 texcoord_1 : TEXCOORD1_centroid;
    float3 texcoord_6 : TEXCOORD6_centroid;
    float3 LCOLOR_0 : COLOR0;
    float4 LCOLOR_1 : COLOR1;
};

struct VS_OUTPUT {
    float4 color_0 : COLOR0;
};

#include "..\Includes\PAR.hlsl"

VS_OUTPUT main(VS_INPUT IN) {
    VS_OUTPUT OUT;

#define	expand(v)		(((v) - 0.5) / 0.5)
#define	uvtile(w)		(((w) * 0.04) - 0.02)
#define	shades(n, l)	saturate(dot(n, l))

    float3 noxel1;
    float3 q2;
    float3 q4;
    float3 q5;
    float3 q6;
    float4 r0;
    float2 uv;
	uv.xy = ParallaxMapping(IN.BaseUV, IN.texcoord_6);
	r0.xyzw = tex2D(BaseMap, uv.xy);
    noxel1.xyz = tex2D(NormalMap, uv.xy).xyz;
    q2.xyz = shades(normalize(expand(noxel1.xyz)), IN.texcoord_1.xyz) * PSLightColor[0].rgb + AmbientColor.rgb;
    q4.xyz = (Toggles.x <= 0.0 ? r0.xyz : (r0.xyz * IN.LCOLOR_0.xyz));
    q5.xyz = max(q2.xyz, 0) * q4.xyz;
    q6.xyz = (Toggles.y <= 0.0 ? q5.xyz : ((IN.LCOLOR_1.w * (IN.LCOLOR_1.xyz - q5.xyz)) + q5.xyz));
    OUT.color_0.a = AmbientColor.a;
    OUT.color_0.rgb = q6.xyz;
    return OUT;
	
};

// approximately 25 instruction slots used (3 texture, 22 arithmetic)
