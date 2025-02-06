#pragma once
#include <stddef.h>

/**
 * @class DoublyLinkedList
 * @brief Representa uma lista duplamente encadeada de elementos do tipo
 * genérico T.
 *
 * Esta classe implementa uma lista duplamente encadeada genérica, com
 * métodos para manipulação de elementos, incluindo inserção, remoção,
 * busca e iteração sobre os elementos da lista.
 */
template <class T>
class DoublyLinkedList {
 private:
  /**
   * @brief Estrutura que representa um nó da lista.
   */
  struct Node {
    /**
     * @brief Construtor do nó.
     * @param value Valor do nó a ser armazenado.
     */
    Node(const T &value);

    /**
     * @brief Destruidor do nó.
     *
     * Realiza a desalocação do nó e seus nós subsequentes.
     */
    ~Node();

    T value;     ///< Valor armazenado no nó.
    Node *next;  ///< Ponteiro para o próximo nó na lista.
    Node *prev;  ///< Ponteiro para o nó anterior na lista.
  };

 public:
  /**
   * @brief Iterador da lista duplamente encadeada.
   *
   * Permite a navegação e manipulação dos elementos da lista.
   */
  template <class U>
  class Iterator {
   public:
    /**
     * @brief Desreferencia o iterador.
     * @return Referência ao valor armazenado no nó atual.
     */
    auto &operator*() const;

    /**
     * @brief Incrementa o iterador para o próximo nó.
     * @return Referência ao iterador atualizado.
     */
    Iterator<U> &operator++();

    /**
     * @brief Decrementa o iterador para o nó anterior.
     * @return Referência ao iterador atualizado.
     */
    Iterator<U> &operator--();

    /**
     * @brief Compara dois iteradores para verificar se são iguais.
     * @param other Outro iterador para comparação.
     * @return Verdadeiro se os iteradores forem iguais, falso caso
     * contrário.
     */
    bool operator==(const Iterator<U> &other) const;

    /**
     * @brief Compara dois iteradores para verificar se são diferentes.
     * @param other Outro iterador para comparação.
     * @return Verdadeiro se os iteradores forem diferentes, falso caso
     * contrário.
     */
    bool operator!=(const Iterator<U> &other) const;

    /**
     * @brief Retorna um iterador avançado por um número específico de
     * posições.
     * @param offset Número de posições para avançar.
     * @return Novo iterador avançado.
     */
    Iterator<U> operator+(size_t offset) const;

    /**
     * @brief Retorna um iterador retrocedido por um número específico de
     * posições.
     * @param offset Número de posições para retroceder.
     * @return Novo iterador retrocedido.
     */
    Iterator<U> operator-(size_t offset) const;

    /**
     * @brief Calcula a distância entre dois iteradores.
     * @param other Outro iterador para calcular a distância.
     * @return Distância entre os dois iteradores.
     */
    size_t operator-(const Iterator<U> other) const;

   private:
    /**
     * @brief Construtor do iterador.
     * @param ptr Ponteiro para o nó.
     * @param end Flag indicando se o iterador está no final.
     */
    Iterator(U *ptr, bool end);

    U *node;   ///< Ponteiro para o nó.
    bool end;  ///< Flag indicando se o iterador chegou ao final da lista.

    friend class DoublyLinkedList;
  };

  using iterator = DoublyLinkedList<T>::Iterator<Node>;
  using const_iterator = DoublyLinkedList<T>::Iterator<const Node>;

  /**
   * @brief Construtor padrão da lista duplamente encadeada.
   */
  DoublyLinkedList();

  /**
   * @brief Construtor de cópia da lista duplamente encadeada.
   * @param list Lista a ser copiada.
   */
  DoublyLinkedList(const DoublyLinkedList &list);

  /**
   * @brief Operador de atribuição para copiar uma lista duplamente encadeada.
   * @param list Lista a ser atribuída.
   * @return Referência para a lista atual.
   */
  DoublyLinkedList &operator=(const DoublyLinkedList &list);

