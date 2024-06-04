#ifndef primitives_h
#define primitives_h

#ifdef _WIN32
#define _USE_MATH_DEFINES
#endif

#include <stdlib.h>
#include <math.h>

int _sphere_stacks = 20; // 7;
int _sphere_slices = 30; // 13;
static float _unit_circle_outline_vertices[192];
static float _unit_circle_outline_normals[192];
static float _unit_circle_outline_texCoord[192];
static float _unit_circle_fill_vertices[198]; // includes 1 more point: the center
static float _unit_circle_fill_normals[198];
static float _unit_circle_fill_texCoord[198];
float *_unit_sphere_vertices, *_unit_sphere_normals, *_unit_sphere_texture;
static float _invert_y_m[16] = {
	1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1
};
static unsigned char SHAPE_FILL = 1;

const float _tetrahedron_points[12] = {
	1.0, 0.0, 0.0, -0.3333, -0.9428, 0.0, -0.3333, 0.4714, 0.81649, -0.3333, 0.4714, -0.8164
};
const unsigned short _tetrahedron_lines[12] = {
	2, 3, 2, 0, 2, 1, 3, 0, 3, 1, 0, 1
};
const unsigned short _tetrahedron_faces[12] = {
	2, 1, 3, 2, 3, 0, 2, 0, 1, 3, 1, 0
};
const float _tetrahedron_dual_points[12] = {
	-1.0, 0.0, 0.0, 0.3333, 0.9428, 0.0, 0.3333, -0.4714, 0.81649, 0.3333, -0.4714, -0.81649
};
const unsigned short _tetrahedron_dual_lines[12] = {
	2, 3, 2, 0, 2, 1, 3, 0, 3, 1, 0, 1
};
const unsigned short _tetrahedron_dual_faces[12] = {
	2, 1, 3, 2, 3, 0, 2, 0, 1, 3, 1, 0
};
const float _octahedron_points[18] = {
	1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, -1.0, 0.0, 0.0, 0.0, -1.0, 0.0, 0.0, 0.0, -1.0
};
const unsigned short _octahedron_lines[24] = {
	1, 0, 1, 2, 1, 5, 1, 3, 3, 2, 2, 0, 0, 5, 5, 3, 4, 2, 4, 3, 4, 5, 4, 0
};
const unsigned short _octahedron_faces[24] = {
	1, 0, 2, 1, 5, 0, 4, 0, 5, 4, 2, 0, 1, 2, 3, 1, 3, 5, 4, 5, 3, 4, 3, 2
};
const float _hexahedron_points[24] = {
	0.57735, 0.57735, 0.57735, 0.57735, 0.57735, -0.57735, 0.57735, -0.57735, -0.57735, 0.57735, -0.57735, 0.57735, -0.57735, 0.57735, 0.57735, -0.57735, 0.57735, -0.57735, -0.57735, -0.57735, -0.57735, -0.57735, -0.57735, 0.57735
};
const unsigned short _hexahedron_lines[24] = {
	0, 1, 1, 2, 2, 3, 3, 0, 0, 4, 1, 5, 2, 6, 3, 7, 4, 5, 5, 6, 6, 7, 7, 4
};
const unsigned short _hexahedron_faces[24] = {
	0, 3, 2, 1, 4, 0, 1, 5, 0, 3, 7, 4, 7, 4, 5, 6, 3, 7, 6, 2, 1, 5, 6, 2
};
const unsigned short _hexahedron_triangle_faces[36] = {
	0, 2, 3, 2, 0, 1, 4, 1, 0, 1, 4, 5, 0, 3, 7, 7, 4, 0, 7, 5, 4, 5, 7, 6, 3, 6, 7, 6, 3, 2, 1, 5, 6, 6, 2, 1
};
const float _icosahedron_points[36] = {
	0.44721, -0.2763, 0.85065, -0.44721, 0.2763, 0.85065, -0.44721, 0.2763, -0.85065, 0.44721, -0.2763, -0.85065, -0.44721, -0.7236, 0.52573, 0.44721, 0.7236, 0.52573, 0.44721, 0.7236, -0.52573, -0.44721, -0.7236, -0.52573, 0.44721, -0.8944, 0.0, 1.0, 0.0, 0.0, -0.44721, 0.8944, 0.0, -1.0, 0.0, 0.0
};
const unsigned short _icosahedron_lines[60] = {
	0, 8, 0, 9, 0, 1, 0, 4, 0, 5, 8, 3, 8, 9, 8, 7, 8, 4, 9, 3, 9, 6, 9, 5, 7, 4, 7, 3, 7, 2, 7, 11, 2, 10, 2, 11, 2, 3, 2, 6, 10, 11, 10, 5, 10, 6, 10, 1, 11, 1, 11, 4, 4, 1, 5, 1, 5, 6, 6, 3
};
const unsigned short _icosahedron_faces[60] = {
	8, 7, 4, 7, 8, 3, 8, 4, 0, 8, 0, 9, 9, 3, 8, 9, 0, 5, 9, 5, 6, 9, 6, 3, 3, 2, 7, 3, 6, 2, 0, 4, 1, 0, 1, 5, 11, 4, 7, 11, 7, 2, 11, 2, 10, 1, 11, 10, 11, 1, 4, 10, 6, 5, 10, 5, 1, 10, 2, 6
};
const float _dodecahedron_points[60] = {
	-0.7946, 0.4911, 0.3568, -0.1875, 0.7946, -0.5773, -0.7946, 0.4911, -0.3568, -0.7946, -0.1875, -0.5773, 0.1875, 0.3035, -0.9341, 0.1875, 0.9822, 0.0, 0.1875, -0.7946, -0.5773, -0.1875, -0.3035, -0.9341, -0.1875, -0.9822, 0.0, -0.7946, -0.6070, 0.0, 0.7946, -0.4911, -0.3568, 0.1875, -0.7946, 0.5773, -0.1875, -0.3035, 0.9341, -0.7946, -0.1875, 0.5773, 0.7946, -0.4911, 0.3568, -0.1875, 0.7946, 0.5773, 0.1875, 0.3035, 0.9341, 0.7946, 0.1875, 0.5773, 0.7946, 0.6070, 0.0, 0.7946, 0.1875, -0.5773
};
const unsigned short _dodecahedron_lines[60] = {
	19, 18, 18, 17, 17, 14, 14, 10, 10, 19, 14, 11, 11, 8, 8, 6, 6, 10, 19, 4, 4, 1, 1, 5, 5, 18, 9, 3, 3, 7, 7, 6, 8, 9, 13, 9, 3, 2, 2, 0, 0, 13, 12, 11, 12, 13, 1, 2, 5, 15, 15, 0, 15, 16, 16, 17, 16, 12, 4, 7
};
const unsigned short _dodecahedron_triangle_faces[108] = {
	5, 2, 1, 15, 0, 5, 2, 5, 0, 9, 2, 13, 2, 0, 13, 3, 2, 9, 10, 17, 19, 18, 19, 17, 14, 17, 10, 19, 1, 4, 6, 9, 8, 1, 18, 5, 11, 14, 8, 18, 1, 19, 8, 9, 11, 10, 8, 14, 8, 10, 6, 6, 7, 9, 9, 7, 3, 13, 12, 9, 12, 11, 9, 18, 15, 5, 17, 15, 18, 15, 17, 16, 11, 12, 14, 14, 12, 17, 17, 12, 16, 12, 13, 16, 13, 0, 16, 0, 15, 16, 7, 2, 3, 2, 7, 1, 1, 7, 4, 4, 7, 19, 19, 7, 10, 6, 10, 7
};
const unsigned int _platonic_num_vertices[6] = {
	4, 6, 8, 12, 20, 4
};
const unsigned int _platonic_num_lines[6] = {
	6, 12, 12, 30, 30, 6
};
const unsigned int _platonic_num_faces[6] = {
	4, 8, 12, 20, 36, 4
};//{4,8,6,20,12,4};
const float* _platonic_point_arrays[6] = {
	_tetrahedron_points,_octahedron_points,_hexahedron_points,_icosahedron_points,_dodecahedron_points,_tetrahedron_dual_points
};
const unsigned short* _platonic_line_array[6] = {
	_tetrahedron_lines,_octahedron_lines,_hexahedron_lines,_icosahedron_lines,_dodecahedron_lines,_tetrahedron_dual_lines
};
const unsigned short* _platonic_face_array[6] = {
	_tetrahedron_faces,_octahedron_faces,_hexahedron_triangle_faces,_icosahedron_faces,_dodecahedron_triangle_faces,_tetrahedron_dual_faces
};
const int _platonic_dual_index[6] = { 5,2,1,4,3,0 };

