#include <iostream> //CSAK CPP MIATT
#include <stdio.h>
#include <cstdlib>
using namespace std; //CSAK CPP MIATT

int tobbAdattalTerekVissza(int *elsoAdat, int *masodikAdat){

}

//
//ELSO
//

int hanyDarabEVagyNVanBenne(char* aminVizsgalom){
    int ret=0;
    for(;*aminVizsgalom!='\0';*aminVizsgalom++){
        if(*aminVizsgalom=='e'||*aminVizsgalom=='n'){
            ret++;
        }
    }
    return ret;
}

//
//MASODIK
//

int tombLegnagyobbEleme(int* amitVizsgalok){
    int legnagyobb=*amitVizsgalok;
    //feltetelezzuk, hogy az elso a legnagyobb, ha nem, akkor majd csereljuk a ciklusban
    for (; *amitVizsgalok!=NULL; *amitVizsgalok++) {
        if(*amitVizsgalok>legnagyobb)legnagyobb=(*amitVizsgalok);
    }
    return legnagyobb;

}

//
//HARMADIK
//

int torlomNekedAMaganhangzokat(char* amibenTorlom){
    int ret=0;
    char* amibenAMegoldasLesz;
    for (;*amibenTorlom!='\0'; *amibenTorlom++) {
        if(*amibenTorlom =='a'||*amibenTorlom =='e'||*amibenTorlom =='i'||*amibenTorlom =='o'||*amibenTorlom =='u'
           ||*amibenTorlom =='A'||*amibenTorlom =='E'||*amibenTorlom =='I'||*amibenTorlom =='O'||*amibenTorlom =='U'){

            ret++;
        }
    }
    //amibenAMegoldasLesz=(char*)malloc(ret);

    return ret;
}

//
//NEGYEDIK
//

int egyezoElemekA(int elsoTomb[], int masodikTomb[], int elsoMerete, int masodikMerete){
    int ret=0;
    int i=0;
    int j;
    for (; i < elsoMerete; ++i) {
        j=0;
        for (; j < masodikMerete; ++j) {
            if(elsoTomb[i]==masodikTomb[j]){
                ret++;
            }
        }
    }
    return ret;
}

//
//FOPROGRAM
//


int main() {

    //
    //Elso valtozoja
    //
    char* karakterTomb="Az egyik ZH egy heten at mindenkinek sikerult";

    //
    //Masodik valtozoja
    //
    int szamTomb[]={-685,590,72,101,30,-200,-605,415,710,42,68,-1,13,366,12,-1222,670,591,-73};

    //
    //Harmadik valtozoja
    //
    char* harmadikFeladatKarakterTomb="A ZH az elmult heten rossz lett";

    //
    //Negyedik valtozoi
    //
    int negyedikFeladatSzamTombElso[]={67,-685,590,670,72,101,30,-200,605,
                                       -122,415,710,42,68,-1,13,366,12,672,591,33,151,37};
    int negyedikFeladatSzamTombMasodik[]={-590,-122,672,12,42,392,33,-255,
                                          607,455,710,33,1,12,-135,67,72,670,13,366,867,-200};
    int elsoMerete=23;
    int masodikMerete=22;

    //Elso feladat meghivas
    int a=hanyDarabEVagyNVanBenne(karakterTomb);
    printf("%d",a);


    std::cout <<std::endl;//CPP resz

    //Masodik feladat meghivas
    int b=tombLegnagyobbEleme(szamTomb);
    printf("%d",b);

    std::cout <<std::endl;//CPP resz

    //Harmadik feladat meghivasa
    int c=torlomNekedAMaganhangzokat(harmadikFeladatKarakterTomb);
    printf("%d",c);


    std::cout <<std::endl;//CPP resz

    //Negyedik feladat
    int d=egyezoElemekA(negyedikFeladatSzamTombElso,negyedikFeladatSzamTombMasodik,elsoMerete,masodikMerete);
    printf("%d",d);

    //
    //CPP resz
    std::cout <<std::endl <<"Hello, World!" << std::endl;
    return 0;
}