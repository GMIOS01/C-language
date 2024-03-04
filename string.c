#include<stdio.h>
#include<string.h>
#include<ctype.h>

int i;

int dem(char str[]){//dem chu hoa trong xau
    int d;
    for(i=0;str[i] != '\0';i++){
        if(isupper(str[i])){
            d++;
        }
    }
    return d;
}

void vtna(char str[]){//  kiem tra va in ra vi tri chu nguyen am trong xau 
    int dem=0,a[100];
    for (i = 0;str[i] != '\0';i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            a[dem]=i;
            dem++;
        }
    }
    for (i=0;i<dem;i++){
        printf("vi tri cua nguyen am thu %d la: %d \n",i+1, a[i]);
    }
}

void tachten(char str[]){//tach ten
    int temp;
    for (i=strlen(str);i>=0;i--){
        if(str[i]==' '){
            temp=i+1;
            break;
        }
    }
    printf("Sau khi tach ten:");
    for(i=temp;str[i]!= '\0';i++){
        printf("%c",str[i]);
    }
}

void lap(char s[]){ //lap lai xau s n lan 
    int n;
    printf("nhap so lan lap:");scanf("%d",&n);
    for(i=0;i<n;i++){
        puts(s);
    }
}

char *xoa_sc(char *s, char *sc) {
  while (s[i] != '\0') {
    if (s[i] == sc[0]) {
      int j = 1;
      while (sc[j] != '\0' && s[i + j] == sc[j]) {
        j++;
      }

      if (sc[j] == '\0') {
        for (int k = 0; k < j; k++) {
          s[i + k] = ' ';
        }
        i += j;
      }
    } else {
      i++;
    }
  }

  return s;
}

int main(){
    char str[100],s[100],sc[100];
    printf("Nhap xau:");
    fgets(str,100,stdin);
    printf("Nhap sau s:");
    fgets(s,100,stdin);
    printf("nhap xau con sc:");
    fgets(sc,100,stdin);
    printf("in ra xau ki tu vua nhap:\n%s",str);
    printf("Xau co %d ky tu hoa\n",dem(str));
    vtna(str);
    tachten(str);
    lap(s);
    char *chuoi_lon_moi = xoa_sc(s,sc);
    printf("Chuoi sau khi xoa chuoi con: %s\n", chuoi_lon_moi);
    return 0;
}
