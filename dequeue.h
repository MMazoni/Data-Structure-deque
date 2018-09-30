#ifndef DEQUEUE_H_INCLUDED
#define DEQUEUE_H_INCLUDED

template <typename Tipo>
struct Fila{
    int inic, fim, qtde, tamanho;
    Tipo *v;

    Fila(int tam){
        tamanho = tam;
        qtde = 0;
        inic = 0;
        fim = -1;
        v = new Tipo[tamanho];
    }

    ~Fila(){
        delete v;
    }
    void insereAtras(Tipo x){
        fim++;
        if(fim==tamanho){
            fim = 0;
        }
        v[fim] = x;
        qtde++;
    }
    Tipo removeFrente(){
        Tipo temp=v[inic];
        inic++;
        if(inic == tamanho){
            inic=0;
        }
        qtde--;
        return temp;
    }
    void insereFrente(Tipo x){
	inic--;
	if(inic == -1)
	    inic = tamanho - 1;
	v[inic] = x;
	qtde++;
	}

    Tipo removeAtras(){
	Tipo temp = v[fim];
	fim--;
	if(fim == (-1))
	    fim = tamanho - 1;
	qtde--;
	return temp;
	}

    Tipo primeiro(){
        return inic;
    }

	Tipo ultimo(){
		return fim;
	}

    bool filaCheia(){
        return qtde == tamanho;
    }

    bool filaVazia(){
        return qtde == 0;
    }

    Tipo getValor(Tipo pos){
        return v[pos];
    }
};

#endif // DEQUEUE_H_INCLUDED
