Shader "Unlit/GridShader"
{
    Properties
    {
        _GridColor ("Grid Color", Color) = (0.3, 0.3, 0.3, 1)
        _LineThickness ("Line Thickness", Float) = 10.0
        _CellSize ("Cell Size", Float) = 10.0
    }
    SubShader
    {
        Tags { "RenderType"="Opaque" }
        LOD 100

        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag

            // Properties を uniform で明示
            uniform fixed4 _GridColor;
            uniform float _LineThickness;
            uniform float _CellSize;

            struct appdata {
                float4 vertex : POSITION;
            };

            struct v2f {
                float4 pos : SV_POSITION;
                float3 worldPos : TEXCOORD0;
            };

            v2f vert (appdata v) {
                v2f o;
                o.pos = UnityObjectToClipPos(v.vertex);
                o.worldPos = mul(unity_ObjectToWorld, v.vertex).xyz;
                return o;
            }

            fixed4 frag (v2f i) : SV_Target {
                float2 coord = i.worldPos.xz / _CellSize;
                float2 grid = abs(frac(coord) - 0.5);

                float2 fw = fwidth(coord);
                float gx = smoothstep(0.0, _LineThickness * fw.x, grid.x);
                float gy = smoothstep(0.0, _LineThickness * fw.y, grid.y);

                float gridMask = min(gx, gy);
                return fixed4(_GridColor.rgb, 1.0 - gridMask);
            }
            ENDCG
        }
    }
}