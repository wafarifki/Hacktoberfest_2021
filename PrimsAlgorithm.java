package daa.assignment;  
  
public class PrimsAlgorithm {
    
    private static final int countOfVertices = 7;   
    
    //Finding the vertex v that has minimum key-value and that is not added MST yet
    int findMinKeyVertex(int keys[], Boolean MST[]) {   
        //Initialize min value and its index  
        int minimum_index = -1;   
        int minimum_value = Integer.MAX_VALUE;  
          
        //Iterate over all vertices to find minimum key-value vertex  
        for (int vertex = 0; vertex < countOfVertices; vertex++) {
            if (MST[vertex] == false && keys[vertex] < minimum_value) {   
                minimum_value = keys[vertex];   
                minimum_index = vertex;   
            }
        }
    
        return minimum_index;   
    }   
    
    public void printMST(int mstArray[], int graphArray[][]) {   
        System.out.println("Edge \t\t Weight");
        
        for (int j = 1; j < countOfVertices; j++) { 
            System.out.println(mstArray[j] + " <-> " + j + "\t \t" + graphArray[j][mstArray[j]]);
        }
    }   
    
    
    public void designMST(int graphArray[][]) {    
        int parent[] = new int[countOfVertices];
        int key[] = new int[countOfVertices];
        Boolean MST[] = new Boolean[countOfVertices];
    
        for (int j = 0; j < countOfVertices; j++) {   
            key[j] = Integer.MAX_VALUE;   
            MST[j] = false;   
        }   
        
        key[0] = 0;
        parent[0] = -1;
    
        // The vertices in the MST will be equal to the countOfVertices   
        for (int i = 0; i < countOfVertices - 1; i++) {
            //Select the vertex having minimum key and that is not added in the MST yet from the set of vertices   
            int edge = findMinKeyVertex(key, MST);   
    
            //Add the selected minimum key vertex to the setOfMST   
            MST[edge] = true;   
    
            //Change the key value and the parent index of all the adjacent vertices of the selected vertex. The vertices that are not yet included in Minimum Spanning Tree are only considered.   
            for (int vertex = 0; vertex < countOfVertices; vertex++) {
                //The value of the graphArray[edge][vertex] is non zero only for adjacent vertices of m setOfMST[vertex] is false for vertices not yet included in Minimum Spanning Tree   
                //When the value of the graphArray[edge][vertex] is smaller than key[vertex], we update the key  
                if (graphArray[edge][vertex] != 0 && MST[vertex] == false && graphArray[edge][vertex] < key[vertex]) {   
                    parent[vertex] = edge;   
                    key[vertex] = graphArray[edge][vertex];   
                }
            }
        }   
  
        printMST(parent, graphArray);   
    }   

    public static void main(String[] args) {   
          
        PrimsAlgorithm mst = new PrimsAlgorithm();
        
        int graphArray[][] = new int[][]{{ 0, 2, 0, 1, 4, 0, 0 },   
                                         { 2, 0, 5, 0, 0, 0, 0 },   
                                         { 0, 5, 0, 2, 0, 4, 0 },   
                                         { 1, 0, 2, 0, 0, 0, 0 },   
                                         { 4, 0, 0, 0, 0, 3, 6 },  
                                         { 0, 0, 4, 0, 3, 0, 2 },  
                                         { 0, 0, 0, 0, 6, 2, 0 }};   
      
        mst.designMST(graphArray);   
    }
    
}