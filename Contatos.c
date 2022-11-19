#include <stdio.h>
#include <string.h>

#define Pessoa 10

typedef struct contact
{
  char nome[55];
  char endereco[100];
  char email[55];
  char numero[25];
} Contact;

void sort(Contact *contacts)
{
  for (int i = 0; i < Pessoa; i++)
  {
    for (int j = i + 1; j < Pessoa; j++)
    {
      if (strcmp(contacts[i].nome, contacts[j].nome) > 0)
      {
        Contact aux = contacts[i];
        contacts[i] = contacts[j];
        contacts[j] = aux;
      }
    }
  }
}

int main(int argc, char const *argv[])
{
  Contact contacts[Pessoa];

  for (int i = 0; i < Pessoa; i++)
    scanf("%s %s %s %s", contacts[i].nome, contacts[i].endereco, contacts[i].email, contacts[i].numero);

  sort(contacts);

  for (int i = 0; i < Pessoa; i++)
    printf("%s - %s - %s - %s\n", contacts[i].nome, contacts[i].endereco, contacts[i].email, contacts[i].numero);

  return 0;
}