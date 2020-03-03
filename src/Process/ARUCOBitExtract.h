#pragma once

#include "Visi_export.h"

#include "../Core/ImageType.h"
#include "../Core/Image.h"
#include "../Core/ImageGPU.h"
#include "../Core/Contour.h"

#include <vector>

namespace Visi
{
namespace Process
{

class VISI_EXPORT ARUCOBitExtract
{
    private: 
        class Internal;
        Internal* internal;

	public:
		ARUCOBitExtract(); 
        ~ARUCOBitExtract(); 
        void SetGridSize(int W, int H); 
        void SetMarginSize(float s); 
        void Run(Image* input, std::vector<Contour>* contours,  std::vector<Image>* bitImages); 
};
	
}
}