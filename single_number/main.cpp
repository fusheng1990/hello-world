#include<iostream.h>

int main()
{
  std::cin<<A<<std::endl;
  int k = A[0];
  int n = sizeof(A)/sizeof(A[0]); //cal
	std::cout<<n<<std::endl;
	for (int i =1;i<n;i++)
	{
		k = k^A[i];
	}
	std::cout<<k<<std::endl;

}
}
