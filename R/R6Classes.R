## -*- mode: R -*-
###########################################################################
## This file is part of isqg: R package for in silico quantitative genetics
##
##              Copyright (C) 2018 Fernando H. Toledo CIMMYT
##              
## * Filename: R6Classes.R
## 
## * Description: Defines seamless R6 classes (pointer holders)
## 
## * Author: Fernando H. Toledo
## 
## * Maintainer: Fernando H. Toledo
## 
## * Created: Fr Mar 09 2018
## 
##   This program is free software; you can redistribute it and/or modify 
##   it under the terms of the GNU General Public License as published by 
##   the Free Software Foundation; either version 2 of the License, or 
##  (at your option) any later version.
##
##   This program is distributed in the hope that it will be useful, but 
##   WITHOUT ANY WARRANTY; without even the implied warranty of 
##   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU 
##   General Public License for more details.
##
##   You should have received a copy of the GNU General Public License
##   along with this program; if not, write to the Free Software Foundation, 
##   Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
##                                                        
##   `` Far better an approximate answer to the right question, which is 
##   often vague, than the exact answer to the wrong question, which can
##   always be made precise ''
##                          --John Tukey, Ann. Math. Stat. 33(1):13 1962
##
###########################################################################

##' @exportClass Specie
##' @title Class providing object with methods to mimic in silico Genomes
##'
##' @name Specie
##'
##' @description Mean to mimic a in silico Genomes. It is the machine instances of
##'     the simulator.
##' 
##' @return Objects of R6 class with methods to mimic in silico Genomes.
##'
##' @field .ptr External pointer to the instance of the C++ class Specie.
##'
##' @details Object of R6 class that points to C++ objetcs. 
##'
##' @rdname Specie
##'
##' @docType class
NULL 

##' @title R constructor for Specie
##' 
##' @keywords internal
.R_Specie_ctor <-
  R6::R6Class(
    classname = "Specie",
    inherit = NULL,
    portable = TRUE,
    public = list(
      ## general stuffs:
      .ptr = NULL,
      initialize = function(ptr) {
      self$.ptr <- ptr
      },
      print = function(...) {
        cat("<isqg Specie id> ", capture.output(self$.ptr), "\n", sep = "")
        invisible(self)
      },
      ## methods:
      founder = function(code) {
        return(.Cpp_founder_ctor(self, code))
      }, 
      gamete = function(n) {
        return(.Cpp_Gamete_ctor(n, self))
      },
      map = function() {
        df <- data.frame(snp = .Cpp_spc_snps(self), 
                         chr = .Cpp_spc_chrs(self) + 1, ## return indices to R 
                         pos = .Cpp_spc_loci(self),
                         stringsAsFactors = FALSE)      ## snps as characters
        return(df)
      }
    )
  )

##' @exportClass Specimen
##' @title Class providing object with methods to mimic in silico Specimens
##'
##' @name Specimen
##'
##' @description Mean to mimic a in silico Specimens. It is the working instances of
##'     the simulator.
##' 
##' @return Objects of R6 class with methods to mimic in silico Specimens.
##'
##' @field .ptr External pointer to the instance of the C++ class Specimen.
##'
##' @details Object of R6 class that points to C++ objetcs. 
##'
##' @rdname Specimen
##'
##' @docType class
NULL

##' @title R constructor for Specimen
##' 
##' @keywords internal
.R_Specimen_ctor <- 
  R6::R6Class(
    classname = 'Specimen',
    inherit = NULL,
    portable = TRUE,
    public = list(
      ## general stuffs:
      .ptr = NULL,
      initialize = function(ptr) {
        self$.ptr <- ptr
      },
      print = function(...) {
        cat("<isqg Specimen id> ", capture.output(self$.ptr), "\n", sep = "")
        invisible(self)
      },
      ## methods:
      alpha = function(trait) {
        return(.Cpp_trait_alpha_eval(trait, self))
      },
      genotype = function(phase = FALSE) {
        if (phase) {
          codes <- .Cpp_Genotype_cod(self)
          names(codes) <- .Cpp_get_snps(self)
          return(codes)
        } else {
          codes <- .Cpp_Genotype_num(self)
          names(codes) <- .Cpp_get_snps(self)
          return(codes)
        }
      },
      cross = function(n = 1, parent) {
        return(cross(n, self, parent))
      },
      selfcross = function(n = 1, replace = FALSE) {
        if (n == 1 && replace) {
          self <<- selfcross(n, self)
          return(invisible(self))
        } else {
          return(selfcross(n, self))
        }
      },
      dh = function(n = 1, replace = FALSE) {
        if (n == 1 && replace) {
          self <<- dh(n, self)
          return(invisible(self))
        } else {
          return(dh(n, self))
        }
      },
      mirror = function() {
        return(.Cpp_specimen_mirror(self))
      },
      look = function(snp, phase = FALSE) {
        if (phase) {
          return(.Cpp_look_cod(self, snp))
        } else {
          return(.Cpp_look_num(self, snp))
        }
      }
    )
  )

##' @exportClass Trait
##' @title Class providing object with methods to mimic in silico Traits
##'
##' @name Trait
##'
##' @description Mean to mimic a in silico Trait. It is the working instances of
##'     the simulator.
##' 
##' @return Objects of R6 class with methods to mimic in silico Traits.
##'
##' @field .ptr External pointer to the instance of the C++ class Trait.
##'
##' @details Object of R6 class that points to C++ objetcs. 
##'
##' @rdname Trait
##'
##' @docType class
NULL

##' @title R constructor for Trait
##' 
##' @keywords internal
.R_Trait_ctor <- 
  R6::R6Class(
    classname = 'Trait',
    inherit = NULL,
    portable = TRUE,
    public = list(
      ## general stuffs:
      .ptr = NULL,
      initialize = function(ptr) {
        self$.ptr <- ptr
      },
      print = function(...) {
        cat("<isqg Trait id> ", capture.output(self$.ptr), "\n", sep = "")
        invisible(self)
      },
      ## methods:
      alpha = function(gid) { 
        return(.Cpp_trait_alpha_eval(self, gid)) 
      }
    )
  )
                           
## \EOF
###########################################################################
