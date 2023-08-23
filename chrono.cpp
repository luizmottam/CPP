#include <chrono>
#include <iomanip>
#include <iostream>
#include <cstdlib>

using namespace std;
using namespace chrono;

int main() {
  auto now = system_clock::to_time_t(system_clock::now());
  tm *localtm = localtime(&now);

  cout << put_time(localtm, "%A %B %Y") << endl;
  cout << put_time(localtm, "%H:%M") << endl;

  system("pause");

  return 0;
}

// %a: Nome abreviado do dia da semana (Dom, Seg, ..., Sábado)
// %A: Nome completo do dia da semana (domingo, segunda, ..., sábado)
// %b ou %h: Nome abreviado do mês (janeiro, fevereiro, ..., dezembro)
// %B: Nome completo do mês (janeiro, fevereiro, ..., dezembro)
// %d: Dia do mês como um número de dois dígitos (01-31)
// %e: Dia do mês como um número de um ou dois dígitos (1-31)
// %m: Mês como um número de dois dígitos (01-12)
// %Y: Ano com século como um número de quatro dígitos (por exemplo, 2023)
// %y: Ano sem século como um número de dois dígitos (00-99)
// %H: Hora (relógio de 24 horas) como um número de dois dígitos (00-23)
// %I: Hora (relógio de 12 horas) como um número de dois dígitos (01-12)
// %M: Minuto como um número de dois dígitos (00-59)
// %S: Segundo como um número de dois dígitos (00-59)
// %p: indicador AM/PM
// %r: Hora no formato de 12 horas (hh:mm:ss AM/PM)
// %R: Hora no formato de relógio de 24 horas (hh:mm)
// %T: Hora no formato de 24 horas com segundos (hh:mm:ss)
// %z: deslocamento de fuso horário no formato ±hhmm (por exemplo, +0530)
// %Z: abreviação do fuso horário (por exemplo, UTC, EST)