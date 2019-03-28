# PIC-10C-Final-Project

#This project create a plateform for basic graph theory calculation. Specifically, it solves the problem of: 
#in a given graph (given nodes and edges), find the number of possible pathes from one node to another in a specified number of steps.


In my project, the matrix class is to some extent wrapped inside the graph class. Hence, the user do not need
to operate with matrix class directly. More specifically, if you have a graph in by your side, you can just count
the number of edges connected to each node, and add these data into the graph class by the member function "pushback_node"
then the matrix is automatically produced.Later when you directly want the number of pathes fromone node to another in a 
specified number of steps, you can also use one of the member function of graph to realize it.