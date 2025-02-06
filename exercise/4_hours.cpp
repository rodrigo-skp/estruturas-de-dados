#include <iostream>

#include "../include/hours.hpp"

/**
 * ! Exercício 4: Planejamento de Intervalos
 *
 * Um estudante está organizando o seu cronograma de estudos. Ele possui
 * uma série de blocos de tempo que ele planeja dedicar a diferentes tarefas.
 * Sua tarefa é calcular o tempo total planejado para estudar e ajustar o tempo
 * de cada bloco de acordo com o tempo total disponível.
 *
 * O estudante tem uma quantidade de tempo disponível (horário de início e
 * término) e uma lista de tempos que ele planeja dedicar a cada atividade. O
 * programa deve:
 * - Calcular o tempo total que ele planejou para as atividades.
 * - Ajustar o tempo disponível, subtraindo o tempo total planejado.
 * - Verificar se o estudante tem tempo suficiente para todas as atividades.
 *
 * ! Entrada:
 * O programa deve receber a quantidade de tempo disponível em horas, minutos e
 * segundos e uma lista de atividades, onde cada atividade é um tempo planejado.
 *
 * - A primeira linha da entrada contém três inteiros `h`, `m`, `s`, que
 * representam o horário de início do estudo (hora, minuto, segundo).
 * - A segunda linha contém o número de atividades `n`.
 * - As próximas `n` linhas contêm os tempos planejados para cada atividade, em
 * formato `h m s`.
 *
 * ! Saída:
 * O programa deve calcular:
 * - O tempo total planejado para todas as atividades.
 * - O tempo restante (se houver) após subtrair o tempo total planejado do tempo
 * disponível.
 * - Uma mensagem indicando se o estudante tem tempo suficiente ou não.
 *
 * ! Exemplo de Entrada:
 * 10 00 00  // Horário de início (10:00:00)
 * 3         // Número de atividades
 * 01 00 00  // Atividade 1 (1 hora)
 * 02 00 00  // Atividade 2 (2 horas)
 * 01 30 00  // Atividade 3 (1 hora e 30 minutos)
 *
 * ! Exemplo de Saída:
 * Tempo total planejado: 04:30:00
 * Tempo restante: 05:30:00
 * O estudante tem tempo suficiente!
 *
 * ! Observações:
 * - Caso o tempo planejado ultrapasse o tempo disponível, exiba: "Tempo
 * insuficiente!"
 * - Utilize a classe Hours e seus métodos para realizar os cálculos.
 */

int main() {
  /* code */
  return 0;
}
