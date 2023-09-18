#version 410

uniform sampler2D alienTex;

in vec2 fragUV;
out vec4 outCol;

void main()
{
	vec4 parrot = texture(alienTex, fragUV);
	outCol = parrot;
}