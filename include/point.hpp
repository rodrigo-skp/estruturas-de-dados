#pragma once

/**
 * @class Point
 * @brief Representa um ponto no plano cartesiano 2D.
 */
class Point {
 public:
  /**
   * @brief Construtor da classe Point.
   * @param x Coordenada x do ponto (padrão 0).
   * @param y Coordenada y do ponto (padrão 0).
   */
  Point(double x = 0, double y = 0);

  /**
   * @brief Retorna a coordenada x do ponto.
   * @return Coordenada x.
   */
  double get_x() const;

  /**
   * @brief Retorna a coordenada y do ponto.
   * @return Coordenada y.
   */
  double get_y() const;

  /**
   * @brief Calcula a distância entre o ponto atual e outro ponto.
   *
   * Este método calcula a **distância euclidiana** entre o ponto atual e o
   * ponto passado como argumento. A fórmula matemática para a distância entre
   * dois pontos \f$P_1(x_1, y_1)\f$ e \f$P_2(x_2, y_2)\f$ no plano cartesiano é
   * dada por:
   *
   * $$
   * d(P_1, P_2) = \sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2}
   * $$
   *
   * Onde:
   * - \f$(x_1, y_1)\f$ são as coordenadas do ponto atual.
   * - \f$(x_2, y_2)\f$ são as coordenadas do ponto `other`.
   * - \f$d(P_1, P_2)\f$ é a distância euclidiana entre os dois pontos.
   *
   * @param other Outro ponto.
   * @return Distância euclidiana entre os dois pontos.
   */
  double distance(const Point& other) const;

  /**
   * @brief Desloca o ponto pelas coordenadas dx e dy.
   * @param dx Deslocamento na coordenada x.
   * @param dy Deslocamento na coordenada y.
   */
  void move(double dx, double dy);

  /**
   * @brief Compara se o ponto atual é igual a outro ponto.
   * @param other Outro ponto.
   * @return Verdadeiro se os pontos forem iguais, falso caso contrário.
   */
  bool is_equal(const Point& other) const;

  /**
   * @brief Imprime as coordenadas do ponto no formato (x, y).
   */
  void print() const;

 private:
  double x;  ///< Coordenada x do ponto.
  double y;  ///< Coordenada y do ponto.
};
