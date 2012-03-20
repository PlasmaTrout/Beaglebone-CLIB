#include <stdio.h>
#include <fcntl.h>
#include <string.h>

#define GPIO_DIR "/sys/class/gpio/"
#define GPIO_EXPORT_SUFFIX "export"
#define GPIO_UNEXPORT_SUFFIX "unexport"

void gpio_export(unsigned int value){
    
    char prefix[255];
    strcpy(prefix,GPIO_DIR);
    strcat(prefix,GPIO_EXPORT_SUFFIX);
    
    printf("Writing %i to %s\n",value,prefix);
    
    FILE *fd;
    fd = fopen(prefix,"w");
    
    fprintf(fd,"%i",value);
    fclose(fd);
    
}

void gpio_set_direction(unsigned int direction, unsigned int pin){
    
    char direction_name[24];
    char port[24];
    
    sprintf(port,"gpio%i",pin);
    
    char prefix[255];
    strcpy(prefix, GPIO_DIR);
    strcat(prefix, port);
    strcat(prefix, "/direction");
    
    if(direction==0){
        strcpy(direction_name,"in");
    }else{
        strcpy(direction_name, "out");
    }
    
    printf("Writing %s to %s\n",direction_name,prefix);
    
    FILE *fd;
    fd = fopen(prefix,"w");
    
    fprintf(fd,"%s",direction_name);
    fclose(fd);
}

void gpio_set(unsigned int value, unsigned int pin){
    
    char port[24];
    int value_to_write = 0;
    
    sprintf(port,"gpio%i/value",pin);
    
    char prefix[255];
    strcpy(prefix, GPIO_DIR);
    strcat(prefix, port);
    
    if(value == 1){
      value_to_write = 1;   
    }
    
    printf("Writing %i to %s\n",value_to_write,prefix);
    
    FILE *fd;
    fd = fopen(prefix,"w");
    
    fprintf(fd,"%i",value_to_write);
    fclose(fd);
    
}

void gpio_unexport(unsigned int value){
    
    char prefix[255];
    strcpy(prefix,GPIO_DIR);
    strcat(prefix,GPIO_UNEXPORT_SUFFIX);
    
    printf("Writing %i to %s\n",value,prefix);
    
    FILE *fd;
    fd = fopen(prefix,"w");
    
    fprintf(fd,"%i",value);
    fclose(fd);
    
}

