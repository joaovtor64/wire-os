char* i;
int l;
typedef char* string;
int strlen(char* str){
    i=str;
    l=0;
    for(i= str;i!=0x0;i++){l++;}
    return l;
}