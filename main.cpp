#include <iostream>
#include "stdio.h"
#include "stdlib.h"

void hz();
void hz1();

int myword1=0;
int myword2=0;

int main() {

    hz();
    
    hz1();
   
    return 0;
}

void hz() {

    FILE *ftpr;
    ftpr = fopen("Words.txt", "r");
    char c = fgetc(ftpr);

    while (!feof(ftpr)) {
        if (c == 119) {
            while (!feof(ftpr)) {
                c = fgetc(ftpr);
                if (c == 105) {
                    while (!feof(ftpr)) {
                        c = fgetc(ftpr);
                        if (c == 110) {
                            while (!feof(ftpr)) {
                                c = fgetc(ftpr);
                                if (c == 104) {
                                    while (!feof(ftpr)) {
                                        c = fgetc(ftpr);
                                        if (c == 116) {
                                            while (!feof(ftpr)) {
                                                c = fgetc(ftpr);
                                                if (c == 117) {
                                                    while (!feof(ftpr)) {
                                                        c = fgetc(ftpr);
                                                        if (c == 116) {
                                                            myword1++;
                                                           printf("We Found winhtut : %d times\n", myword1);
                                                        }
                                                        break;
                                                    }
                                                }
                                                break;
                                            }
                                        }
                                        break;
                                    }
                                }
                                break;
                            }
                        }
                        break;
                    }
                }
                break;
            }
        }
        c = fgetc(ftpr);

    }

    fclose(ftpr);
}

void hz1() {

    FILE *ftpr;
    ftpr = fopen("Words.txt", "r");
    char c = fgetc(ftpr);

    while (!feof(ftpr)) {
        if (c == 78) {
            while (!feof(ftpr)) {
                c = fgetc(ftpr);
                if (c == 97) {
                    while (!feof(ftpr)) {
                        c = fgetc(ftpr);
                        if (c == 116) {
                            while (!feof(ftpr)) {
                                c = fgetc(ftpr);
                                if (c == 105) {
                                    while (!feof(ftpr)) {
                                        c = fgetc(ftpr);
                                        if (c == 111) {
                                            while (!feof(ftpr)) {
                                                c = fgetc(ftpr);
                                                if (c == 110) {
                                                    while (!feof(ftpr)) {
                                                        c = fgetc(ftpr);
                                                        if (c == 97) {
                                                            while (!feof(ftpr)) {
                                                                c = fgetc(ftpr);
                                                                if (c == 108) {
                                                                    while (!feof(ftpr)) {
                                                                        c = fgetc(ftpr);


if (c == 67) {
                                                                            while (!feof(ftpr)) {
                                                                                c = fgetc(ftpr);
                                                                                if (c == 121) {
                                                                                    while (!feof(ftpr)) {
                                                                                        c = fgetc(ftpr);
                                                                                        if (c == 98) {
                                                                                            while (!feof(ftpr)) {
                                                                                                c = fgetc(ftpr);
                                                                                                if (c == 101) {
                                                                                                    while (!feof(ftpr)) {
                                                                                                        c = fgetc(ftpr);
                                                                                                        if (c == 114) {
                                                                                                            while (!feof(ftpr)) {
                                                                                                                c = fgetc(ftpr);
                                                                                                                if (c == 67) {
                                                                                                                    while (!feof(ftpr)) {
                                                                                                                        c = fgetc(ftpr);
                                                                                                                        if (c == 105) {
                                                                                                                            while (!feof(ftpr)) {
                                                                                                                                c = fgetc(ftpr);
                                                                                                                                if (c == 116) {
                                                                                                                                    while (!feof(ftpr)) {
                                                                                                                                        c = fgetc(ftpr);
                                                                                                                                        if (c ==121) {
                                                                                                                                            myword2++;
                                                                                                                                            printf("We Found NationalCyberCity : %d times\n", myword2);
                                                                                                                                        }
                                                                                                                                        break;
                                                                                                                                    }
                                                                                                                                }


break;
                                                                                                                            }
                                                                                                                        }
                                                                                                                        break;
                                                                                                                    }
                                                                                                                }
                                                                                                                break;
                                                                                                            }
                                                                                                        }
                                                                                                        break;
                                                                                                    }
                                                                                                }
                                                                                                break;
                                                                                            }
                                                                                        }
                                                                                        break;
                                                                                    }
                                                                                }
                                                                                break;
                                                                            }
                                                                        }
                                                                        break;
                                                                    }
                                                                }
                                                                break;
                                                            }
                                                        }
                                                        break;
                                                    }
                                                }
                                                break;
                                            }
                                        }
                                        break;
                                    }
                                }
                                break;
                            }
                        }
                        break;
                    }
                }
                break;
            }
        }
        c = fgetc(ftpr);

    }

    fclose(ftpr);
}
