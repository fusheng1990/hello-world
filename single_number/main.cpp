#include<iostream.h>

int main()
{
  std::cin<<A<<std::endl;
  int k = A[0];
  int n = sizeof(A)/sizeof(A[0]); //calculate the size of an array
	std::cout<<n<<std::endl;
	for (int i =1;i<n;i++)
	{
		k = k^A[i];  //异或  出现过的都会消失
	}
	std::cout<<k<<std::endl;

}
}
