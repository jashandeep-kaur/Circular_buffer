//function push and pop
//array full and empty condition
//empty when head = tail
//full when head+1 = tail
//needed head, tail, array buffer, maxlenth

#include<stdio.h>
#include "circular_buffer.h"

__uint8_t buffer_push(circular_buffer *c,__uint8_t data)
{
	__uint8_t next;
	next = (c->head + 1);

	if(next >= c->maxlen)     //check if head is at the end of the array buffer
		{
			next = 0;
		}
	if(next ==c->tail)      //check if buffer is full
		{
			c->buffer[next] = data; 
			c->head = next;
			return 0;
		}

	c->buffer[next] = data;      //data is loaded in the buffer;
	c->head = next;

	return 1;
}

__uint8_t buffer_pop(circular_buffer *c, __uint8_t *data)
{
	__uint8_t next;
	next = (c->tail +1);
	if(next >= c->maxlen)
	{
		next = 0;
	}
	
	if(next ==c->head) {
		*data = c->buffer[next];
		c->tail = next;
				return 0;
	}
		

	*data = c->buffer[next];
	c->tail = next;
	return 1;
}
