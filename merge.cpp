#include<stdio.h>
void merge(int a[], int i1, int j1, int i2, int j2)
{
  int temp[50];    // temporary array used
  int i, j, k;
  i = i1;          // beginning of the first list
  j = i2;          // beginning of the second list
  k = 0;
  while (i <= j1 && j <= j2)    // while elements in both lists
  {
    if(a[i]<a[j]) 
      temp[k++]="a[i++];" 
    else="" }="" while(i="" <="j1)" copy="" remaining="" elements="" of="" the="" first="" list="" while(j<="j2)" second="" transfer="" from="" temp[]="" back="" to="" a[]="" for(i="i1," j="0;" i="" i++,="" j++)="" a[i]="temp[j];" void="" mergesort(int="" a[],="" int="" i,="" j)="" {="" mid;="" if="" (i="" mid="(i+j)/2;" mergesort(a,="" mid);="" left="" recursion="" +="" 1,="" j);="" right="" merge(a,="" mid,="" 1="" ,j);="" merging="" two="" sorted="" sub-arrays="" main()="" a[30],="" n,="" i;="" printf("enter="" no="" elements:");="" scanf("%d",="" &n);="" array="" n;="" i++)="" &a[i]);="" 0,="" n-1);="" printf("\nsorted="" is="" :");="" printf("%d="" ",="" a[i]);="" return="" 0;="" }<="" pre=""> <p><strong>Properties</strong></p> <ul><li><strong>Average Time Complexity:</strong> O(n log n)</li> <li><strong>Stability:</strong> Stable</li></ul> <p><strong>Best use case</strong></p> <p>This sort can be used on any size of data unlike other sorts that work well on smaller sets. The data is read in a sequential manner during sorting, hence magnetic tapes could be used to feed the data.</p> <h2 id="visualizations">Visualizations</h2> <ul><li><a href="https://visualgo.net/bn/sorting">Sorting | VisuAlgo</a></li> <li><a href="https://www.cs.usfca.edu/~galles/visualization/ComparisonSort.html">Comparison Sorting Algorithms | University of San Francisco</a> </li> <li><a href="http://sorting.at/">SORTING | Carlo Zapponi</a></li></ul> <h2 id="code-examples">Code Examples</h2> <p>Link to Github snippets, in C onsite…</p> <h2 id="videos">Videos</h2> <p><strong>Shorter</strong></p> <ul><li><a href="https://www.youtube.com/watch?v=RT-hUXUWQ2I">Bubble Sort | CS50</a></li> <li><a href="https://www.youtube.com/watch?v=O0VbBkUvriI">Insertion Sort | CS50</a></li> <li><a href="https://www.youtube.com/watch?v=3hH8kTHFw2A">Selection Sort | CS50</a></li> <li><a href="https://www.youtube.com/watch?v=kUon6854joI">Quick Sort | CS50</a></li> <li><a href="https://www.youtube.com/watch?v=Ns7tGNbtvV4">Merge Sort | CS50</a></li></ul> <p><strong>Longer</strong></p> <ul><li><a href="https://www.youtube.com/watch?v=jUyQqLvg8Qw">CS50 2016 – Week 3 | Algorithms</a> The complete lecture of CS50 week 3 algorithms. Covers all the important searching and sorting algorithm.</li></ul></a[j])></stdio.h>