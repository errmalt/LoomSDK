static const uint8_t gfShaderPosColorTex[226] =
{
	0x46, 0x53, 0x48, 0x01, 0x01, 0x83, 0xf2, 0xe1, 0x23, 0x69, 0x66, 0x64, 0x65, 0x66, 0x20, 0x47, // FSH.....#ifdef G
	0x4c, 0x5f, 0x45, 0x53, 0x0a, 0x70, 0x72, 0x65, 0x63, 0x69, 0x73, 0x69, 0x6f, 0x6e, 0x20, 0x68, // L_ES.precision h
	0x69, 0x67, 0x68, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x3b, 0x0a, 0x23, 0x65, 0x6e, 0x64, // ighp float;.#end
	0x69, 0x66, 0x20, 0x2f, 0x2f, 0x20, 0x47, 0x4c, 0x5f, 0x45, 0x53, 0x0a, 0x0a, 0x75, 0x6e, 0x69, // if // GL_ES..uni
	0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x75, // form sampler2D u
	0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, // _texColor;.varyi
	0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, // ng vec2 v_texcoo
	0x72, 0x64, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, // rd0;.varying vec
	0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, // 4 v_color0;.void
	0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, //  main ().{.  gl_
	0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x28, 0x76, 0x5f, 0x63, // FragColor = (v_c
	0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x20, 0x2a, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, // olor0 * texture2
	0x44, 0x20, 0x28, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2c, 0x20, 0x76, // D (u_texColor, v
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, // _texcoord0));.}.
	0x0a, 0x00,                                                                                     // ..
};
