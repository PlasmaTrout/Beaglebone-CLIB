#ifndef mainloop_h
#define mainloop_h

void setup();
void loop();

int main(){
 
    setup();
 
    for(;;){
        loop(); 
    }
 
    return 0;
 
}

#endif