  /**
   * @brief Destruidor da lista duplamente encadeada.
   *
   * Desaloca todos os nós da lista.
   */
  ~DoublyLinkedList();

  /**
   * @brief Obtém o tamanho da lista.
   * @return Número de elementos na lista.
   */
  size_t size() const;

  /**
   * @brief Verifica se a lista está vazia.
   * @return Verdadeiro se a lista estiver vazia, falso caso contrário.
   */
  bool empty() const;

  /**
   * @brief Retorna um iterador para o início da lista (apontando para o
   * primeiro nó).
   * @return Iterador para o início da lista.
   */
  const_iterator begin() const;

  /**
   * @brief Retorna um iterador para o final da lista (apontando para após o
   * último nó).
   * @return Iterador para o final da lista.
   */
  const_iterator end() const;

  /**
   * @brief Retorna um iterador para o início da lista (apontando para o
   * primeiro nó).
   * @return Iterador para o início da lista.
   */
  iterator begin();

  /**
   * @brief Retorna um iterador para o final da lista (apontando para após o
   * último nó).
   * @return Iterador para o final da lista.
   */
  iterator end();

  /**
   * @brief Adiciona um elemento ao início da lista.
   * @param value Valor a ser adicionado.
   */
  void push_front(const T &value);

  /**
   * @brief Adiciona um elemento ao final da lista.
   * @param value Valor a ser adicionado.
   */
  void push_back(const T &value);

  /**
   * @brief Insere um elemento em uma posição específica da lista.
   * @param pos Iterador apontando para a posição de inserção.
   * @param value Valor a ser inserido.
   */
  void insert(iterator pos, const T &value);

  /**
   * @brief Remove o primeiro elemento da lista.
   *
   * @throw std::out_of_range Se a lista estiver vazia.
   */
  void pop_front();

  /**
   * @brief Remove o último elemento da lista.
   *
   * @throw std::out_of_range Se a lista estiver vazia.
   */
  void pop_back();

  /**
   * @brief Remove uma faixa de elementos da lista, definida pelos iteradores.
   * @param first Iterador apontando para o primeiro elemento a ser removido.
   * @param last Iterador apontando após o último elemento a ser removido.
   */
  void erase(iterator first, iterator last);

  /**
   * @brief Remove todos os elementos da lista.
   */
  void clear();

  /**
   * @brief Encontra um item na lista e retorna um iterador para ele.
   * @param item Valor a ser procurado.
   * @return Iterador apontando para o item encontrado, ou `end()` caso o item
   * não seja encontrado.
   */
  const_iterator find(const T &item) const;

  /**
   * @brief Encontra um item na lista e retorna um iterador para ele.
   * @param item Valor a ser procurado.
   * @return Iterador apontando para o item encontrado, ou `end()` caso o item
   * não seja encontrado.
   */
  iterator find(const T &item);

  /**
   * @brief Verifica se um item existe na lista.
   * @param item Valor a ser verificado.
   * @return Verdadeiro se o item estiver presente na lista, falso caso
   * contrário.
   */
  bool contains(const T &item) const;

  /**
   * @brief Acessa um elemento por seu índice.
   * @param index Índice do elemento.
   * @return Referência ao valor no índice fornecido.
   * @throw std::out_of_range Se o índice for inválido.
   */
  T &operator[](size_t index);

  /**
   * @brief Acessa um elemento por seu índice.
   * @param index Índice do elemento.
   * @return Referência constante ao valor no índice fornecido.
   * @throw std::out_of_range Se o índice for inválido.
   */
  const T &operator[](size_t index) const;

  /**
   * @brief Imprime os elementos da lista.
   */
  void print() const;

 private:
  Node *head;   /**< Ponteiro para o primeiro nó da lista (inicialmente nullptr
                   para listas vazias). */
  Node *tail;   /**< Ponteiro para o último nó da lista (inicialmente nullptr
                   para listas vazias). */
  size_t _size; /**< Tamanho atual da lista, representando o número de
                   elementos (inicialmente 0). */
};

#include "../src/doubly_linked_list.hpp"
