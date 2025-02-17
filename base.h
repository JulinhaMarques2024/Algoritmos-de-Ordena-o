#ifndef BASE_H
#define BASE_H

#include <iostream>
#include <fstream>
#include <ctime>

void InsertionSort(int vet[], int n) {
	int i, chave, j;

	for (i = 1; i < n; i++) {
		chave = vet[i];
		j = i - 1;

		while (j >= 0 && vet[j] > chave) {
			vet[j + 1] = vet[j];
			j = j - 1;
		}
		
		vet[j + 1] = chave;
	}
}

void SelectionSort(int vet[], int n) {
	int i, j, min, aux;

	for (i = 0; i < (n - 1); i++) {
		min = i;

		for (j = (i + 1); j < n; j++) {
			if (vet[j] < vet[min])
				min = j;
		}

		if (vet[i] != vet[min]) {
			aux = vet[i];
			vet[i] = vet[min];
			vet[min] = aux;
		}
	}
}

void BubbleSort(int vet[], int n) {
	int i, j, aux;

	for (i = 0; i < n; i++) {
		for (j = 0; j < (n - 1); j++) {
			if (vet[j] > vet[j + 1]) {
				aux = vet[j];
				vet[j] = vet[j + 1];
				vet[j + 1] = aux;
			}
		}
	}
}

void ShellSort(int vet[], int n) {
	int i, j, aux, h = 1;

	while (h < n)
		h = 3 * h + 1;

	while (h > 1) {
		h /= 3;

		for (i = h; i < n; i++) {
			aux = vet[i];
			j = i - h;

			while (j >= 0 && aux < vet[j]) {
				vet[j + h] = vet[j];
				j -= h;
			}

			vet[j + h] = aux;
		}
	}
}

void Merge(int vet[], int esq, int mid, int dir) {
    int n1 = mid - esq + 1;
    int n2 = dir - mid;

    int *L, *R;
	L = new int[n1];
	R = new int[n2];

    for (int i = 0; i < n1; i++)
        L[i] = vet[esq + i];
    for (int j = 0; j < n2; j++)
        R[j] = vet[mid + 1 + j];

    int i = 0, j = 0, k = esq;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vet[k] = L[i];
            i++;
        }
        else {
            vet[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        vet[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        vet[k] = R[j];
        j++;
        k++;
    }

	delete [] L;
	delete [] R;
}

void MergeSort(int vet[], int esq, int dir) {
    if (esq >= dir) {
        return; 
    }
    int mid = esq + (dir - esq) / 2;
    MergeSort(vet, esq, mid);
    MergeSort(vet, mid + 1, dir);
    Merge(vet, esq, mid, dir);
}

#endif // !BASE_H


	