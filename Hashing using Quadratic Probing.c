#include<stdio.h>
#include<stdlib.h>
 
// to store a data (consisting of key and value) in hash table array 
struct item 
{
	int key;
	int value;
};

// each hash table item has a flag (status) and data (consisting of key and value) 
struct hashtable_item 
{
 
	int flag;
	/*
	 * flag = 0 : data does not exist
	 * flag = 1 : data exists at given array location
	*/ 
	struct item *data;
 
};
// this function returns corresponding index of the given key 
int hashcode(int key,int max)
{
	return (key % max);
}
 
// this  function initializes the hash table array 
void init_array( struct hashtable_item *array,int max)
{
	int i;
	for (i = 0; i < max; i++) 
        {
		array[i].flag = 0;
		array[i].data = NULL;
	}
}
 
// this function inserts an element in the hash table 
void insert(int key, int value,struct hashtable_item *array,int max)
{
	int index = hashcode(key,max);
 
	int i = index;
	int h = 1;
 
	struct item *new_item = (struct item*) malloc(sizeof(struct item));
	new_item->key = key;
	new_item->value = value;
 
	// probing through the array until an empty space is found  
	while (array[i].flag == 1) 
        {
 
		if (array[i].data->key == key) 
                {
                	
			// case when already present key matches the given key  
			printf("\n This key is already present in hash table, hence updating it's value \n");
			array[i].data->value = value;
			return;
 
		}
		i = (i + (h * h)) % max;
		h++;
		if (i == index)
                {
			printf("\n Hash table is full, cannot add more elements \n");
			return;
		}
 
	}
 
	array[i].flag = 1;
	array[i].data = new_item;
	printf("\n Key (%d) has been inserted\n", key);
}
 
// to remove an element form the hash table array  
void remove_element(int key,struct hashtable_item *array,int max)
{
	int index = hashcode(key,max);
	int i = index;
	int h = 1;
 
	// probing through the hash table until we reach at location where there had not been an element even once  
	while (array[i].flag == 1)
        {
		if (array[i].flag == 1  &&  array[i].data->key == key) 
            {
 
			// case where data exists at the location and its key matches to the given key  
			array[i].flag = 0;
			array[i].data = NULL;
			printf("\n Key (%d) has been removed \n", key);
			return;
 
			}
		
		i = (i + (h * h)) % max;
		h++;
		if (i == index) 
            {
			break;
			}
		}
	printf("\n Key does not exist \n");
 
}
 
// to display the contents of hash table  
void display(struct hashtable_item *array,int max)
{
 
	int i;
	for(i = 0; i < max; i++)
        {
		if (array[i].flag != 1)
                {
			printf("\n Array[%d] has no elements \n", i);
		}
		else
                {
			printf("\n Array[%d] has elements \n  %d (key) and %d (value) \n", i, array[i].data->key, array[i].data->value);
		}
	}
 
}

void main()
{
	int choice, key, value, n, c, max=10;
	struct hashtable_item array[max];
	init_array(array,max);
 
	do {
		printf("Implementation of Hash Table in C with Quadratic Probing.\n\n");
		printf("MENU-: \n1.Inserting item in the Hash table\n2.Removing item from the Hash table\n3.Empty the Hash Table\n4.Display Hash table\n5.Exit\n\n Please enter your choice-:");
 
		scanf("%d", &choice);
 
		switch(choice)
        	{
 
			case 1:
 
		      printf("Inserting element in Hash table \n");
		      printf("Enter key and value-:\t");
		      scanf("%d %d", &key, &value);
		      insert(key, value, array, max);
 
		      break;
	  
			case 2:
 
		      printf("Deleting in Hash table \n Enter the key to delete-:");
		      scanf("%d", &key);
		      remove_element(key, array, max);
		      
 
		      break;
 
			case 3:
 
		      init_array(array, max);
		      break;
 
			case 4:
 
		      display(array, max);
 
		      break;
		      case 5:
		      break;
 
			default:
 
		       printf("Wrong Input\n");
 
		}
	}while(choice!=5);
}
