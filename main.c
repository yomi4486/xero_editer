#include<stdio.h>
// 悶々ふぁんもおらん（カゼインNa）
int main(int argc, char *argv[]){
    // for(int i=0;i<10;i++){
    //     printf("ウィスパーやめろ\n");
    // }
    if(argc >= 2){
        printf("===%s===\n",argv[1]);
        FILE * fp = NULL; // こーぞーたい
        
        fp = fopen(argv[1], "r");
        if(fp == NULL) {
		    printf("%s file not open!\n", argv[1]);
		    return -1;
	    }
        int chr;
        while((chr = fgetc(fp)) != EOF) {
		    putchar(chr);
	    }
        fclose(fp);
    }else{
        printf("ファイルの指定はありませんでした");
        // ファイルが何も指定されなかった時の処理
    };

    return 0;
}