void initPrimitives(){
	static unsigned char _geometry_initialized = 0;
	if (!_geometry_initialized) {
		// CIRCLE
		for(int i = 0; i < 64; i++){
			_unit_circle_outline_vertices[i*3+0] = -sinf(M_PI*2/64.0f*i);
			_unit_circle_outline_vertices[i*3+1] = cosf(M_PI*2/64.0f*i);
			_unit_circle_outline_vertices[i*3+2] = 0.0f;
			_unit_circle_outline_normals[i*3+0] = _unit_circle_outline_normals[i*3+1] = 0.0;
			_unit_circle_outline_normals[i*3+2] = 1.0;
			_unit_circle_outline_texCoord[i*3+0] = -sinf(M_PI*2/64.0f*i)*0.5 + 0.5;
			_unit_circle_outline_texCoord[i*3+1] = cosf(M_PI*2/64.0f*i)*0.5 + 0.5;
		}
		_unit_circle_fill_vertices[0] = 0.0f;
		_unit_circle_fill_vertices[1] = 0.0f;
		_unit_circle_fill_vertices[2] = 0.0f;
		_unit_circle_fill_normals[0] = _unit_circle_fill_normals[1] = 0.0f;
		_unit_circle_fill_normals[2] = 1.0f;
		_unit_circle_fill_texCoord[0] = 0.0f;
		_unit_circle_fill_texCoord[1] = 0.0f;
		for(int i = 1; i <= 65; i++){
			_unit_circle_fill_vertices[i*3+0] = -sinf(M_PI*2/64.0f*(i-1));
			_unit_circle_fill_vertices[i*3+1] = cosf(M_PI*2/64.0f*(i-1));
			_unit_circle_fill_vertices[i*3+2] = 0.0f;
			_unit_circle_fill_normals[i*3+0] = _unit_circle_fill_normals[i*3+1] = 0.0f;
			_unit_circle_fill_normals[i*3+2] = 1.0f;
			_unit_circle_fill_texCoord[i*3+0] = -sinf(M_PI*2/64.0f*(i-1))*0.5 + 0.5f;
			_unit_circle_fill_texCoord[i*3+1] = cosf(M_PI*2/64.0f*(i-1))*0.5 + 0.5f;
		}
		// SPHERE
		// GLfloat m_Scale = 1;
		// GLfloat *vPtr = _unit_sphere_vertices = (GLfloat*)malloc(sizeof(GLfloat) * 3 * ((_sphere_slices*2+2) * (_sphere_stacks)));
		// GLfloat *nPtr = _unit_sphere_normals = (GLfloat*)malloc(sizeof(GLfloat) * 3 * ((_sphere_slices*2+2) * (_sphere_stacks)));
		// GLfloat *tPtr = _unit_sphere_texture = (GLfloat*)malloc(sizeof(GLfloat) * 2 * ((_sphere_slices*2+2) * (_sphere_stacks)));
		float m_Scale = 1;
		float *vPtr = _unit_sphere_vertices = (float*)malloc(sizeof(float) * 3 * ((_sphere_slices*2+2) * (_sphere_stacks)));
		float *nPtr = _unit_sphere_normals = (float*)malloc(sizeof(float) * 3 * ((_sphere_slices*2+2) * (_sphere_stacks)));
		float *tPtr = _unit_sphere_texture = (float*)malloc(sizeof(float) * 2 * ((_sphere_slices*2+2) * (_sphere_stacks)));
		for(unsigned int phiIdx = 0; phiIdx < _sphere_stacks; phiIdx++){
			// Latitude
			//starts at -pi/2 goes to pi/2
			float phi0 = M_PI * ((float)(phiIdx+0) * (1.0/(float)(_sphere_stacks)) - 0.5);  // the first circle
			float phi1 = M_PI * ((float)(phiIdx+1) * (1.0/(float)(_sphere_stacks)) - 0.5);  // second one
			float cosPhi0 = cos(phi0);
			float sinPhi0 = sin(phi0);
			float cosPhi1 = cos(phi1);
			float sinPhi1 = sin(phi1);
			for(unsigned int thetaIdx = 0; thetaIdx < _sphere_slices; thetaIdx++){
				//longitude
				float theta = 2.0*M_PI * ((float)thetaIdx) * (1.0/(float)(_sphere_slices - 1));
				float cosTheta = cos(theta+M_PI*.5);
				float sinTheta = sin(theta+M_PI*.5);
				vPtr[0] = m_Scale*cosPhi0 * cosTheta;
				vPtr[1] = m_Scale*(cosPhi0 * sinTheta);
				vPtr[2] = -m_Scale*sinPhi0;
				vPtr[3] = m_Scale*cosPhi1 * cosTheta;
				vPtr[4] = m_Scale*(cosPhi1 * sinTheta);
				vPtr[5] = -m_Scale*sinPhi1;
				nPtr[0] = cosPhi0 * cosTheta;
				nPtr[1] = cosPhi0 * sinTheta;
				nPtr[2] = -sinPhi0;
				nPtr[3] = cosPhi1 * cosTheta;
				nPtr[4] = cosPhi1 * sinTheta;
				nPtr[5] = -sinPhi1;
				// GLfloat texX = (float)thetaIdx * (1.0f/(float)(_sphere_slices-1));
				float texX = (float)thetaIdx * (1.0f/(float)(_sphere_slices-1));
				tPtr[0] = texX;
				tPtr[1] = (float)(phiIdx + 0) * (1.0f/(float)(_sphere_stacks));
				tPtr[2] = texX;
				tPtr[3] = (float)(phiIdx + 1) * (1.0f/(float)(_sphere_stacks));
				vPtr += 2*3;
				nPtr += 2*3;
				tPtr += 2*2;
			}
		}
		_geometry_initialized = 1;
	}
}

#endif
