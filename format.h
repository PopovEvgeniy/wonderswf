#define SERVICE_LENGTH 8

typedef struct
{
 unsigned long int signature:32;
 unsigned long int length:32;
} service_information;