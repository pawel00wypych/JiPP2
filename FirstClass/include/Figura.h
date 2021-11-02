
#ifndef FIRSTLIBCALL_FIGURA_H
#define FIRSTLIBCALL_FIGURA_H


class Figura {
public:
    int l_wierzcholkow;
    int *tab = new int[l_wierzcholkow];
    Figura(int n,int *tab);
};


#endif //FIRSTLIBCALL_FIGURA_H
