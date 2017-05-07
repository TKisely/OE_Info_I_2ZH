#include <iostream>

int tobbAdattalTerekVissza(int *elsoAdat, int *masodikAdat){

}

int hanyDarabEVagyNVanBenne(char* aminVizsgalom){
    int ret=0;
    for(;*aminVizsgalom!='\0';*aminVizsgalom++){
        if(*aminVizsgalom=='e'||*aminVizsgalom=='n'){
            ret++;
        }
    }
    return ret;
}

int main() {
    char* tesztKarakterTomb="Az egyik ZH egy heten at mindenkinek sikerult";
    int a=hanyDarabEVagyNVanBenne(tesztKarakterTomb);
    std::cout<<a;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}