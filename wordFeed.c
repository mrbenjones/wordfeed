#include <stdio.h>
#include <locale.h>
#include <uchar.h>
enum { buf_max = 512, };

typedef struct fileState {
  FILE * reader;
  int complete;
} fileState;


fileState readOne(fileState inp, char * b){
  fileState endState = {inp.reader, 0};
  if (fgets(b,2000,inp.reader)==NULL){
    endState.complete = 1;
  }
  return endState;
}
int main(){
  char buffer[buf_max] = {0};
  char *b = buffer;
  fileState inits= {stdin, 0};
  while (readOne(inits, b).complete == 0){
    printf("%s", b);    
  }
}
