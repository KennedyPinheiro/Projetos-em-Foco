/*

Função onde pede ao usuário para  informar a quantdade de notas e
pede ao usuario o valor das notas referente a quantidade informadas.

Após informar o valor das notas a função vai  somar e logo em seguida divide a a soma
pela quantidade de notas.

abaixo da função o console.log imprime o valor da media das notas.

*/

function medianotas() {
    let aluno = prompt("Me informe o nome do aluno: ");
    let quantidadeNotas = parseInt(prompt("Quantas notas você quer inserir?"));
    let notas = [];

    for (let i = 0; i < quantidadeNotas; i++) {
        let nota = parseFloat(prompt(`Insira a nota ${i + 1}:`));
        notas.push(nota);
    }

    let soma = 0;
    for (let i = 0; i < notas.length; i++) {
        soma += notas[i];
    }

    let media = soma / quantidadeNotas;

    return { aluno, media };
}

let resultado = medianotas();
let aluno = resultado.aluno;
let media = resultado.media;
let aprovacao = media >= 7 ? "Aprovado" : "Reprovado";

console.log(`O Aluno ${aluno} teve a média ${media}, ${aprovacao}`);
