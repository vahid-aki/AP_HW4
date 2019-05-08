//
// Created by Vahid on 5/3/2019.
//

#include "ctext.h"

Ctext::Ctext(const std::string& ch) : str{ch} {}

Ctext::Ctext() : Ctext("") {}

const std::string& Ctext::getText() {
  return str;
}
