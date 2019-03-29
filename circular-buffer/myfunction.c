//test functions - 5 push 5 pop
//
#include<stdio.h>
#include"circular_buffer.h"
void main()
{
	__uint8_t data[30]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
	__uint8_t received[30];
	int chakbuffer[10];
	circular_buffer mybuffer;
	mybuffer.buffer = chakbuffer;
	mybuffer.head = 0;
	mybuffer.tail = 0;
	mybuffer.maxlen = 10;
	__uint8_t retVal;
// equal push equal pop	
	for(int i = 0; i<15;i++)                    
	{
		retVal = buffer_push(&mybuffer,data[i]);
		if(!retVal)
			{
				printf("buffer is full can't save the value\n");
				break;
			}

	}
	printf("values 0in buffer after push 15 times\n");	
	for(int i=0; i<10;i++){
	
		printf("%d\n",mybuffer.buffer[i]);
	}
	for(int i = 0;i<11 ;i++)                    
	{
		retVal = buffer_pop(&mybuffer,&received[i]);
		if(!retVal)
			{
				printf("buffer is empty cant pull the value\n");
				break;
			}
	}	

	printf("values in received after pop after 11\n");	
	for(int i=0; i<10;i++)
	{
		printf("%d\n",received[i]);
	}

//11 push 8 pop
	for(int i = 0; i<15;i++)                    
	{
		retVal = buffer_push(&mybuffer,data[i+10]);
			if(!retVal)
			{
				printf("buffer is full can't save the value\n");
				break;
			}
	}
	printf("values in buffer after push after 15 times\n");	
	for(int i=0; i<10;i++){
	
		printf("%d\n",mybuffer.buffer[i]);
	}
	for(int i = 0;i<10 ;i++)                    
	{
		retVal = buffer_pop(&mybuffer,&received[i]);
		if(!retVal)
			{
				printf("buffer is full can't save the value\n");
				break;
			}
	}	

	printf("values in received after pop after 10\n");	
	for(int i=0; i<10;i++){
	
		printf("%d\n",received[i]);
	}
}

