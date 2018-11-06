/*
 * (C) Copyright 2018 UCAR
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 */

#include "src/Traits.h"
#include "src/Transforms/instantiateBalanceOpFactory.h"
#include "oops/runs/GenEnsPertB.h"
#include "src/Run/Run.h"

int main(int argc,  char ** argv) {
  oops::Run run(argc, argv);
  soca::instantiateBalanceOpFactory();  
  oops::GenEnsPertB<soca::Traits> ensgen;
  run.execute(ensgen);
  return 0;
}
