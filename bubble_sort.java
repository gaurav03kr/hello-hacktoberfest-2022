/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com;

/**
 *
 * @author zenalarifin
 */
class BubbleSort{
	static int[] arr = new int[10];
	public static void main(String[] args){
		for(int i=0; i<10; i++)
		arr[i] = (int)(Math.random()*10);
		
		System.out.println("Diplay all elements: ");
		for(int i : arr)
		System.out.print(i+" ");
		System.out.println("\n");
		
		//Bubble sort
		for(int i=arr.length-1; i>1; i--){
			for(int j=0; j<i; j++){
				if(arr[j]>arr[j+1])
					exchangeValues(j, j+1);
			}
		}
	System.out.println("Sorted elements: ");
	for(int i : arr)
	System.out.print(i+" ");
	}
	static void exchangeValues(int index1, int index2){
		int t = arr[index1];
		arr[index1] = arr[index2];
		arr[index2] = t;
	}
}
