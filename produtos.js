class Produto{
    constructor(nome,valor,categoria){
        this.nome = nome;
        this.valor = valor;
        this.categoria = categoria;
    }

    getNome(){
        return this.nome;
    }

    setnovoNome(NovoNome){
        this.nome = NovoNome;
    }

    getValor(){
        return this.valor;
    }

    setnovoValor(NovoValor){
        this.valor = NovoValor;
    }

    getCategoria(){
        return this.categoria;
    }

    setnovoCategoria(NovoCategoria){
        this.categoria = NovoCategoria;
    }

    setTudo(NovoNome,NovoValor,NovoCategoria){
        this.nome = NovoNome;
        this.valor = NovoValor;
        this.categoria = NovoCategoria;
    }

    mostrarDEtalhes(){
        console.log(`
        Nome : ${this.nome}
        Preço : ${this.valor}
        Categoria: ${this.categoria}
         `)
    }

}

let produto1 = new Produto("Notebook", 3000 ,"Elêtronicos");
produto1.mostrarDEtalhes();

produto1.setTudo("NoteBook Gamer", 3000 , "Elêtronicos e Acessórios");
produto1.mostrarDEtalhes();

let produto2 = new Produto("Cafeteira", 150 , "Eletrodometicos");
produto2.mostrarDEtalhes();

produto2.setTudo("Cafeteira Elétrica", 200 , "Cozinha");
produto2.mostrarDEtalhes();
 