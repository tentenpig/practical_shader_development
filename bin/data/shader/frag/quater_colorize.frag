#version 410

uniform sampler2D parrotTex;

in vec2 fragUV;
out vec4 outCol;

void main()
{
	outCol = texture(parrotTex, fragUV);

	if (fragUV.y <= 1)
	{
		if (fragUV.x <= 1)
		{
			// outCol -= vec4(0.5, 0.5, 0.5, 0.5);
			outCol *= vec4(-0.5, -0.5, -0.5, 1);
		}
		else
		{
			// outCol += vec4(0.25, 0.25, 1, 1);
			outCol *= vec4(0.25, 0.25, 1, 1);
		}
	}
	else
	{
		if (fragUV.x <= 1)
		{
			// outCol += vec4(0.5, 0.5, 0.5, 1);
			outCol *= vec4(0.5, 0.5, 0.5, 1);
		}
		else
		{
			// outCol += vec4(1, 0, 0, 1);
			outCol *= vec4(1, 0, 0, 1);
		}
	}
}