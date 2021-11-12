#pragma once

#include "main.h"

#define DICTIONARY "document/dictionary"

void readAllFiles(Tree **tree);
void readFile(char *fileName, Tree **tree, int fileID);

void saveInfoIntoTree(Tree **tree, Get info);

int verifyCharAlpha(char caracter);
Get fillStructField(char *word, int position, int fileID);

void addFolder(char *file);
void addExtension(char *dir, char *extension);

void readDictionary(Tree **tree);

int ifWordExists(Tree *tree, Get info);