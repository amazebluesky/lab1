#include <iostream>
#include <cstdlib>
        using namespace std;
        int main()
        {
	int n;
        cin>>n;
		
                while(n==1){

                        exit(0);

        }
                while(n!=1){
                       if(n%2==1){ 
				n=(n*3)+1;
				}
               	       else if(n%2==0)	{	
                        		n=n/2;
					}
			   	
		      	cout<<n<<" ";
			   }
                return 0;
	}
