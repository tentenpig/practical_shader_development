#version 410

uniform sampler2D parrotTex;

in vec2 fragUV;
out vec4 outCol;

void main()
{
	vec4 tex = texture(parrotTex, fragUV);
	tex.r *= 2.0f;
	tex.g *= 2.0f;
	tex.b *= 2.0f;
	tex.a *= 2.0f;
	outCol = tex;
}