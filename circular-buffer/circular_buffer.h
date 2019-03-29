typedef struct{
	int *buffer;
	int head;
	int tail;
	int maxlen;
}circular_buffer;

__uint8_t buffer_push(circular_buffer *c,__uint8_t data);
__uint8_t buffer_pop(circular_buffer *c, __uint8_t *data);
