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
        printf("Select options...\n");
        printf("n: new file\no: open file\nh: help\nq: quit\n> ");
        char option[1];
        scanf("%s", option);
        if(option[0] == 'n'){
            // 新規作成の処理
        }else if(option[0] == 'o'){
            char path[256];
            printf("Type to file path > ");
            scanf("%s", path);
            FILE * fp = NULL; // こーぞーたい
        
            fp = fopen(&path[0], "r");
            if(fp == NULL) {
                printf("%s file not open!\n", argv[1]);
                return -1;
            }
            int chr;
            while((chr = fgetc(fp)) != EOF) {
                putchar(chr);
            }
            fclose(fp);
        };
        // ファイルが何も指定されなかった時の処理
    };

    return 0;
}