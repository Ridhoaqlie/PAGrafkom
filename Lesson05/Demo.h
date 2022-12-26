#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, blendingProgram, VBO, VAO, EBO, Floortexture, Floortexture_1, VBO2, VAO2, EBO2, Planetexture, Planetexture_1, VBO3, VAO3, EBO3, Planetexture2,
		Planetexture2_1, VBO4, VAO4, EBO4, CarTexture,  CarTexture_1, BuildTexture, BuildTexture_1,  LampTexture, LampTexture_1, GlassTexture, GlassTexture_1, MenaraTexture, MenaraTexture_1;
	float angle = 3;
	float scale = 0;
	float pos = 0;
	float pos1 = 0;
	float left, right;
	double seconds = 0.0;
	float posCamX, posCamY, posCamZ, viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, CAMERA_SPEED, fovy;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow* window);

	//kamera
	void InitCamera();
	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);


	void BuildColoredCube();
	void BuildColoredbuilding();
	void BuildColoredLamp();
	void BuildColoredPlane();
	void BuildColoredCar();
	void BuildColoredCubeBack();
	void BuildColoredMenara();
	void BuildColoredKaca();

	//heli
	void DrawPlane(int x,  int z);
	void DrawColoredCube(int x,  int z);
	void DrawColoredCubeBack(int x,  int z);
	void DrawColoredCubeHead(int x,  int z);
	void DrawColoredCubeWing1(int x,  int z);
	void DrawColoredCubeWing2(int x, int z);
	void DrawColoredCubeBackWing(int x,  int z);

	//bangunan
	void DrawColoredCubeBuilding();

	//lampu
	void DrawLamp();
	
	//tanah
	void DrawColoredPlane();

	//mobil
	void DrawCar();

	// menara
	void DrawMenara();
	void DrawKaca();
};
