#define STB_IMAGE_IMPLEMENTATION
#define STB_IMAGE_WRITE_IMPLEMENTATION

#include "stb_image.h"
#include "stb_image_write.h"
#include <iostream>
#include <omp.h>

int main() {
	int width, height, channels;
	
	
	unsigned char* img = stbi_load("C:/Users/Esteban/Pictures/leon.jpg", &width, &height, &channels, 0);
	if (img == nullptr) {
		std::cerr << "Error al cargar la imagen." << std::endl;
		return -1;
	}
	
	
	unsigned char* grayImg = new unsigned char[width * height * channels];
	
	
#pragma omp parallel for
	for (int i = 0; i < width * height; ++i) {
		int index = i * channels;
		unsigned char grayValue = 0.299f * img[index] + 0.587f * img[index + 1] + 0.114f * img[index + 2];
		grayImg[index] = grayValue;
		grayImg[index + 1] = grayValue;
		grayImg[index + 2] = grayValue;
	}
	
	
	stbi_write_jpg("imagen_grises.jpg", width, height, channels, grayImg, 100);
	
	
	stbi_image_free(img);
	delete[] grayImg;
	
	std::cout << "Imagen procesada y guardada como 'imagen_grises.jpg'." << std::endl;
	
	return 0;
}
