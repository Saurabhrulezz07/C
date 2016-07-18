#include <stdio.h>
#include <stdlib.h>
#define MAX_NODE 100
#define MAX_CLUSTER 16
int main()
{
    double nodeDistance[MAX_NODE], initialCentroid[MAX_CLUSTER];
    int clusterOfNode[MAX_NODE],i,numOfClusters,numOfNodes,dimension=1;
    printf("Enter total number of nodes\n");
    scanf("%d",&numOfNodes);
    printf("Enter distance of each node from the base station\n");
    for(i=0;i<numOfNodes;i++)
        {   printf("Node %d-> ",i);
            scanf("%lf",&nodeDistance[i]);
        }
    printf("Enter number of clusters\n");
    scanf("%d",&numOfClusters);
    printf("Enter initial centroids\n");
    for(i=0;i<numOfClusters;i++)
    {
        printf("Cluster %d-> ",i);
        scanf("%lf",&initialCentroid[i]);
    }
    kmeans(dimension,nodeDistance,numOfNodes,numOfClusters,initialCentroid,clusterOfNode);
    printf("\nClustering Result\n");
    for(i=0;i<numOfNodes;i++)
    {
        printf("Node %d -> Cluster %d\n",i, clusterOfNode[i]);
    }
    double residualEnergy[MAX_NODE];
    int clusterHead[MAX_CLUSTER];
    printf("Enter residual energy of nodes\n");
    for(i=0;i<numOfNodes;i++)
    {
        printf("Node %d -> ",i);
        scanf("%lf",&residualEnergy[i]);
    }
    clusterHeadSelection(numOfNodes,numOfClusters,clusterOfNode,residualEnergy,clusterHead);
    printf("Cluster Head based on Max Residual Energy\n");
    for(i=0;i<numOfClusters;i++)
    {
        printf("Cluster %d -> Node %d\n",i,clusterHead[i]);
    }
    return 0;
}
