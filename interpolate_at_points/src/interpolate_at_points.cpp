#include <iostream>
#include <stdlib.h>

#include <vtkUnstructuredGrid.h> 
#include <vtkUnstructuredGridReader.h>
#include <vtkSmartPointer.h>

void main_body(const std::string &filename);

int main(int argc, char *argv[])
{
 if (argc < 2) {
   std::cout << "Usage: " << argv[0] << " VTK_FILE" << std::endl;
   return 22;
 }
 auto filename = std::string(argv[1]);
 main_body(filename);
  
 return EXIT_SUCCESS; 
}

void main_body(const std::string &filename) {
  using MeshPtr =   vtkSmartPointer<vtkUnstructuredGrid>;
  using ReaderPtr = vtkSmartPointer<vtkUnstructuredGridReader>;
  auto pReader = ReaderPtr::New();
  pReader->SetFileName(filename.c_str());
  pReader->Update();
  auto pMesh = pReader->GetOutput();

  std::cout << "Number of nodes : " << pMesh->GetNumberOfPoints() << std::endl;
}
