#version 300 es
in highp vec4 fragColor;

out highp vec4 color;

void main()
{
	color = fragColor;
  //color = vec4(1.0f, 0.5f, 0.2f, 1.0f);
}