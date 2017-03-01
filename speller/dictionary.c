/**
 * Implements a dictionary's functionality.
 */

#include <stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#include "dictionary.h"
 
struct dict 
{
    char word[LENGTH];
    struct dict *next;
} *dictTable[HASH_TABLE_SIZE]={NULL},*temp,node,*np;
/* a hashing function for string */
unsigned long hash( char *str) //adopted from http://www.cse.yorku.ca/~oz/hash.html */
{
    unsigned long hash = 5381;
    int c;
    while ((c = (*str++)))
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    return hash%HASH_TABLE_SIZE;
}
/**
 * Returns true if word is in dictionary else false.
 */
bool check(const char *word)
{
    int index;
    char w[LENGTH];
    for(index=0;index<strlen(word);index++)
    {//ensuring that word is in lower case
        w[index]=tolower(word[index]);
    }
    w[index]='\0';
    index=hash(w);// since hash is expecting a char pointer not a const char pointer
    if(dictTable[index]==NULL)
    {
        return false;
    }
    else 
    {
        temp=dictTable[index];
        do
        {   
            if(!strcmp(temp->word,w))
            {
                return true;
            }
            temp=temp->next;
        }while(temp!=NULL);
    }
    return false;
}

/**
 * Loads dictionary into memory. Returns true if successful else false.
 */
bool load(const char *dictionary)
{
    FILE *fp;
    int index;
    char w[LENGTH];
    fp=fopen(dictionary,"r");
    if(fp==NULL)
    {
        printf("Error in opening dictionary\n");
        return false;
        exit(1);
    }
    while(fscanf(fp,"%s",w)!=EOF)
    {
        index=hash(w);
        np=malloc(sizeof(node));
        if(np==NULL)
        {
            printf("No more memory\n");
            unload();
            exit(1);
        }
        strcpy(np->word,w);
        np->next=NULL;
        if(dictTable[index]==NULL)//hash table entry is empty
        {
            dictTable[index]=np;
        }
        else// We need to perform chaining
        {
            temp=dictTable[index];
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=np;
        }
        
    }
    fclose(fp);
    // TODO
    return true;
}

/**
 * Returns number of words in dictionary if loaded else 0 if not yet loaded.
 */
unsigned int size(void)
{
    unsigned int s=0;
    int index;
    for(index=0;index<HASH_TABLE_SIZE;index++)
    {
        if(dictTable[index]!=NULL)
        {
            temp=dictTable[index];
            do
            {
                s++;
                temp=temp->next;
            }while(temp!=NULL);
        }
    }
    // TODO
    return s;
}

/**
 * Unloads dictionary from memory. Returns true if successful else false.
 */
bool unload(void)
{
    int index;
    for(index=0;index<HASH_TABLE_SIZE;index++)
    {
        if(dictTable[index]!=NULL)
        {
            temp=dictTable[index];
            do
            {
                np=temp;
                temp=temp->next;
                free(np);
            }while(temp!=NULL);
        }
    }
    return true;
}
