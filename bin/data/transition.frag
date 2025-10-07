#version 150

uniform sampler2D tex0;
uniform vec4 color;     // Mesh color (from drawMesh)
uniform float uTime;    // Animation time

in vec2 vTexCoord;
out vec4 fragColor;

void main() {
    float texMask = texture(tex0, vTexCoord).r;

    // Animation factor loops smoothly between 0 and 1
    float anim = sin(uTime * 1.5) * 0.5 + 0.5;

    // Mix factor combines texture and animation for a dynamic transition
    float t = mix(texMask, anim, 0.5);

    // Target color is cyan
    vec3 cyan = vec3(0.0, 1.0, 1.0);

    // Blend between the base color and cyan
    vec3 finalColor = mix(color.rgb, cyan, t);

    fragColor = vec4(finalColor, color.a);
}
