#define MAX_NODE 100
void clusterHeadSelection(int numOfNode,int numOfClusters, int clusterOfNode[MAX_NODE],double residualEnergyOfNode[MAX_NODE], int clusterHead[MAX_NODE])
{
    int i,j;
    double maxResidualEnergy;
    for(j=0;j<numOfClusters;j++)
    {   maxResidualEnergy=-1.0;
        for(i=0;i<numOfNode;i++)
        {
            if(clusterOfNode[i]==j)//the ith node belong to jth cluster
            {
                if(residualEnergyOfNode[i]>maxResidualEnergy)
                    {
                        maxResidualEnergy=residualEnergyOfNode[i];
                        clusterHead[j]=i;
                    }
            }
        }
    }
}
