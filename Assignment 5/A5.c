#include <stdio.h>

typedef struct { int group, units; } Stock;

int update(FILE *f,int index,int units) {
    Stock s;
    if(fseek(f,index*(long)sizeof s,SEEK_SET) ||
       fread(&s,sizeof s,1,f)!=1) return 0;
    s.units=units;
    if(fseek(f,-(long)sizeof s,SEEK_CUR)) return 0;
    return fwrite(&s,sizeof s,1,f)==1;
}

int main(void) {
    FILE *f=tmpfile();
    Stock a[]={{1,40},{2,25},{3,12}};
    fwrite(a,sizeof *a,3,f);
    printf("%s\n",update(f,2,20) ? "Updated" : "Failed");
    fclose(f);
}
