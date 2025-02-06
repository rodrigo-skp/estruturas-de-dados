#pragma once
#include <stddef.h>

/**
 * @class VectorList
 * @brief Representa uma lista de elementos do tipo genérico T.
 *
 * A classe VectorList permite manipular elementos com métodos para
 * adicionar, remover, buscar e modificar elementos, além de verificar o tamanho
 * e a capacidade da lista.
 *
 * @tparam T Tipo dos elementos armazenados na lista.
 */
template <class T>
class VectorList {
 public:
  /**
   * @brief Construtor da classe. Cria uma lista com a capacidade definida.
   *
   * @param capacity A capacidade da lista.
   */
  VectorList(size_t capacity);

  /**
   * @brief Destruidor da classe. Libera a memória alocada para os dados.
   */
  ~VectorList();

  /**
   * @brief Construtor de cópia. Cria uma nova lista como uma cópia da lista
   * fornecida.
   *
   * @param list A lista a ser copiada.
   */
  VectorList(const VectorList &list);

  /**
   * @brief Operador de atribuição. Atribui os elementos de uma lista a outra.
   *
   * @param list A lista a ser copiada.
   * @return Uma referência para o objeto da classe.
   */
  VectorList &operator=(const VectorList &list);

  /**
   * @brief Retorna o número de elementos armazenados na lista.
   *
   * @return O tamanho atual da lista.
   */
  size_t size() const;

  /**
   * @brief Verifica se a lista está vazia.
   *
   * @return Verdadeiro se a lista estiver vazia, caso contrário falso.
   */
  bool empty() const;

  /**
   * @brief Retorna a capacidade atual da lista.
   *
   * @return A capacidade da lista (máximo de elementos que pode ser
   * armazenado sem realocar).
   */
  size_t capacity() const;

  /**
   * @brief Adiciona um elemento no final da lista.
   *
   * Se a capacidade for atingida, uma exceção é lançada.
   *
   * @param value O valor do elemento a ser adicionado.
   * @throw std::length_error Se a capacidade for excedida.
   */
  void push_back(const T &value);

  /**
   * @brief Insere um elemento na posição especificada.
   *
   * @param index O índice onde o elemento será inserido.
   * @param value O valor do elemento a ser inserido.
   * @throw std::out_of_range Se o índice for inválido.
   * @throw std::length_error Se a capacidade for excedida.
   */
  void insert(size_t index, const T &value);

  /**
   * @brief Remove o último elemento da lista.
   *
   * @throw std::out_of_range Se a lista estiver vazia.
   */
  void pop_back();

  /**
   * @brief Remove o elemento na posição especificada.
   *
   * @param index O índice do elemento a ser removido.
   * @throw std::out_of_range Se o índice for inválido.
   */
  void remove(size_t index);

  /**
   * @brief Limpa todos os elementos da lista.
   */
  void clear();

  /**
   * @brief Encontra um elemento na lista.
   *
   * @param item O elemento a ser buscado.
   * @return A referência para o elemento encontrado.
   * @throw std::out_of_range Se o elemento não for encontrado.
   */
  T &find(const T &item);

  /**
   * @brief Encontra um elemento na lista (const).
   *
   * @param item O elemento a ser buscado.
   * @return A referência constante para o elemento encontrado.
   * @throw std::out_of_range Se o elemento não for encontrado.
   */
  const T &find(const T &item) const;

  /**
   * @brief Verifica se um elemento está contido na lista.
   *
   * @param item O elemento a ser verificado.
   * @return Verdadeiro se o elemento estiver na lista, caso contrário falso.
   */
  bool contains(const T &item) const;

  /**
   * @brief Acesso ao elemento na posição especificada.
   *
   * @param index O índice do elemento.
   * @return A referência para o elemento no índice especificado.
   * @throw std::out_of_range Se o índice for inválido.
   */
  T &operator[](size_t index);

  /**
   * @brief Acesso ao elemento na posição especificada (const).
   *
   * @param index O índice do elemento.
   * @return A referência constante para o elemento no índice especificado.
   * @throw std::out_of_range Se o índice for inválido.
   */
  const T &operator[](size_t index) const;

  /**
   * @brief Imprime os elementos da lista no formato "elemento1, elemento2,
   * ...".
   */
  void print() const;

 private:
  T *data;          /**< Ponteiro para os dados armazenados na lista. */
  size_t _size;     /**< Tamanho atual da lista. */
  size_t _capacity; /**< Capacidade da lista. */
};

#include "../src/vector_list.hpp"
