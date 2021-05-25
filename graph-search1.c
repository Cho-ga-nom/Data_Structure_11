#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTEX 10

typedef struct node
{
    int vertex;
    struct node *next;
}Node;

typedef struct graph
{
    Node *list[MAX_VERTEX];
    int vertex_num;   
}Graph;

void InitializeGraph();
void InsertVertex(Graph *g, int vertex);
void InsertEdge(Graph *g, int u, int v);
void PrintGraph(Graph *g);
void FreeGraph(Graph *g);

int main()
{
    char command;

    do
    {
        printf("[----- [조수현]  [2018038084] -----]\n\n");

        printf("----------------------------------------------------------------\n");
        printf("                        Graph Searches               \n");
        printf("----------------------------------------------------------------\n");
        printf(" Initialize Graph        = z                                    \n");
        printf(" Insert Vertex           = v       Insert Edge               = e\n");
        printf(" Depth First Search      = d       Breath First Search       = b\n");
        printf(" Print Graph             = p       Quit                      = q\n");
        printf("----------------------------------------------------------------\n");

        printf("command : ");
        scanf(" %c", command);

        switch(command)
        {
            case 'z': case 'Z':
            break;
            case 'v': case 'V':
            break;
            case 'd': case 'D':
            break;
            case 'p': case 'P':
            break;
            case 'e': case 'E':
            break;
            case 'b': case 'B':
            break;
        }

    } while (command != 'q' && command != 'Q');
    
    return 1;
}