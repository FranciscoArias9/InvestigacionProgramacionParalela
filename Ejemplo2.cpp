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
	
	
#pragma omp parallel for
	for (int i = 0; i < width * height; i++) {
		int index = i * channels;
		for (int c = 0; c < channels; c++) {
			img[index + c] = 255 - img[index + c];
		}
	}
	
	stbi_write_jpg("imagen_invertida.jpg", width, height, channels, img, 100);
	
	stbi_image_free(img);
	
	std::cout << "Imagen procesada y guardada como 'imagen_invertida.jpg'." << std::endl;
	
	return 0;
}
