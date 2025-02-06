#pragma once

/**
 * @brief Classe genérica que representa um par de valores de tipos diferentes.
 *
 * Esta classe armazena dois valores, que podem ser de tipos diferentes.
 * A classe oferece métodos para acessar, modificar e comparar os dois valores.
 * Usando templates, a classe é flexível, permitindo armazenar valores de
 * qualquer tipo. É útil em situações em que se deseja manipular pares de dados
 * heterogêneos, como por exemplo, em algoritmos de ordenação, contagem,
 * mapeamento e mais.
 *
 * @tparam T Tipo do primeiro valor do par.
 * @tparam U Tipo do segundo valor do par.
 */
template <class T, class U>
class Pair {
 public:
  /**
   * @brief Construtor que inicializa o par com dois valores.
   *
   * Este construtor cria um par de valores, onde o primeiro valor é do tipo `T`
   * e o segundo valor é do tipo `U`.
   *
   * @param first O primeiro valor do par, do tipo `T`.
   * @param second O segundo valor do par, do tipo `U`.
   */
  Pair(const T& first, const U& second);

  /**
   * @brief Obtém o primeiro valor do par.
   *
   * Este método retorna uma referência constante ao primeiro valor do par,
   * permitindo que o valor seja acessado sem modificá-lo. O valor retornado é
   * do tipo `T`.
   *
   * @return O primeiro valor do par.
   */
  const T& first() const;

  /**
   * @brief Obtém o primeiro valor do par (não constante).
   *
   * Este método retorna uma referência ao primeiro valor do par, permitindo
   * que o valor seja acessado e modificado diretamente. O valor retornado é do
   * tipo `T`.
   *
   * @return O primeiro valor do par.
   */
  T& first();

  /**
   * @brief Obtém o segundo valor do par.
   *
   * Este método retorna uma referência constante ao segundo valor do par,
   * permitindo que o valor seja acessado sem modificá-lo. O valor retornado é
   * do tipo `U`.
   *
   * @return O segundo valor do par.
   */
  const U& second() const;

  /**
   * @brief Obtém o segundo valor do par (não constante).
   *
   * Este método retorna uma referência ao segundo valor do par, permitindo
   * que o valor seja acessado e modificado diretamente. O valor retornado é do
   * tipo `U`.
   *
   * @return O segundo valor do par.
   */
  U& second();

  /**
   * @brief Compara se dois pares são iguais.
   *
   * Este operador compara o par atual com outro, retornando `true` se os
   * valores do primeiro e segundo elemento de ambos os pares forem iguais.
   *
   * @param other Outro par a ser comparado.
   * @return `true` se os pares forem iguais, `false` caso contrário.
   */
  bool operator==(const Pair<T, U>& other) const;

  /**
   * @brief Compara se dois pares são diferentes.
   *
   * Este operador compara o par atual com outro, retornando `true` se os
   * valores do primeiro ou segundo elemento de ambos os pares forem diferentes.
   *
   * @param other Outro par a ser comparado.
   * @return `true` se os pares forem diferentes, `false` caso contrário.
   */
  bool operator!=(const Pair<T, U>& other) const;

  /**
   * @brief Compara se o par atual é maior que o outro.
   *
   * Este operador compara os pares com base em seus valores, considerando o
   * primeiro valor (`first()`) como o critério principal para a comparação. Se
   * os primeiros valores forem iguais, o segundo valor (`second()`) é usado
   * para a comparação.
   *
   * @param other Outro par a ser comparado.
   * @return `true` se o par atual for maior, `false` caso contrário.
   */
  bool operator>(const Pair<T, U>& other) const;

  /**
   * @brief Compara se o par atual é menor que o outro.
   *
   * Este operador compara os pares com base em seus valores, considerando o
   * primeiro valor (`first()`) como o critério principal para a comparação. Se
   * os primeiros valores forem iguais, o segundo valor (`second()`) é usado
   * para a comparação.
   *
   * @param other Outro par a ser comparado.
   * @return `true` se o par atual for menor, `false` caso contrário.
   */
  bool operator<(const Pair<T, U>& other) const;

  /**
   * @brief Compara se o par atual é maior ou igual ao outro.
   *
   * Este operador compara os pares com base em seus valores, considerando o
   * primeiro valor (`first()`) como o critério principal para a comparação. Se
   * os primeiros valores forem iguais, o segundo valor (`second()`) é usado
   * para a comparação.
   *
   * @param other Outro par a ser comparado.
   * @return `true` se o par atual for maior ou igual, `false` caso contrário.
   */
  bool operator>=(const Pair<T, U>& other) const;

  /**
   * @brief Compara se o par atual é menor ou igual ao outro.
   *
   * Este operador compara os pares com base em seus valores, considerando o
   * primeiro valor (`first()`) como o critério principal para a comparação. Se
   * os primeiros valores forem iguais, o segundo valor (`second()`) é usado
   * para a comparação.
   *
   * @param other Outro par a ser comparado.
   * @return `true` se o par atual for menor ou igual, `false` caso contrário.
   */
  bool operator<=(const Pair<T, U>& other) const;

 private:
  T _first;   ///< O primeiro valor do par.
  U _second;  ///< O segundo valor do par.
};

#include "../src/pair.hpp"