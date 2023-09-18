#version 410

uniform sampler2D parrotTex;

in vec2 fragUV;
out vec4 outCol;

void main()
{
	float multiply = 0.5f;
	float add = 0.5f;

	outCol = texture(parrotTex, fragUV) * multiply + add;
}