/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com;

/*
 *
 * @author zenalarifin
 */

public class Program
{
    public static void main(String[] args) {
        CQueue c1 = new CQueue(4);
        c1.add(1);
        c1.add(2);
        c1.add(3);
        c1.add(4);
        c1.add(5);
        c1.display();
        c1.delete();
        c1.add(6);
        c1.display();
    }
}
class CQueue {
    int capacity, front, end;
    int arr[];
    CQueue(int size ) {
        front = -1;
        end = -1;
        capacity = size;
        arr = new int[size];
    }
    void add(int item) {
        if((front==capacity-1 && end==0) || end == front+1) {
            System.out.println("Overflow");
        }
        else {
            if(front== -1 && end == -1) {
                front = 0;
                end = 0;
            }
            else {
                front++;
                if(front == capacity) {
                    front = front - capacity;
                }
            }
            arr[front] = item;
        }
    }
    void delete() {
        if(front==-1 && end==-1) {
            System.out.println("underflow");
        }
        else {
            if(front==end) {
                front = -1;
                end = -1;
            }
            else {
                end++;
                if(end==capacity) {
                    end=end-capacity;
                }
            }
        }
    }
    void display() {
        if(front==-1 && end==-1) {
            System.out.println("Underflow");
        }
        else {
            for(int i=front;i<=end;i++) {
                System.out.println(arr[i]);
            }
        }
    }
}
