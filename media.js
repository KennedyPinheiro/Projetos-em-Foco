function medianotas(valor,valor1,valor2){
    let quantidadeNotas = parseInt(prompt("Quantas notas você quer inserir?"));
    let notas = [];

    for (let i = 0; i < quantidadeNotas; i++) {
        let nota =(prompt(`Insira a nota ${i + 1}:`));
        notas.push(nota);
    }

   let soma = 0;
    for (let i = 0; i < notas.length; i++) {
        soma += notas[i];
    }

    let media = soma / quantidadeNotas;
    return media;

    }

let media = medianotas();
console.log(`A média das notas é: ${media}`)
