
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");
    string nome[10], cpf[10], sexo[10], nasc[10], end[10], timefav[10], selecaofav[10];
    string des[10], mod[10], mar[10], tama[10], cor[10], preco[10];
    string pro[10], dataCompra[10], valorCompra[10], sit[10];
    string cli[10], valorVenda[10], dataVenda[10], dataRecebimento[10];
    string list;
    bool achei=false;

    int op = -1;
    int indice = 0;
    

    while (op!=0)
    {
        cout << "MENU PRINCIPAL!!:\n\n1-Cadastro de Pessoas\n2-Cadastro De Produtos\n3-Cadastro De Itens De Produtos\n4-Cadastro De Vendas\n5-Listar Produtos Com Determinado Preço\n6-Listar 10 Ultimas Vendas\n0-Sair\n\nEscolha Uma Opção: ";
        cin>>op;

        switch (op)
        {
        case 1:
        
			
		   
            cout<<"\n\nCadastrar Uma Pessoa\n";
            cout<<"Nome: ";cin>>nome[indice];
            cout<<"CPF: ";cin>>cpf[indice];
            cout<<"Sexo: ";cin>>sexo[indice];
            cout<<"Nascimento: ";cin>>nasc[indice];
            cout<<"Endereço: ";cin>>end[indice];
            cout<<"Time  Favorito: ";cin>>timefav[indice];
            cout<<"Seleção Favorita: ";cin>>selecaofav[indice];
			
			switch (op)
			{
				case 1:
					cout<<"\n\nQual Você Gosta ?\n1-Futebol\n2-Volei\n3-Basquete\n4-Handbol\n5-Nataçao\n6-Ciclismo\n7-Atletismo\n8-Musculação\n\nEscolha O Que Voce Gosta: ";
					cin>>op;
					
				
			}
			indice++;
			cout<<"Cadastro Feito Com Sucesso, Obrigado!!.\n\n";
			break;

        
		case 2: 
		
			cout<<"\n\nCadastrar Um Produto\n";
            cout<<"Descriçao do Produto: ";cin>>des[indice];
            cout<<"Modelo Do Produto: ";cin>>mod[indice];
            cout<<"Marca Do  Produto: ";cin>>mar[indice];
            cout<<"Tamanho Do Produto: ";cin>>tama[indice];
            cout<<"Cor  Do Produto: ";cin>>cor[indice];
            cout<<"Preço Do Produto: ";cin>>preco[indice];
			indice++;
			cout<<"Cadastro Feito Com Sucesso, Obrigado!!.\n\n";
 	  		break;
        
		case 3: 
		
			cout<<"\n\nCadastrar Os Itens De Produtos\n";
            cout<<"Produto: ";cin>>pro[indice];
            cout<<"Data De Compra: ";cin>>dataCompra[indice];
            cout<<"Valor Da Compra: ";cin>>valorCompra[indice];
            cout<<"Situação: ";cin>>sit[indice];
			indice++;
			cout<<"Cadastro Feito Com Sucesso, Obrigado!!.\n\n";
 	  		break;
 	  	
 	  	case 4: 
		
			cout<<"\n\nCadastrar Uma Venda De Produto\n";
            cout<<"Produto Vendido: ";cin>>pro[indice];
            cout<<"Cliente Comprador: ";cin>>cli[indice];
            cout<<"Valor Da Venda: ";cin>>valorVenda[indice];
            cout<<"Data Da Venda: ";cin>>dataVenda[indice];
            cout<<"Data de Recebimento: ";cin>>dataRecebimento[indice];
            cout<<"Situaçao: ";cin>>sit[indice];
			indice++;
			cout<<"Cadastro Feito Com Sucesso, Obrigado!!.\n\n";
 	  		break;
 	  	
 	  	case 5:
 	  		cout<<"\n\nListagem De Produtos De Acordo Com O Preço\n";
 	  		cout<<"Informe O Preço Para A Listagem: ";
 	  		cin>>list;
 	  		
			cout << "\nProdutos com preço igual a " << list << ":\n";
 	  		for(int i=0;i<indice;i++) 
			{
 	  			if (preco[i]==list)
			   {
			   	cout << "Descrição: " << des[i] << endl;
                cout << "Modelo: " << mod[i] << endl;
                cout << "Marca: " << mar[i] << endl;
				cout << "Tamanho: " << tama[i] << endl;
				cout << "Cor: " << cor[i] << endl;
                cout << "Preço: " << preco[i] << endl;
                cout << endl;
			   }

	   		
			}
			if (!achei)
				cout<<"Não Existe Produto Com Esse Preço\n\n";
			
		case 6:
			
 	  		
			cout << "\nAs Ultimas 10 Vendas Sao: " << list << ":\n";
 	  		for(int i=0;i<10;i++) 
			{
 	  			if (preco[10]==list)
			   {
			   	cout << ": " << pro[i] << endl;
                cout << endl;
			   }	   		
			}							
        break;
        default:
        	cout<<"Opção invalida\n\n";
            break;
        }
    }


    return 0;
}