

// =================================
//   BIBLIOTECA !!!
// =================================

typedef struct NO *ArvRB;

ArvRB *cria_ArvoreRB();

void libera_ArvRB(ArvRB *raiz);

int insere_ArvRB(ArvRB *raiz, int valor);

int remove_ArvRB(ArvRB *raiz, int valor);

int consulta_ArvRB(ArvRB *raiz, int valor);

void emOrdem_ArvRB(ArvRB *raiz, int H);
