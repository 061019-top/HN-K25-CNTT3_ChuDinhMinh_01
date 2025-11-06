#include<stdio.h>
int main(){
	int choice=0 , n, a, min, max;
	int arr[100];
	do(
	printf("-------------------MENU-------------------");
	printf("1. Nhap so luong phan tu trong mang");
	printf("2. In cac gia tri cac phan tu trong mang");
	printf("3. In cac so la so nguyen to trong mang");
	printf("4. Tim gia tri nho nhat trong mang"); 
	printf("5. Them moi mot phan tu vao vi tri cu the"); 
	printf("6. Xoa phan tu tai vi tri cu the"); 
	printf("7. Xep mang theo thu tu tang dan"); 
	printf("8. Kiem tra su ton tai cua phan tu co trong mang"); 
	printf("9. In mang to bo so le dung truoc so chan"); 
	printf("10. Sap xep mang theo thu tu nguoc lai"); 	
	printf("Moi ban nhap lua chon");
	scantf(%d&choice);
	);
	switch(choice){
		case:1{
			printf("Moi ban nhap so luong phan tu trong mang");
			scanf(%d,&n)
			for(int i=0;i<n;i++){
				printf("Moi ban nhap phan tu tai vi tri"i++);
				scantf(%d&arr[i]);
			}
			break;
		}
		case:2{
			printf("Mang ban vua nhap la"arr[]);
			break;
		}
		case:3{
			for(int i=0;i<sizeof.arr[];i++){
				if(arr[i]/arr[i]&&arr[i]/100){
					printf("Cac so nguyen to trong mang la"&arr[i])
				}else{
				    printf("Mang khong ton tai so nguyen to");
				}
			}
			break;
		}
		case:4{
			for(int i=0;i<sizeof.arr[];i++){
				if(arr[i]<arr[i+1]){
				   scantf(%d&min)	
				}
				printf("Gia tri nho nhat trong mang la"&min);	
			break;
		}
		case:5{
			
			}
			break;
		}
		case:6{
			
			break;
		}
		case:7{
			for(int i=0;i<sizeof.arr[];i++){
					for(int j=1;i<sizeof.arr[];i++){
						if(arr[i]>arr[i+1]){
				          scantf(%d&max)	
				}
				printf("Mang sau khi duoc sap xep tanwg dan");
					}			
			break;
		}
		case:8{
			
			break;
		}
		case:9{
			
			break;
		}
		case:10{
			
			break;
		}
	}
 
	while{choice!=0}
	
	return 0;
}
