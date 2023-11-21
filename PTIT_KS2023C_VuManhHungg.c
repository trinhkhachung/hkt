#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int numbers[100];
	int currentIndex;
	int size;
	int positiveNumsCount = 0;
	int sum = 0;
	int sumOfPositiveNumbers = 0;
	int k;
	int numberOfPrimeNumbers = 0;
	do{
		printf("*********************MENU********************\n");
		printf("1.Nhap gia tri n phan tu cua mang.\n");
		printf("2.In gia tri cac phan tu trong mang.\n");
		printf("3.Tinh trung binh cac phan tu duong trong mang.\n");
		printf("4.In ra vi tri cac phan tu co gia tri bang k trong mang.\n");
		printf("5.Su dung thuat toan sap xep noi bot sap xep mang giam dan.\n");
		printf("6.Tinh so luong cac phan tu la so nguyen to trong mang.\n");
		printf("7.Sap xep cac phan tu chan chia het cho 3 o dau mang theo thu tu tang dan, cac phan tu le chia het cho 3 o cuoi mang theo thu tu giam dan, cac phan tu con lai o giua mang theo thu tu tang dan.\n");
		printf("8.Nhap gia tri m tu ban phim, chen gia tri m vao mang dung vi tri\n");
		printf("9.Thoat\n");
		printf("Lua chon cua ban la: \n");
		int choice;
		scanf("%d", &choice);
		switch(choice){
			case 1:
				for(int i = 0; i < 100; i++){
					printf("numbers[%d]= ", currentIndex);
					scanf("%d", &numbers[currentIndex]);
					currentIndex++;
				}
				break;
			case 2:
				printf("Gia tri cac phan tu trong mang la:\n");
				for(int i = 0; i < currentIndex; i++){
					printf("%d\t", numbers[i]);
				}
				break;
			case 3:
				printf("Cac phan tu duong trong mang la:\n");
				for(int i = 0; i < currentIndex; i++){
					if(numbers[i] > 0){
						printf("%d\t", numbers[i]);
						sum = sum + numbers[i];
						positiveNumsCount++;	
					}
				}
				sumOfPositiveNumbers = sum / positiveNumsCount;
				printf("Trung binh cac phan tu duong trong mang la: %d\n", sumOfPositiveNumbers);
				break;
			case 4:
				printf("Gia tri phan tu k bang: ");
				scanf("%d", &k);
				printf("Vi tri cac phan tu co gia tri bang k la: ");
				for(int i = 0; i < currentIndex; i++){
					if(numbers[i] == k){
						printf("%d \t", i);
					}
				}
				break;
			case 5:
				break;
			case 6:
				for(int i = 0; i < currentIndex; i++){
					int isPrime = 0;
					if(numbers[i] >= 2){
						for(int j = 2; j <= sqrt(numbers[i]); j++){
							if(numbers[i] % j == 0){
								isPrime = 1;
								break;
							}
						}
					}else{
						isPrime = 1;
					}
					if(isPrime == 0){
						numberOfPrimeNumbers++;
					}
				}
				printf("So luong cac phan tu la so nguyen to trong mang la: %d", numberOfPrimeNumbers);
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				exit(0);
			default:
				printf("Vui long nhap tu 1-9");								
		}
	}while(1 == 1);
}
