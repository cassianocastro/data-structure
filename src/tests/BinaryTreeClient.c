#include "../includes/BinaryTree.h"

unsigned int createMenu(void)
{
    unsigned int option = 0u;

    printf(
        "\nOperações sobre Árvores"
        "\nSelecione a opção desejada:"
        "\n1. Incluir Folha"
        "\n2. Caminhar em Pré-Ordem"
        "\n3. Caminhar em Ordem"
        "\n4. Caminhar em Pós-Ordem"
        "\n5. Pesquisar nodos na Árvore"
        "\n0. Sair"
        "\nOpção\? "
    );
    scanf("%u", &option);

    return option;
}

void clearConsole(void)
{
#ifdef WIN32
    system("cls");
#elif LINUX
    system("clear");
#endif
}

/**
 *
 */
int main(void)
{
    setlocale(LC_ALL, "");

    unsigned int option = 0u;
    char info  = '\0';
    nodo* arv  = NULL;

    while ( true )
	{
        option = createMenu();

        clearConsole();

        switch ( option )
		{
            case 1:
                info = '\0';
                while ( info != '@' )
				{
                    printf("Informe a letra a inserir na Árvore (ou @ para sair): ");
                    scanf( " %c", &info );

                    if ( info != '@' )
                    {
                        insere_folha(&arv, info);
                    }
                }
                break;
            case 2:
                pre_ordem(arv);
                break;
            case 3:
                em_ordem(arv);
                break;
            case 4:
                pos_ordem(arv);
                break;
            case 5:
                printf("Informe a letra a ser pesquisada na Árvore: ");
                scanf(" %c", &info);

                pesquisar_nodo(arv, info);
                break;
            case 0:
                exit(EXIT_SUCCESS);
                break;
            default:
                puts("Opção inválida!");
        }
    }

    return EXIT_SUCCESS;
}