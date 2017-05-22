//
// Created by Diego Mancini on 19/5/17.
//

#ifndef GRUPO2_C_CATALOGUE_H
#define GRUPO2_C_CATALOGUE_H

typedef struct catalogue Catalogue;

struct catalogue {
    char* id;
    char* name;
    int discount;
};

Catalogue* newCatalogue(char* id, char* name, int discount);
void annihilateCatalogue(Catalogue* catalogue1);

#endif //GRUPO2_C_CATALOGUE_H