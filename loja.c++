
#include <iostream>
#include <locale>

using namespace std;


struct Venda {
    string item;
    string cliente;
    string valor;
    string dataVenda;
    string dataRecebimento;
    string situacao;
};
    
int main()
{
    setlocale(LC_ALL, "portuguese");
    string nome[10],sexo[10], nasc[10], end[10], timefav[10], selecaofav[10];
    string des[10], mod[10], mar[10], cor[10];
    string dataCompra[10], sit[10];
    string cpf[10], preco[10], tama[10], valorCompra[10];
    string item[10];
    string list;
    string pro;


    int op = -1;
    int indice = 0;
    
    bool achei=false;
    bool achei1=false;

    Venda vendas[10]; 
    int numVendas = 0; 

    while (op!=0)
    {
        /*MENU PRINCIPAR*/
        cout << "MENU PRINCIPAL!!:\n\n1-Cadastro de Pessoas\n2-Cadastro De Produtos\n3-Cadastro De Itens De Produtos\n4-Cadastro De Vendas\n5-Listar Produtos Com Determinado Preço\n6-Listar 10 Ultimas Vendas\n0-Sair\n\nEscolha Uma Opção: ";
        cin>>op;

        switch (op)
        {
        case 1:
        
			
		/*CADASTRO DE PESSOA*/
            cout<<"\n\nCadastrar Uma Pessoa\n";
            cout<<"Nome: ";cin>>nome[indice];
            cout<<"CPF: ";cin>>cpf[indice];
            cout<<"Sexo: ";cin>>sexo[indice];
            cout<<"Nascimento: ";cin>>nasc[indice];
            cout<<"Endereço: ";cin>>end[indice];
            cout<<"Time  Favorito: ";cin>>timefav[indice];
            cout<<"Seleção Favorita: ";cin>>selecaofav[indice];
			
        /*QUAL ESPORTE GOSTA*/    
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
		
        /*CADASTRAR UM PRODUTO*/

			cout<<"\n\nCadastrar Um Produto\n";
            cout<<"Descriçao do Produto: ";cin>>des[indice];
            cout<<"Modelo Do Produto: ";cin>>mod[indice];
            cout<<"Marca Do  Produto: ";cin>>mar[indice];
            cout<<"Tamanho Do Produto (EM CM): ";cin>>tama[indice];
            cout<<"Cor  Do Produto: ";cin>>cor[indice];
            cout<<"Preço Do Produto: ";cin>>preco[indice];
			indice++;
			cout<<"Cadastro Feito Com Sucesso, Obrigado!!.\n\n";
 	  		break;
        
		case 3: 
		
        /*CADASTRAR ITEM DE PRODUTO*/

			cout<<"\n\nCadastrar Os Itens De Produtos\n";
            cout<<"Produto: ";cin>>item[indice];
            cout<<"Data De Compra: ";cin>>dataCompra[indice];
            cout<<"Valor Da Compra: ";cin>>valorCompra[indice];
            cout<<"Situação: ";cin>>sit[indice];
			indice++;
			cout<<"Cadastro Feito Com Sucesso, Obrigado!!.\n\n";
 	  		break;
 	  	
 	  	case 4: 
		
        /*CADASTRAR UMA VENDA*/

			 cout << "\n\nCadastrar Uma Venda De Produto\n";
            cout << "Produto Vendido: ";
            cin >> pro;

            for (int i = 0; i < indice; i++)
            {
                if (pro == item[i])
                {
                    vendas[numVendas].item = item[i];
                    cout << "Cliente Comprador: ";
                    cin >> vendas[numVendas].cliente;
                    cout << "Valor Da Venda: ";
                    cin >> vendas[numVendas].valor;
                    cout << "Data Da Venda: ";
                    cin >> vendas[numVendas].dataVenda;
                    cout << "Data de Recebimento: ";
                    cin >> vendas[numVendas].dataRecebimento;
                    cout << "Situação: ";
                    cin >> vendas[numVendas].situacao;

                    numVendas++;
                    achei = true;
                    cout << "Cadastro Feito Com Sucesso, Obrigado!!.\n\n";

                    if (numVendas > 10)
                        numVendas = 10; 
                }
            }

            if (!achei)
                cout << "Não existe esse produto\n\n";

            break;
 	  	
        

 	  	case 5:

        /*LISTAR PRODUTO COM O PREÇO ESPECIFICO*/

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
                indice++;
                achei1=true;
                cout << "Esses são os produtos.\n\n";
                
			   }
			}
			if (!achei1)
				cout<<"Não Existe Produto Com Esse Preço\n\n";
                break;
			
		case 6:
			
        /*LISTAR ULTIMAS 10 VENDAS*/

			cout << "\nAs Últimas 10 Vendas São:\n";
            for (int i = numVendas - 1; i >= 0; i--)
            {
                cout << "Item: " << vendas[i].item << endl;
                cout << "Cliente: " << vendas[i].cliente << endl;
                cout << "Valor: " << vendas[i].valor << endl;
                cout << "Data de Venda: " << vendas[i].dataVenda << endl;
                cout << "Data de Recebimento: " << vendas[i].dataRecebimento << endl;
                cout << "Situação: " << vendas[i].situacao << endl;
                cout << endl;
            }
            break;
   								
        break;
        default:
        	cout<<"Opção invalida\n\n";
            break;
        }
    }


    return 0;
}