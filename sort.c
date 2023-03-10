//Interchange Sort
#include <stdio.h>
#include <conio.h>
void NhapMang(int a[],int n)
	{
    for(int i=0; i<n; i++)
		{
        printf("\nNhap a[%d]= ",i);
        scanf("%d",&a[i]);
    }
}
void XuatMang(int a[],int n)
	{
    for(int i=0; i<n; i++)
		{
        printf("%d \t",a[i]);
    }
}
void InterchangeSort(int a[], int n)
	{
    for(int i=0 ; i<n-1 ; i++)
		{
        for(int j=i+1; j<n ; j++)
			{
            if(a[i]>a[j])
				{
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nMang sau khi sap xep la: \n");    
    for(int i=0; i< n; i++)    
}
int main()
	{
    int a[100];
    int n;
    printf("Nhap so phan tu:");
    scanf("%d",&n);
    Nhap(a,n);
    printf("\nMang sau khi nhap la:\n");
    Xuat(a,n);
    InterchangeSort(a,n);
}


//bubble Sort
#include <stdio.h>
#include <conio.h>
void NhapMang(int a[],int n)
	{
    for(int i=0; i<n; i++)
		{
        printf("\nNhap a[%d]=",i);
        scanf("%d",&a[i]);
    }
}
void XuatMang(int a[],int n)
	{
    for(int i=0; i<n; i++)
		{
        printf("%d \t",a[i]);
    }
}
void BubbleSort(int a[], int n)
	{
    for(int i=0;i<n-1;i++)
		{
        for(int j=n-1;j>i;j--)
			{
            if(a[j]<a[j-1])
				{
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
    printf("\nMang sau khi sap xep la:\n");    
    Xuat(a,n);    
}
int main()
	{
    int a[100];
    int n;
    printf("Nhap so phan tu:");
    scanf("%d",&n);
    Nhap(a,n);
    printf("\nMang sau khi nhap la:\n");
    Xuat(a,n);
    BubbleSort(a,n);
}


//Insertion sort
#include <stdio.h>
#include <conio.h>
void Nhap(int a[],int n)
	{
    for(int i=0; i<n; i++)
		{
        printf("\nNhap a[%d]=",i);
        scanf("%d",&a[i]);
    }
}
void Xuat(int a[],int n)
	{
    for(int i=0; i<n; i++)
		{
        printf("%d \t",a[i]);
    }
}
void InsertionSort(int a[], int n)
{
    int pos, i;
    int x;
    for(i=1 ; i<n ; i++)
    {
        x = a[i]; 
        pos = i-1;
        while((pos >= 0) && (a[pos] > x))
        {
            a[pos+1] = a[pos];
            pos--;
        }
        a[pos+1] = x;
    }
    printf("\nMang sau khi sap xep la:\n");    
    Xuat(a,n);
}
int main()
	{
    int a[100];
    int n;
    printf("Nhap so phan tu:");
    scanf("%d",&n);
    Nhap(a,n);
    printf("\nMang sau khi nhap la:\n");
    Xuat(a,n);
    InsertionSort(a,n);
}



//Selection sort
#include <stdio.h>
#include <conio.h>
void Nhap(int a[],int n)
	{
    for(int i=0; i<n; i++)
		{
        printf("\nNhap a[%d]=",i);
        scanf("%d",&a[i]);
    }
}
void Xuat(int a[],int n)
	{
    for(int i=0; i<n; i++)
		{
        printf("%d \t",a[i]);
    }
}
void SelectionSort(int a[], int n)
	{
    for(int i=0; i<n-1; i++)
    {
        int min = i;
        for (int j = i+1; j<n; j++)
			{
            if (a[j]<a[min])
			{ 
                min = j;
            }
			}
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    printf("\nMang sau khi sap xep la:\n");    
    Xuat(a,n);    
}
int main(){
    int a[100];
    int n;
    printf("Nhap so phan tu:");
    scanf("%d",&n);
    Nhap(a,n);
    printf("\nMang sau khi nhap la:\n");
    Xuat(a,n);
    SelectionSort(a,n);
}

//QuickSort
#include <stdio.h>
#include <conio.h>

int main() 
	{
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) 
		{
        scanf("%d", &arr[i]);
    }

    quicksort(arr, 0, n - 1);

    printf("Mang da sap xep la:\n");
    for (int i = 0; i < n; i++) 
		{
        printf("%d ", arr[i]);
    }
    free(arr);

    return 0;
}

void quicksort(int* arr, int left, int right) 
	{
    int i = left, j = right;
    int pivot = arr[(left + right) / 2];

    while (i <= j) {
        while (arr[i] < pivot) 
			{
            i++;
        }
        while (arr[j] > pivot) 
			{
            j--;
        }
        if (i <= j) 
			{
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    if (left < j) {
        quicksort(arr, left, j);
    }
    if (i < right) {
        quicksort(arr, i, right);
    }
}