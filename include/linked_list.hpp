#pragma once
#include <stddef.h>

/**
 * @class LinkedList
 * @brief Representa uma lista encadeada de elementos do tipo genérico T.
 *
 * A classe LinkedList implementa uma estrutura de dados do tipo lista
 * encadeada, onde cada elemento (nó) contém um valor e um ponteiro para o
 * próximo nó. Ela oferece métodos para manipular e acessar os elementos da
 * lista, como inserção, remoção, busca, e verificação do tamanho da lista.
 *
 * @tparam T Tipo dos elementos armazenados na lista.
 */
template <class T>
class LinkedList {
  /**
   * @struct Node
   * @brief Estrutura interna que representa um nó na lista.
   *
   * Cada nó contém um valor e um ponteiro para o próximo nó na lista.
   */
  struct Node {
    /**
     * @brief Construtor do nó. Inicializa o nó com um valor fornecido.
     *
     * @param value O valor a ser armazenado no nó.
     */
    Node(const T &value);

    /**
     * @brief Destruidor do nó. Libera o próximo nó recursivamente.
     */
    ~Node();

    T value;    /**< Valor armazenado no nó. */
    Node *next; /**< Ponteiro para o próximo nó na lista. */
  };

 public:
  /**
   * @brief Construtor da lista. Cria uma lista vazia.
   */
  LinkedList();

  /**
   * @brief Destruidor da lista. Libera a memória dos nós.
   */
  ~LinkedList();

  /**
   * @brief Construtor de cópia. Cria uma nova lista como uma cópia de outra.
   *
   * @param list A lista a ser copiada.
   */
  LinkedList(const LinkedList &list);

  /**
   * @brief Operador de atribuição. Atribui os elementos de uma lista a outra.
   *
   * @param list A lista a ser copiada.
   * @return Uma referência para o objeto da classe.
   */
  LinkedList &operator=(const LinkedList &list);

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
   * @brief Adiciona um elemento no início da lista.
   *
   * @param value O valor do elemento a ser adicionado.
   */
  void push_front(const T &value);

  /**
   * @brief Insere um elemento na posição especificada.
   *
   * @param index O índice onde o elemento será inserido.
   * @param value O valor do elemento a ser inserido.
   * @throw std::out_of_range Se o índice for inválido.
   */
  void insert(size_t index, const T &value);

  /**
   * @brief Remove o primeiro elemento da lista.
   *
   * @throw std::out_of_range Se a lista estiver vazia.
   */
  void pop_front();

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
   * @return A referência para o valor encontrado.
   * @throw std::out_of_range Se o elemento não for encontrado.
   */
  T &find(const T &item);

  /**
   * @brief Encontra um elemento na lista (const).
   *
   * @param item O elemento a ser buscado.
   * @return A referência constante para o valor encontrado.
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
   * @brief Imprime os elementos da lista no formato "valor1 -> valor2 -> ...
   * -> NULL".
   */
  void print() const;

 private:
  Node *head;   /**< Ponteiro para o primeiro nó da lista. */
  size_t _size; /**< Tamanho da lista. */
};

#include "../src/linked_list.hpp"
