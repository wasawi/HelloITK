#include "itkImage.h"
#include <iostream>

int main()
{
  typedef itk::Image< unsigned short, 3 > ImageType;

  ImageType::Pointer image = ImageType::New();

  std::cout << "Hello ITK World !" << std::endl;

  return 0;
}