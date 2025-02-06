#pragma once

#include <string>

/**
 * @brief Classe que representa uma quantidade de tempo no formato HH:MM:SS.
 *
 * Esta classe permite manipular e realizar operações básicas com períodos de
 * tempo, como adição, subtração e comparação.
 */
class Hours {
 public:
  /**
   * @brief Construtor padrão que inicializa o tempo como 00:00:00.
   */
  Hours();

  /**
   * @brief Construtor que inicializa o tempo com valores específicos.
   * @param h Horas.
   * @param m Minutos (0-59).
   * @param s Segundos (0-59).
   */
  Hours(int h, int m, int s);

  /**
   * @brief Define um novo tempo.
   * @param h Horas.
   * @param m Minutos (0-59).
   * @param s Segundos (0-59).
   */
  void set_time(int h, int m, int s);

  /**
   * @brief Obtém a quantidade de horas.
   * @return O valor das horas.
   */
  int get_hours() const;

  /**
   * @brief Obtém a quantidade de minutos.
   * @return O valor dos minutos.
   */
  int get_minutes() const;

  /**
   * @brief Obtém a quantidade de segundos.
   * @return O valor dos segundos.
   */
  int get_seconds() const;

  /**
   * @brief Retorna o total de segundos desde 00:00:00.
   * @return O tempo convertido em segundos.
   */
  int to_seconds() const;

  /**
   * @brief Retorna o total de minutos desde 00:00:00.
   * @return O tempo convertido em minutos.
   */
  double to_minutes() const;

  /**
   * @brief Retorna o total de horas desde 00:00:00.
   * @return O tempo convertido em horas.
   */
  double to_hours() const;

  /**
   * @brief Retorna o tempo formatado como string "HH:MM:SS".
   * @return Uma string representando o tempo.
   */
  std::string to_string() const;

  /**
   * @brief Operadores de comparação entre dois objetos Hours.
   */
  bool operator==(const Hours& other) const;
  bool operator!=(const Hours& other) const;
  bool operator>(const Hours& other) const;
  bool operator<(const Hours& other) const;
  bool operator>=(const Hours& other) const;
  bool operator<=(const Hours& other) const;

  /**
   * @brief Sobrecarga do operador + para somar dois tempos.
   * @param other O tempo a ser somado.
   * @return Novo objeto Hours com a soma dos tempos.
   */
  Hours operator+(const Hours& other) const;

  /**
   * @brief Sobrecarga do operador - para subtrair dois tempos.
   * @param other O tempo a ser subtraído.
   * @return Novo objeto Hours com a diferença dos tempos.
   */
  Hours operator-(const Hours& other) const;

 private:
  int hours;    ///< Representa as horas.
  int minutes;  ///< Representa os minutos (0-59).
  int seconds;  ///< Representa os segundos (0-59).

  /**
   * @brief Normaliza minutos e segundos para manter valores corretos.
   *
   * Se os segundos ou minutos ultrapassarem 59, eles serão convertidos
   * para o formato correto, ajustando também as horas.
   */
  void normalize();
};
